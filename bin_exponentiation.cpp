//Binary Exponentiation
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

double power(double x,long n){       // Recursive function to get the value of x to the power of n
    if (n==0)
        return 1;
    if (n<0)
        return 1.0/power(x,-n);
    if (n%2==0)
        return power(x*x,n/2);
    return power(x*x,n/2)*x;       // Here the time complexity is in logarithmic terms
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double x;
    long n; 
    cin >> x >> n;
    cout << power(x,n);
}



