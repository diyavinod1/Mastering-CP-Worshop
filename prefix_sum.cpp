//Prefix Sum
//Efficient Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(int i=a;i<=b;i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;      //Size of array
    ll x,ans;
    cin >> n;
    vector<ll> arr,pre(n);   //Vectors to store the value of array and prefix

    loop(i,1,n){
        cin >> x;
        arr.push_back(x);    //Array is formed
    }

    pre[0]=arr[0];
    loop(i,1,n-1){
        pre[i]=pre[i-1]+arr[i];     //Preifx is formed
    }

    int t,s,e;
    cin >> t;
    loop(i,1,t){
        cin >> s >> e;
        if (s==0){
            ans=pre[e];
        }
        else{
            ans=pre[e]-pre[s-1];
        }
        cout << ans << "\n";
    }
    
}
