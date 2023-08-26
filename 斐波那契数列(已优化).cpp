#include<iostream>
using namespace std;
long long a[134]={0,1,1};
int main(){
    int n;
	for(int i=3;i<=134;i++)
	    a[i]=a[i-1]+a[i-2]; 
	scanf("%d",&n);
	printf("%lld",a[n]);
}
//输入数据范围为1~134
