#include <stdio.h>

int main() {
	int arr[] = {10, 55, 5, 20, 15, 30, 0};
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	printf("mang da sap xeo theo thu tu tang dan: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}