#include <iostream>

using namespace std;


void solve(){
    /* 100までのFizzBuzz */
    for (int i=1; i<=100; i++) {
        if (i%15 == 0) {
            cout << "FizzBuzz ";
        }
        else if (i%3 == 0) {
            cout << "Fizz ";
        }
        else if (i%5 == 0) {
            cout << "Buzz ";
        }
        else {
            cout << i << " ";
        }
    }
}


int main(int argc, char const *argv[]){
    solve();
    return 0;
}