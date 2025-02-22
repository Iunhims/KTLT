#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
bool check(int x, int y){
    if(y-x+1>3) return 0;
    if(s[x]=='0'){
      if(y-x+1==1) return 1;
      return 0;
    }
    if(y-x+1==1 || y-x+1==2) return 1;
    int sum=100*(s[x]-'0')+10*(s[x+1]-'0')+s[y]-'0';
    if(0<=sum && sum<=255) return 1;
    return 0;
}
int main(){
      ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
      int t;
      cin >> t;
      while(t--){
        cin >> s;
        int n=s.length();
        if(n<4 || n>12){
            cout<<0<<endl; continue;
        }
        int ans=0;
        for(int i=0; i<n; ++i){
        	for(int j=i+1; j<n; ++j){
	          	for(int p=j+1; p<n; ++p){
	              if(check(0,i) && check(i+1,j) && check(j+1,p) && check(p+1,n-1)) ans++;
	            }
		  }
		}
        cout<<ans<<endl;
      }
    return 0;
}
