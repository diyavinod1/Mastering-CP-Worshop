//Decimal to Binary
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

void d2b(long long num){      
    if (num>0){
        d2b(num/2);
        cout << num%2;
    }
}

void dec2bin(long long num){       
    if (num==0)
        cout << 0;
    else
        d2b(num);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long num;
    cin >> num;
    dec2bin(num);
}


