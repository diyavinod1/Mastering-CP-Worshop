//Reverse the string
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

void rev_str (string &s,int start,int end){       // Recursive function to reverse a string
    if (start<end){
        swap(s[start],s[end]);
        rev_str(s,start+1,end-1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    rev_str(s,0,s.length()-1);
    cout << s;
}
