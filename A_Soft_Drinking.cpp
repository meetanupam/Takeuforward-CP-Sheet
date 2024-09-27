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
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void theexecutor() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totaldrink =  k * l;
    int totaltoast = totaldrink / 3;
    int totaltoastmade = c * d;
    int totalsaltenough = p / np;

   int ans = min(min(totaltoast, totaltoastmade), totalsaltenough) / n;

    cout << ans << endl;
}

int main() {
    fastio;
    theexecutor();
    return 0;
}
