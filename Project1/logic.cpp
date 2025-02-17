#include <iostream>
using namespace std;
int first_group(int* arr, int count) {
	int sum = 0;
	for (int i = 0; i < count-1; i++) {
		sum += arr[i];
		i++;
	}
	int middle = sum / count;

	return middle;
}