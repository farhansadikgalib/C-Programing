#include<stdio.h>
int main(){
	int n;
	printf("enter a number :");
	scanf("%d",&n);

printf("Your number is : %d\n",n);



	if(n%2==0)
		printf("Number is even:%d",n);
	else
		printf("Number is odd : %d",n);
		
	
	return 0;
}


