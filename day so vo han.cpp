#include<bits/stdc++.h>

using namespace std;
long long n;
long long F[2][2];
long long M[2][2];
long long mod=1e9+7;
void mul(long long F[2][2],long long M[2][2])
{
	long long x=( (F[0][0]*M[0][0])%mod + (F[0][1]*M[1][0])%mod )%mod;
	long long y=( (F[0][0]*M[0][1])%mod + (F[0][1]*M[1][1])%mod )%mod;
	long long z=( (F[1][0]*M[0][0])%mod + (F[1][1]*M[1][0])%mod )%mod;
	long long t=( (F[1][0]*M[0][1])%mod + (F[1][1]*M[1][1])%mod )%mod;
	F[0][0]=x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=t;
}
void pow(long long F[2][2],long long n)
{
	if(n<=1) return;
	pow(F,n/2);
	mul(F,F);
	if(n%2) mul(F,M);
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		F[0][0]=F[0][1]=F[1][0]=1;
		F[1][1]=0;
		M[0][0]=M[0][1]=M[1][0]=1;
		M[1][1]=0;
		if(n==0) cout << 0 << endl;
		else
		{
			pow(F,n-1);
			cout << F[0][0] << endl;
		}
	}
}
