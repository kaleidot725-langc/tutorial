#include <bits/stdc++.h>

using namespace std;

void call_pair() {
    cout << "call pair" << endl;

    pair<string, int> p("abc", 3);
    cout << p.first << " " << p.second << endl;
}

void call_tuple() {
    cout << "call tuple" << endl;

    tuple<int, string, bool> data(1, "hello", true);
    get<2>(data) = false;
    cout << get<1>(data) << endl;

    data = make_tuple(2, "WORLD", true);

    int a;
    string s;
    bool f;
    tie(a, s, f) = data;
    cout << a << " " << s << " " << f << endl;
}

void compare_pairing() {
    cout << "compare pairing" << endl;

    pair<int, int> a(3, 1);
    pair<int, int> b(2, 10);

    if (a < b) {
        cout << "a < b" << endl;
    }
    else {
        cout << "a >= b" << endl;
    }

    pair<int, int> c(5, 1);
    pair<int, int> d(5, 10);
    if (c < d) {
        cout << "c < d" << endl;
    } 
    else {
        cout << "c >= d" << endl;
    }
}

void compare_tuple() {
    cout << "compare tuple" << endl;

    vector<tuple<int, int, int>> a;
    a.push_back(make_tuple(3, 1, 1));
    a.push_back(make_tuple(1, 2, 100));
    a.push_back(make_tuple(3, 5, 1));
    a.push_back(make_tuple(1, 2, 3));
    sort(a.begin(), a.end());

    for (tuple<int, int, int>t : a) {
        int x, y , z;
        tie(x, y, z)  = t;
        cout << x << " " << " " << z << endl;
    }
}

int main() {
    call_pair();
    call_tuple();
    compare_pairing();
    compare_tuple();
}
