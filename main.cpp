#include <iostream>
using namespace std;

void eratosfen(int num){
    bool *s = new bool[num];
    for(int i = 0; i < num; i++){
        s[i] = 1;
    }
    int q = 2;
    while(q*q <= num){
        if (s[q]){
            for(int f = q*q; f <= num; f+=q){
                s[f] = 0;
            }
        }
        q++;
    }
    for(int i = 2; i < num; i++){
        if(s[i]){
            cout << i << ' ';
        }
    }
}

int main(){
    int num;
    cin >> num;
    eratosfen(num);
};
