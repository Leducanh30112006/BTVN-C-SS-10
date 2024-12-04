#include <stdio.h>

int main(){
	int arr[8]={1,4,3,1,7,2,8,9};
	int item,length = sizeof(arr)/sizeof(int);
	printf("nhap gia tri can tim : ");
	scanf("%d",&item);
	int count = -1;
	for(int i=0;i<length;i++){
		if(arr[i]==item){
			printf("phan tu %d co vi tri la %d\n",item,i);
			count++;
		}
	}
	if(count== -1){
		printf("khong tim thay phan tu %d trong mang",item);

	}
	return 0;
}
