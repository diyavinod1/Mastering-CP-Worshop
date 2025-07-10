//GCD
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){       // Recursive function to get the Euclidean GCD
    if (a==0)
        return b;
    if (b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin >> a >> b;
    cout << gcd(a, b);
}


