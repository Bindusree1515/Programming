// 39
#include <bits/stdc++.h>
using namespace std;

string isbalanced(string str){

    stack <char> s;
    for (char bracket : str) {
        if (bracket == '[' || bracket == '(' || bracket == '{') {
            s.push(bracket);
        }
        else {
            if ( s.empty() ) return "NO" ;
            if((bracket == ']' && s.top() != '[') || (bracket == ')' && s.top() != '(') || (bracket == '}' && s.top() != '{')){
                return "NO";
                
        } else {
            s.pop();
        }
        }
    }
    if ( s.empty() ) return "YES" ;
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
