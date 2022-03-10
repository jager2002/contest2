#include<bits/stdc++.h>

using namespace std;
long long n,k;
long long mod=1e9+7;
long long f[10][10],m[10][10];
void mul(long long f[10][10],long long m[10][10])
{
	long long tmp[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			long long res=0;
			for(int x=0;x<n;x++)
			{
				res+=(f[i][x]*m[x][j])%mod;
				res%=mod;
			}
			tmp[i][j]=res;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			f[i][j]=tmp[i][j];
		}
	}
	
}
void pow(long long f[10][10],long long k)
{
	if(k<=1) return;
	pow(f,k/2);
	mul(f,f);
	if(k%2) mul(f,m);
}
void slove()
{
	cin >> n >> k;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> f[i][j];
				m[i][j]=f[i][j];
			}
		}
		pow(f,k);
		long long cnt=0;
		for(int i=0;i<n;i++)
		{
			cnt+=f[i][n-1];
			cnt%=mod;
		}
		cout << cnt << endl;
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
	    slove();	
	}
}
