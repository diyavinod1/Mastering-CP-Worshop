//Hailstone Numbers
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

int hailstone (int n){       // Recursive function to find the Hailstone Numbers
    cout << n << " ";
    if (n==1)
        return 1;
    else if (n%2==0)
        return 1+hailstone(n/2);
    return 1+hailstone(((n*3)+1));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    hailstone(n);
}
