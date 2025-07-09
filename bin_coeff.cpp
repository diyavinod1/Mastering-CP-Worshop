//Binary Coefficient
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ncr(int n,int r){       // Recursive function to get the value of nCr, which is in maths - nCr = n! / (r! * (n-r)!)
    if (r==0 || n==r)
        return 1;
    return ncr(n-1,r-1)+ncr(n-1,r);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,r;
    cin >> n >> r;
    cout << ncr(n,r);
}



