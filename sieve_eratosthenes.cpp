//Sieve of Eratosthenes

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i=a;i<=b;i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector <bool> primes(n+1,true);      // vector is a dynamic array. Here,we have made the default value of vector to be true
    primes[0]=primes[1]=false;      //0 and 1 are not prime numbers. So their value is false

    for (int select=2;select*select<=n;select++){
        if(primes[select]){                   // Numbers in vector with true value are being selected
            for (int eliminate=select*select;eliminate<=n;eliminate=eliminate+select){
                primes[eliminate]=false;             // All the multiples of selected number is changed to false
            }
        }
    }

    for (int i=2;i<=n;i++){
        if (primes[i]){
            cout << i << " ";          //Indices is displayed, because the indices denote the numbers.
        }
    }
    
}
