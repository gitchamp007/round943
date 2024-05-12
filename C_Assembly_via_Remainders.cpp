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
	    int n; cin >> n;
        int a[n];
        a[0] = 0;
        int ma = 0;
        for(int i = 1; i < n; i++)
        {
            cin >> a[i];
            ma = max(a[i] , ma);
        }
        ll temp = ma + 1;
        for(int i = 0; i < n; i++)
        {
            cout << temp << " ";
            temp += a[i+1];
        }
        cout << endl;
	}
	return 0;
}