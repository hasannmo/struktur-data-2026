#include <bits/stdc++.h>
using namespace std;

int evalPostfix(string posf){
    stack<int> st;
    stringstream ss(posf);
    string token;

    while(ss>>token) {
        if(token=="*"||token=="/"||token=="+"||token=="-"){
            int num2 = st.top();
            st.pop();
            int num1 = st.top();
            st.pop();

            if(token=="*") st.push(num1*num2);
            else if(token=="/") st.push(num1/num2);
            else if(token=="+") st.push(num1+num2);
            else st.push(num1-num2);
        }
        else st.push(stoi(token));
    }

    return st.top();
}

int main() {
    string postfix;

    cout << "Masukkan postfix (pisahkan dengan spasi): ";
    getline(cin, postfix);

    cout << "Hasil evaluasi: " << evalPostfix(postfix) << endl;

    return 0;
}
