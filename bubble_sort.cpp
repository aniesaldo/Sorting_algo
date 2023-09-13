/**-----------Bubble Sort----------------
  *Time Complexity->O(n^2)
  *Space Complexity-> O(1)
  */
#include <iostream>
#define LOG(x, y) std::cout<< x << " " << y <<std::endl;

int main(){
    int a[]{ 4,6,3,7,3 }, n=5;
	for (int i = 0; i < n-1 ; i++) {
		for (int j = 0; j < n-1-i; j++) {
			LOG(i, j);
			if (a[j] > a[j + 1]) {
				LOG(10, j);
				a[j] = a[j] + a[j + 1];
				a[j+1] = a[j] - a[j + 1];
				a[j] = a[j] - a[j + 1];
			}
		}
	}
}
