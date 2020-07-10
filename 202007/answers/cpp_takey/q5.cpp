#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;


void solve(){
    string line = "Hi He Lied Because Boron Could Not Oxidize Fluorine. New Nations Might Also Sign Peace Security Clause. Arthur King Can.";
    istringstream iss(line);

    /* mpの作成 */
    string s;
    int index = 0;
    map<string, int> mp;
    string key;
    while (iss >> s) {
        index++;
        if (index==1 || index==5 || index==6 || index==7 || index==8 || index==9 || index==15 || index==16 || index==19) {
            key = s[0];
            mp[key] = index;
        }
        else {
            key = "";
            key.push_back(s[0]); key.push_back(s[1]);
            mp[key] = index;
        }
    }

    /* mpの出力 */
    for (auto itr=mp.begin(); itr!=mp.end(); ++itr) {
        cout << "key=" << itr->first << ", value=" << itr->second << endl;
    }
}

int main(int argc, char const *argv[]){
    solve();
    return 0;
}