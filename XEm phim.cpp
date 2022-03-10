#include<bits/stdc++.h>

using namespace std;

int C,N;
int w[105];
int D[30000];

int main()
{
	cin >> C >> N;
	for(int i=0;i<N;i++)
	{
		cin >> w[i];
	}
	for(int i=0;i<=C;i++) D[i]=0;
	D[0]=1;
	for(int i=0;i<N;i++)
	{
		for(int s=C;s>=w[i];s--)
		{
			D[s]=max(D[s],D[s-w[i]]);
		}
	}
	for(int s=C;s>=0;s--)
	{
		if(D[s])
		{
			cout << s << endl;
			break;
		}
	}
	return 0;
}
