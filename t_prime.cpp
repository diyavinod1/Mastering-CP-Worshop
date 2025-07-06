//T-Prime numbers
//Problem found at 230-B CodeForces

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i=a;i<=b;i++)

bool is_per(ll n){              //To check if the number is Perfect Square or not
    double r=sqrt(n);
    if (ceil(r)==floor(r))
        return true;
    return false;
}

bool is_pri(ll n){            //To check if the number is Prime or not
    bool flag;
    if (n<2)
        return false;
    if (n>=4 && (n%2==0 || n%3==0))
        return false;
    ll a=5,b=7;
    while (a*a<=n){
        if (n%a==0 || n%b==0){
            return false;
        }
        a=a+6;
        b=b+6;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t,n;
    cin >> t;
    loop(i,1,t){
        cin >> n;
        if (is_per(n) && is_pri(sqrt(n))){       //Condition to check if the number is T-Prime
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
