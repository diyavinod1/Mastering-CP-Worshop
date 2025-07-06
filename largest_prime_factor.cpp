//Largest Prime Factor
//Problem found at Project Euler #3: Largest prime factor Hackerrank

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i=a;i<=b;i++)

int main()
{
    ll t,n;
    cin >> t;
    
    loop(i,1,t){
        cin >> n;
        ll d=2;
        vector<ll> pri_factor;
        while (n>1 && d*d<=n){       // We are using Prime Factorization
            if (n%d==0){
                pri_factor.push_back(d);
                n=n/d;
            }
            else{
                d++;
            }
        }
        if (n>1){            // if n is greater than 1 then it is a prime, so we are adding that value to pri_factor
            pri_factor.push_back(n);             
        }
        cout << pri_factor[pri_factor.size()-1] << "\n";
    }
    
}
