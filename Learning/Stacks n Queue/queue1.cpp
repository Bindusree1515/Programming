// l 38
#include <bits/stdc++.h>
using namespace std;
int main(){
    queue <string> q ;
    
    q.push("a");
    q.push("ab");
    q.push("abc");
    q.push("bcd");

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

return 0;
}
