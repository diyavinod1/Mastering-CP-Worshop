//Taylor Series
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

double taylor(double x,int n){       // Recursive function to get the Taylor Series
    static double p=1,f=1;
    double r;
    if (n==0)
        return 1;
    r=taylor(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,n;
    cin >> x >> n;
    cout << fixed << setprecision(3) << taylor(x, n) << "\n";
}


