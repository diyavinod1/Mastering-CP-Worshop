//nth Fibonacci Number
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

long long fibonacci (long long n){       // Recursive function to find the nth Fibonacci number
    if (n<=1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    cout << fibonacci(n);
}
