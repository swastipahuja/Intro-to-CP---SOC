/*
Maximum Pairwise Modular Sum
Problem Code:
MXMODSUM
Codechef Contest Code:
LTIME108
Difficulty Rating:1370

*/

using namespace std;
#include <bits/stdc++.h>

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n];
        for(int j=0;j<n;j++) cin>>a[j];
        sort(a,a+n);
	    long long maxx=0,ans=0;
	    for(int j=n-1;j>0;j--){
	        ans=a[n-1]+a[j];
	        if(a[n-1]!=a[j]){
	            int e=a[n-1]-a[j];
                e=e%m;
                ans=ans+max(e,(m-e));
	        }
	    maxx=max(maxx,ans);
	    }
	    cout<<maxx<<endl;
	}
	return 0;
}
