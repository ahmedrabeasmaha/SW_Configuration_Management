#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, per;
    string str, sub;
    int count = 0;
    bool ok = true;
    cin >> str >> per;
    for (int i = 0; i < per.size(); i++)
    {
        if(per[i] != str[i]) {
            ok = false;
            break;
        }
    }
    if(ok) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    
    return 0;
}
