#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin>> t;
	cin.ignore();
	while(t--)
	{
		string s; 
		getline(cin,s);
		stack<int> st;
		bool ok=true;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==')')
			{
				int check=0;
				while(s[st.top()]!='(')
				{
					int n=st.top();
					st.pop();
					if( s[n]=='+' || s[n]=='-' || s[n]=='*' || s[n]=='/' )
					{
						check=1;
					}
				}
				if(check==0)
				{
					ok=false;
					break;
				}
			}
			else st.push(i);
		}
		if(!ok) cout << "Yes\n";
		else cout << "No\n";
	}
}
