//---------Merge Sort------------
//Time COmplexity-> O(nlog(n))

#include <iostream>

#define LOG(x, y) std::cout<< x << " " << y <<std::endl;
void merge(int a[], int left, int mid, int right) {
	size_t size = right - left + 1;
	int *tempArr = new int[size];
	for(int i=left ; i<=right ; i++){
		tempArr[i] = a[i];
	}
	int i = left, j = mid + 1, k = left;
	while (i <= mid && j <= right) {
		if (tempArr[i] < tempArr[j]) {
			a[k++] = tempArr[i++];
		}
		else {
			a[k++] = tempArr[j++];
		}
	}
	while (i <= mid) {
		//LOG("VAL:", tempArr[i]);
		a[k++] = tempArr[i++];
	}
	//TODO: why delete[] tempArr; throws runtime error
}

void mergeSort(int a[], const int begin, const int end) {
	if (begin < end) {
		int mid = (begin+end) / 2;
		mergeSort(a, begin, mid);
		mergeSort(a, mid + 1, end);
		merge(a, begin, mid, end);
	}
}

int main(){
	int a[]{1,2,6,9,1,2,6,9};
	size_t n = sizeof(a) / sizeof(a[0]);
	mergeSort(a, 0, n-1);
}