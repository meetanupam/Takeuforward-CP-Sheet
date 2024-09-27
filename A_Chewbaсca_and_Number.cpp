/*
 * God is Great
 * Author: [TheExecutor]
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define INF 1e18
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define sz(x) ((int)(x).size())
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define forr(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define forrev(i, a, b) for (int i = (int)(a); i >= (int)(b); --i)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void theexecutor() {
    string x;
    cin >> x;
    int strg = x.size();
 
    for ( int i = 0; i < strg; i++) {
        int num = x[i] - '0';
        int invert = 9 - num;
    if (invert < num) {
            if (i == 0 && invert == 0) {
                continue; 
            }
            x[i] = '0' + invert; 
        }
    }
 
    cout << x << endl;
}

int main() {
    fastio;
    theexecutor();
    return 0;
}
