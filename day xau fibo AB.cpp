#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	long long a[93];
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=92;i++) a[i]=a[i-1]+a[i-2];
	while(t--)
	{
		int n; cin >> n;
		long long k; cin >> k;
		while(n>2)
		{
			if(k>a[n-2])
			{
				k-=a[n-2];
				n--;
			}
			else
			{
				n-=2; 
			}
		} 
		if(n==1) cout << "A" <<endl;
		else cout << "B" << endl;
	}
 } 
