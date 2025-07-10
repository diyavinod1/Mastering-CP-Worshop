//Reverse a number
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

long long rev(long long num){       // Recursive function to get the reverse of the input number
    static long long r=0;
    if (num==0)
        return r;
    int d=num%10;
    r=r*10+d;
    return rev(num/10);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long num;
    cin >> num;
    cout << rev(num);
}


