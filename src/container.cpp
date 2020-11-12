#include <bits/stdc++.h>

using namespace std;

void operate_map() {
    cout << "operate map" << endl;

    map<string, int> score;
    score["Alice"] = 100;
    score["Bob"] = 89;
    score["Charlie"] = 95;

    cout << "Alice   " << score.at("Alice") << endl;
    cout << "Bob     " << score.at("Bob") << endl;
    cout << "Charlie " << score.at("Charlie") << endl;

    cout << "before erase " << score.size() << endl;
    score.erase("Bob");
    cout << "after  erase " << score.size() << endl;

    for (pair<string, int> p : score) {
        string key = p.first;
        int value = p.second;
        cout << "key " << key << " value " << value << endl;
    }
}

void operate_queue() {
    cout << "operate queue" << endl;
    queue<int> q;
    q.push(10);
    q.push(3);
    q.push(6);
    q.push(1);

    while(!q.empty()) {
        cout << "size " << q.size() << " value " << q.front() << endl;
        q.pop();
    }
}

void operate_priority_queue() {
    cout << "operate priorty queue" << endl;

    priority_queue<int> pq;
    pq.push(10);
    pq.push(3);
    pq.push(6);
    pq.push(1);

    while (!pq.empty()) {
        cout << "size " << pq.size() << " value " << pq.top() << endl;
        pq.pop();
    }   
}

int main() {
    operate_map();
    operate_queue();
    operate_priority_queue();
}