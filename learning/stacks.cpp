#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <int> s ; // declaration
    
    s.push(2); //insertion 
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){  // accessing
        cout << s.top() << endl;
        s.pop();
    }

return 0;
}
