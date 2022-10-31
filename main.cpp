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
    cin >> str >> sub;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < sub.size(); j++)
        {
            if(str[i+j] == sub[j]) {
                count++;
            }
        }
        if(count == sub.size()) {
            break;
        }
        else {
            count = 0;
        }
    }
    if(count == sub.size()) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
