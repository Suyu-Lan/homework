#include<bits/stdc++.h>
using namespace std;
long long a[55]={0,1,1};
int main(){
    int n;
	for(int i=3;i<=50;i++)
	    a[i]=a[i-1]+a[i-2]; 
	scanf("%d",&n);
	printf("%lld",a[n]);
}
