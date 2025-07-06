//Sieve of Eratosthenes
//Problem found at Generate Primes (Sieve of Eratosthenes) Hackerearth
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i=a;i<=b;i++)
#define m 1000001
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector <bool> primes(m,true);      // vector is a dynamic array. Here,we have made the default value of vector to be true
    primes[0]=primes[1]=false;      //0 and 1 are not prime numbers. So their value is false

    for (int select=2;select*select<=m;select++){
        if(primes[select]){                   // Numbers in vector with true value are being selected
            for (int eliminate=select*select;eliminate<=m;eliminate=eliminate+select){
                primes[eliminate]=false;             // All the multiples of selected number is changed to false
            }
        }
    }
	ll t,n;
	cin >> t;
	loop(i,1,t){
		cin >> n;
		for (int i=2;i<=n;i++){
        	if (primes[i]){
            	cout << i << " ";    //Indices is displayed, because the indices denote the numbers.
			}         
        }
		cout << "\n";
    }
    
}
