#include<bits/stdc++.h>
using namespace std;
long long a[95]={0,1,1};
int main(){
    int n;
	for(int i=3;i<=50;i++)
	    a[i]=a[i-1]+a[i-2]; 
	scanf("%d",&n);
	printf("%lld",a[n]);
}
//输入数据范围为1~134
