//Display numbers from 1 to n
//Recursion concept

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(int i=a;i<=b;i++)

void display(ll n){       // Recursive function to display numbers from 1 to n
    if (n>1)
        display(n-1);
        cout << n << " ";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; 
    cin >> n;
    display(n);
}
