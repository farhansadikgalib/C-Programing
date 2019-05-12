#include<stdio.h>
int main()
{
	int i,n,f=0,s=1,fs;
	printf("enter a number:");
	scanf("%d",&n);
	printf("%d\n%d\n",f,s);
	for(i=3;i<=n;i++){
		fs=f+s;
		printf("%d\n",fs);
		f=s;
		s=fs;
	}
	return 0;
}


