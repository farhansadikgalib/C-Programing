#include<stdio.h>
int main(){
	int i,n;
	int count =0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0)
		{
		count++;
		break;	
		}
	}
	if(count == 0){
		printf("Prime Number");
	}
	else{
		
		printf("It isn't a prime number");
	}
		
}

