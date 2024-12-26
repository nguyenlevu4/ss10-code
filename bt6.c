#include<stdio.h>
using namespace std;
int main(){
	int n;
	printf("Moi ban nhap so trong mang: ");
	scanf("%d",&n);
	int arr[3][4]={
	{1,2,3,4},
	{5,6,7,5},
	{9,0,1,2,}
	};
	int found=0;
	for (int i=0;i<3;i++)
{
for (int j=0;j<4;j++){

	if(arr[i][j]==n){
		printf("So %d co trong mang va o vi tri thu %d %d \n",n,i,j);
		found++;
	}}
}
if (found==0){
	printf("So %d khong co trong mang\n",n);
}
	return 0;
}