#include<iostream>
#include<string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int upper = 0;
    for (char i : s) if (i < 'a') upper++;
    if (s.length() - upper >= upper) {
        for (char i : s) {
            if (i < 'a') {
                cout << (char)(i + 32);
            } else cout << i;
        }
    }
    else {
        for (char i : s) {
            if (i >= 'a') {
                cout << char(i - 32);
            } else cout << i;
        }
    }
}