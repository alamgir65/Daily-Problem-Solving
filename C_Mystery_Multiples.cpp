#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string concatenated = to_string(a) + to_string(b);
    int num = stoi(concatenated);
    int root = sqrt(num);
    if (root * root == num) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
