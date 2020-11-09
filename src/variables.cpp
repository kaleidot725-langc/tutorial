#include <bits/stdc++.h>

using namespace std;

int main() {
    // int 型であるとオーバーフローする
    int a = 2000000000;
    int b = a * 2;
    cout << b << endl;

    int c = (a * 10 + 100) / 100;
    cout << c << endl;

    // int64_t 型であるとオーバーフローしない
    int64_t a64 = 2000000000;
    int64_t b64 = a64 * 2;
    cout << b64 << endl;

    // double 型
    cout << 3.14159265358979 << endl;

    // 暗黙の型変換
    int d = 2000000000;
    int64_t e = 100;
    cout << d * e << endl;
}