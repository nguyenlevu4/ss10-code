#include <stdio.h>

int main() {
	int arr[] = {10, 55, 5, 20, 15, 30, 0};
	int size = sizeof(arr) / sizeof(arr[0]);
	int a, b = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("mang da sap xeo theo thu tu tang dan: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}