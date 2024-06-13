﻿#include <iostream>
using namespace std;
void shiftDown(int arr[][4], int rows, int SIZE, int steps) {
	if (steps == 0) {
		return;
	}
	int temp[SIZE];
	for (int j = 0; j < SIZE; j++) {
		temp[j] = arr[rows - 1][j];
	}
	for (int i = rows - 1; i > 0; i--) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = arr[i - 1][j];
		}
	}
	for (int j = 0; j < SIZE; j++) {
		arr[0][j] = temp[j];
	}
	shiftDown(arr, rows, SIZE, steps - 1);
}
int main() {
	int arr[3][4] = { {4, 5, 6, 7}, {1, 2, 4, 1}, {4, 3, 6, 8} };
	shiftDown(arr, 3, 4, 1);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


