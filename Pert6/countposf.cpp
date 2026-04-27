#include <bits/stdc++.h>
using namespace std;

int evalPostfix(string exp){
    stack<int> st;

    for(char c:exp){
        if(isdigit(c)) st.push(c-'0');
        else {
            int num2 = st.top();
            st.pop();
            int num1 = st.top();
            st.pop();

            switch(c) {
                case '*': st.push(num1 * num2); break;
                case '/': st.push(num1 / num2); break;
                case '+': st.push(num1 + num2); break;
                case '-': st.push(num1 - num2); break;
            }
        }
    }

    return st.top();
}

int main(){
    string postfix;

    cout << "Masukkan postfix: ";
    cin >> postfix;

    cout << "Hasil evaluasi: " << evalPostfix(postfix) << endl;

    return 0;
}
