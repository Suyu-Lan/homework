#include<bits/stdc++.h>
using namespace std;
long long a[1005];
long long w(int n){
	cout<<n<<endl;
	if(n==2||n==1)return 1;
	if(a[n]==0)a[n]=w(n-1)+w(n-2);
	return a[n]; 
}
int main(){
	int n=0;
	cin>>n;

	cout<<endl<<w(n)<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
} 
//这个我自己都看不懂
