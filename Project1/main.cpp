#include <iostream>
using namespace std;
#define SIZE 10
int first_group(int* arr, int count);
int main() {
	int array[SIZE];
	int count = 1;
	int i = 0; 
	cout << "Input marks of first group (-1 to stop) to 10 marks: ";
	cin >> array[i];


	while (array[i] != -1) {

		if (array[i] < 0 || array[i]>10) {
			cout << "Bruh";
			break;
		}
		count++;
		i++;
		cin >> array[i];
	}

	
	
	
		cout<< first_group(array, count);
	return 0;
}