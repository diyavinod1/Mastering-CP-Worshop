//Factorial of N
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factorial(ll n){       // Recursive function to get factorial of n
    if (n==1)
        return 1;
    return factorial(n-1)*n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; 
    cin >> n;
    cout << factorial(n);
}
