#include<stdio.h>
int sum(int i){
	int res=1;
	for(int j=1;j<=i;j++){
		res*=j;
	}
	return res;
}
int main(){
	int N;
	int count=0;
	
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		count+=sum(i);
	}
	printf("%d",count);
	return 0;
}
