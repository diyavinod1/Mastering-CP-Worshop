//Sum of multiples of 3 and 5
//Solution found at HackerRank Project Euler #1: Multiples of 3 and 5
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i = a; i <= b; i++)

// Returns sum of first n terms of AP
// Here the first element and common difference, both are same, i.e. a1
ll faulhaber(ll n, ll a1) {
    ll an=a1+(n-1)*a1;
    return n*(a1+an)/2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    loop(i, 1, t) {
        ll n;
        cin >> n;

        // Count of numbers divisible by 3, 5, and 15 less than n
        ll s3 = faulhaber((n - 1) / 3, 3);
        ll s5 = faulhaber((n - 1) / 5, 5);
        ll s15 = faulhaber((n - 1) / 15, 15);

        cout << s3 + s5 - s15 << "\n";
    }
}
