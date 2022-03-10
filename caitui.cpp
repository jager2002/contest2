#include <bits/stdc++.h>
using namespace std;

int F[1005][1005]={},t,N,V,A[1005],C[1005];
int QHD(){
	for(int i=0;i<=N;i++){
		for(int j=0;j<=V;j++){
			if(i==0||j==0) F[i][j]=0;
			else{
				F[i][j]=F[i-1][j];
				if(j>=A[i]){
					F[i][j]=max(F[i][j],F[i-1][j-A[i]]+C[i]);
				}
			}
		}
	}
	return F[N][V];
}
int main(){
	cin>>t;
	while(t--){
		cin>>N>>V;
		for(int i=1;i<=N;i++) cin>>A[i];
		for(int i=1;i<=N;i++) cin>>C[i];
		cout<<QHD()<<endl;
	}
}


