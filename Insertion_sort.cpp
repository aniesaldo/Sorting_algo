/**---------Insertion Sort----------
  *Time Complexity-> O(n) for best case, O(n^2) for average and worst case
  * Space Complexity-> O(1)
  */

#include<iostream>

#define LOG(x, y) std::cout<< x << " " << y <<std::endl;

int main() {
    int a[]{ 6,4,2,9,6,0 }, n{ 6 }, key, j;
    for (int i = 1; i < n; i++) {
		std::cout << "Hello" << i << std::endl;
		key = a[i];
		j = i;
		while ((key < a[j - 1]) && (j > 0)) {
			a[j] = a[j - 1]; //change current index value to value of previous index
							 //Since the current value is bigger than previous
			j--;
		}
		a[j] = key;			 //Assign key value to jth index which is the apt position for the key value
	}
}