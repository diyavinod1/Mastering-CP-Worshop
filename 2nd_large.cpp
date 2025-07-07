//Second Largest Number in array
//Efficient Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(int i=a;i<=b;i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,x; 
    cin >> n;    //length of array
    vector<ll> arr;   
    loop(i,1,n){
        cin >> x;   //elements of array
        arr.push_back(x);
    }

    int f=0;       //first largest number
    int s=0;       //second largest number
    for (int i=0;i<n;i++){
        if (arr[i]>f){
            s=f;
            f=arr[i];
        }
        else if (arr[i]!=f && arr[i]>s){
            s=arr[i];
        }
    }
    cout << s;
    
}
