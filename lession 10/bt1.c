#include <stdio.h>

int main() {
	int arr[] = {5, 10, 15, 20, 15, 30, 15};
	int size = sizeof(arr) / sizeof(arr[0]);
	int a, b = 0;

	printf("nhap phan tu kiem tra: ");
	scanf("%d",&a);

	printf("phan tu %d co trong mang: ",a);
	for (int i = 0; i < size; i++) {
		if (arr[i] == b) {
			printf("%d ", a);
			b = 1;
			if (!b) {
				printf("khong ton tai trong mang");
			}
		}
	}
	return 0;
}