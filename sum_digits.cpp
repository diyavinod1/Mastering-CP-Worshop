//Sum of digits of n
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll func(ll n){       // Recursive function to get sum of digits of n
    if (n==0)
        return 0;
    return func(n/10)+(n%10);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; 
    cin >> n;
    cout << func(n);
}
