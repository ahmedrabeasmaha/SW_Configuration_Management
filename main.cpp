#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, per;
    bool ok = true;
    cin >> str >> per;
    for (int i = 0; i < per.size(); i++)
    {
        if(per[i] != str[i]) {
            ok = false;
            break;
        }
    }

    
    return 0;
}
