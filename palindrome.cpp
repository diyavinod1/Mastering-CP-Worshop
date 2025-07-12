
//Palindrome Checker
//Recursive Solution

#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string str, int start, int end) {
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return is_palindrome(str, start + 1, end - 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;;
    cin >> s;
    if (is_palindrome(s, 0, s.length() - 1))
        cout << "Yes\n";
    else
        cout << "No\n";
}
