#include <bits/stdc++.h>

using namespace std;

int getOneCount(string str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str.at(i) == '1') count++;
    } 

    return count;
}

int main() {
    string str;
    cin >> str;
    cout << getOneCount(str) << endl;
}
