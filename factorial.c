#include<stdio.h>
int main(){
	int f=1,n,i;
	printf("enter a positive value:\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("%d's factorial is : %d",n,f);
	return 0;
}
