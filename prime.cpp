//Prime number generation
//Problem found at Primality test Prime number Hackerearth
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i=a;i<=b;i++)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
  ll t,n,a,b;
	bool flag;
	cin >> t;    
	
  loop (i,1,t){
		cin >> n;
		if (n==2 || n==3){        //Checking if the input is 2 or 3
			cout << "prime\n";
		}
		else if (n%2==0 || n%3==0){        //Checking if the input is divisible by 2 or 3
			cout << "composite\n";
		}
		else{
			flag=true;
			a=5,b=7;

      //Every prime number is of the form 6K+1 or 6k-1
      while (a*a<=n){
				if (n%a==0 || n%b==0){
					flag=false;
					break;
				}
				a=a+6;
				b=b+6;
			}
			
      if (flag)
				cout << "prime\n";
			else
				cout << "composite\n";
		}
	}
}
