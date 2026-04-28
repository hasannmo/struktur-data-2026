#include <iostream>
#include <string>
#include <stack>
using namespace std;

int precedence(char op){
    if(op == '^') return 3;
    if(op == '*' || op == '/' || op == '.') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

bool isOperator(char c){
    return c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='.';
}

int main(){
    string infix;
    cin >> infix;

    stack<char> st;
    string postfix = "";
    cout << "Char\t| Postfix\t\t| Stack\n";

    for(int i = 0; i < (int)infix.size(); i++){
        char c = infix[i];

        if(isalnum(c)){
            postfix += c;
        }
        else if(c == '('){
            st.push(c);
        }
        else if(c == ')'){
            while(!st.empty() && st.top() != '('){
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else if(isOperator(c)){
            while(!st.empty() && st.top() != '(' &&
                  (precedence(st.top()) > precedence(c) ||
                  (precedence(st.top()) == precedence(c) && c != '^'))){
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
        string stackStr = "";
        stack<char> tmp = st;
        string rev = "";
        while(!tmp.empty()){ rev += tmp.top(); tmp.pop(); }
        for(int j = rev.size()-1; j >= 0; j--){
            stackStr += rev[j];
            if(j != 0) stackStr += ' ';
        }
        if(stackStr.empty()) stackStr = "(empty)";

        cout << c << "\t| " << postfix << "\t\t\t| " << stackStr << "\n";
    }

    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }

    cout << "Final postfix: " << postfix << "\n";

    return 0;
}
