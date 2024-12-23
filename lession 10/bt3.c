#include <stdio.h>

int main() {
	int arr[] = {10, 55, 5, 20, 15, 30, 0};
	int size = sizeof(arr) / sizeof(arr[0]);
	 for (int i = 1; i < size; i++) {
		int key = arr[i];
		 int j = i - 1;
		  while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j=j-1;// or j--
	}
	  arr[j + 1] = key;
}

	printf("mang da sap xeo theo thu tu tang dan: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}