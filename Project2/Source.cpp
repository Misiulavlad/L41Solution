
#include "logic.h"
int sum_elemt(int matrix[N][N]) {
	int sum = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}

int sum_elemt_add(int matrix[N][N]) {
	int sum = 0;

	for (int i = 0; i < N; i++) {
			sum += matrix[i][i];
	}
	return sum;
}