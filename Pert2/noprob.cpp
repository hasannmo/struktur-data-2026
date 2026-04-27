#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> tok;
    string s;
    int k;
    cin>>k;

    while(k--){
        cin>>s;

        if(isdigit(s[0])){
            tok.push(stoi(s));
        }else {
            int b = tok.top(); tok.pop();
            int a = tok.top(); tok.pop();

            if(s == "+") tok.push(a + b);
            if(s == "-") tok.push(a - b);
            if(s == "*") tok.push(a * b);
            if(s == "/") tok.push(a / b);
        }
    }

    cout<<tok.top();

return 0;}
