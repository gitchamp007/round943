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
	    int x; cin >> x;
        int ma = INT32_MIN, y  = -1 ;
        for(int i = 1; i < x; i++)
        {
            if(__gcd(x,i) + i > ma)
            {
                ma = __gcd(x,i) + i;
                y = i;
            }
        }
        cout << y << endl;
	}
	return 0;
}