#include<stdio.h>
int main(){
	int i,n,temp;
	int max=0;
	do{
		printf("nhap vao so nguyen duong n:  ");
		scanf("%d",n);
	}while(n<0&& printf("So n phai lon hon hoac bang  0!!"));
	temp=n;

	
	do{
		i=n % 10;
		if(i>max){
			max=i;
		}
	}while(n/=10);
	printf("chu so lon nhat trong %d la: ",max);
}
