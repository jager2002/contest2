#include <bits/stdc++.h>
using namespace std;

long long find(long long n,long long k){
    long long m=pow(2,n-1);
    if(k==m)
        return 'A'-1+n;
    k%=m;
    return find(n-1,k);          
}
void solve(){
    int n,k; 
	cin>>n>>k;
    cout<<(char)find(n,k)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
