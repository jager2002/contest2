#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long a[n+5],d[n+5]={0};
		for(int i=0;i<n;i++) cin >> a[i];
		d[0]=a[0];
		d[1]=max(a[0],a[1]);
		for(int i=2;i<n;i++)
		{
			d[i]=max(d[i-2]+a[i],d[i-1]);
		}
		cout << d[n-1] << endl;
	}
}
