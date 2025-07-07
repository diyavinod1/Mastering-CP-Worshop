//Sum of natural numbers from 1 to n
//Efficient Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(int i=a;i<=b;i++)

ll sum(ll n){       // Recursive function to get sum of natural numbers from 1 to n
    if (n==1)
        return 1;
    return sum(n-1)+n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; 
    cin >> n;
    cout << sum(n);
}
