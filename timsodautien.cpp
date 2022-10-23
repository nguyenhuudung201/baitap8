#include<stdio.h>
int main(){
	int temp,n,i;
	do{
		printf("nhap so nguyen lon hon 0: ");
		scanf("%d",&n);
	}while(n<=0);
	temp=n;
	do{
		i=temp%10;
	}while(temp/=10);
	printf("chu so dau tien la %d",i);
}
