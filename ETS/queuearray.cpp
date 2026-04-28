#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
char queue[MAX];
int front = -1, back = -1;

void enqueue(char c){
    if(back == MAX-1){
        cout << "Antrean penuh\n";
        return;
    }
    if(front == -1) front = 0;
    queue[++back] = c;
    cout << "Mahasiswa '" << c << "' masuk antrean\n";
}

void dequeue(){
    if(front == -1 || front > back){
        cout << "Antrean kosong\n";
        return;
    }
    cout << "Mahasiswa '" << queue[front++] << "' keluar antrean\n";
    if(front > back) front = back = -1;
}

void display(){
    if(front == -1 || front > back){
        cout << "Antrean kosong\n";
        return;
    }
    for(int i = front; i <= back; i++)
        cout << queue[i] << " ";
    cout << "\n";
}

int main(){
    string cmd;
    while(cin >> cmd){
        if(cmd == "enqueue"){
            char c;
            cin >> c;
            enqueue(c);
        } else if(cmd == "dequeue"){
            dequeue();
        } else if(cmd == "display"){
            display();
        }
    }
    return 0;
}
