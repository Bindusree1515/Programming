// l 39
#include <bits/stdc++.h>
using namespace std;
unordered_map <char,int> symbols ={ {'(',-1} , {'{',-2} , {'[',-3} , {')',1} , {'}',2} , {']',3}};

string isbalanced(string str){

    stack<char> s;
    for (char bracket : str) {
        if (symbols[bracket] < 0) {
            s.push(bracket);
        }
        else {
            if (s.empty()) return "NO";

            char top = s.top();
            if (symbols[bracket] + symbols[top] != 0) {
                return "NO";
            }
            s.pop();
        }
    }
    if (s.empty()) return "YES";
    return "NO" ;
}
int main(){

    int t; cin>>t;
    cin.ignore();
    while (t-->0){
        string str; getline(cin,str);
        cout << isbalanced(str) << endl;
    }

return 0;
}
