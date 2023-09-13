/**Selection Sort
 *Time complexity->O(n^2)
 *Space Complexity-> O(1)
 */

#include <iostream>
#define LOG(x, y) std::cout<< x << " " << y <<std::endl;

int main() {
    int a[] = { 2,4,1,5,3 }, min, n=5;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				if (a[i] != a[j]) {
					a[i] ^= a[j] ^= a[i] ^= a[j];
				}
			}
		}
	}
}