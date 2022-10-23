#include<stdio.h>
int main(){
	int n;
	int s=0;
    do{
       printf("Nhap vao so nguyen duong n lon hon 0:");
		scanf("%d",&n);
	}while(n<=0);
     for(int i=1;i<=n;i++){
     	if(n%i==0){
     		s+=i;
		 }
		 printf("Cac uoc cua so can tim la %d \n",i);
	 } 
    
    printf("tong cac uoc cua so can tim la %d",s);
	 }
    

	
	
	

