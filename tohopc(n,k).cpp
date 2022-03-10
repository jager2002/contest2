#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(){
   	int C[1005][1005];
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i) C[i][j]=1;
			else
				C[i][j]=(C[i-1][j-1]%mod+C[i-1][j]%mod)%mod;
		}
	}
	int t; 
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<C[n][k]<<endl;
	}
}



