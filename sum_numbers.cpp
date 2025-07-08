//Sum of natural numbers from 1 to n
//Efficient Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(int i=a;i<=b;i++)

ll sum(ll n){       // Recursive function to get sum of natural numbers from 1 to n
    if (n==1)
        return 1;
    if (n%2==0){
        return 2*sum(n/2)+(n*n)/4;      //Condition to check if n is even
    }
    return 2*sum((n-1)/2)+((n+1)*(n+1))/4;      //Condition to check if n is odd
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; 
    cin >> n;
    cout << sum(n);
}
