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
    int n;
    cin >> n;
    
    int x = 0; 
    for (int i = 0; i < n; ++i) {
        string expression;
        cin >> expression;
        
        if (expression == "++X" || expression == "X++") {
            x++; 
        } else if (expression == "--X" || expression == "X--") {
            x--; 
        }
    }
    cout << x << endl; 
}

int main() {
    fastio;
    theexecutor();
    return 0;
}
