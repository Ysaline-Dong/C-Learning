#include<stdio.h>
long long mypow(int a,int b){
	long long result=1;
	for(int i=0;i<b;i++){
		result*=a;
	}
	return result;
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)==2&&b!=-1){
		printf("%lld\n",mypow(a,b));
	}
	
	return 0;
}
