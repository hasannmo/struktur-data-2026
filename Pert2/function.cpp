#include <bits/stdc++.h>
using namespace std;

void check_vowel(char a){
    if(a=='A'||a=='a'||a=='I'||a=='i'||a=='U'||a=='u'||a=='E'||a=='e'||a=='O'||a=='o'){
        cout<<"is vowel";
    }else {
        cout<<"is consonant";
    }
}

int main() {
    char c;
    cin>>c;

    check_vowel(c);

    return 0;
}
