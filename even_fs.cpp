//Even Fibonacci Numbers
//Problem found at Project Euler #2: Even Fibonacci numbers

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i=a;i<=b;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t,x,a,b,c,sum;
    cin >> t;
    
// This is an optimized solution
// Here we are generating only even numbers of the Fibonacci Series
    
    loop(i,1,t){
        cin >> x;
        a=2;
        b=8;
        c=4*b+a;   // This is the formula that helps us generate only even numbers in Fibonacci series iteratively
        sum=10;
       
        while (c<x){
            sum=sum+c;
            a=b;
            b=c;
            c=4*b+a;
        }
        
        cout << sum << "\n";   // The problem is to print the sum of all the even numbers in the Fibonacci Series
    }
}

