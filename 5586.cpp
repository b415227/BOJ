#include <iostream>
#include <string>
using namespace std;
int main(){
    string c;
    cin >> c;
    int joi=0;
    int ioi=0;
    for(int i=2;i<c.length();i++){
        if(c[i-2]=='J'&&c[i-1]=='O'&&c[i]=='I') joi++;
        else if(c[i-2]=='I'&&c[i-1]=='O'&&c[i]=='I') ioi++;

    }
    cout << joi << '\n' << ioi << '\n'; 


}
