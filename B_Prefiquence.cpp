#include <bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin >> t;
	while(t--)
	{
	    int n,m; cin >> n >> m;
        string a,b; cin >> a >> b;
        int sa = 0, sb = 0, ans = 0;

        while(sa < n && sb < m)
        {
            if(a[sa] == b[sb])
            {
                sa++;
                sb++;
                ans++;
            }
            else sb++;
        }
        cout << ans << endl;
	}
	return 0;
}