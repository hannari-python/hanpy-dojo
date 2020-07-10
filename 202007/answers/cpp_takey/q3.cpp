#include <iostream>

using namespace std;


void solve(){
    int num;
    cin >> num;

    if (num%4 == 0) {
        if (num%100 == 0) {
            if (num%400 == 0) {
                cout << num << "はうるう年です\n";
                return;
            }
            cout << num << "はうるう年ではありません\n";
            return;
        }
        cout << num << "はうるう年です\n";
        return;
    }
    cout << num << "はうるう年ではありません\n";
    return;
}


int main(int argc, char const *argv[]){
    solve();
    return 0;
}