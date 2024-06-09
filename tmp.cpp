#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of 1s in the binary representation of a number
int countSetBits(int n) {
    int count = 0,cnt=0;
    while (n) {
        count += n & 1;
        n >>= 1;
        cnt++;
    }
    return cnt-count;
}
int countBit(int n){
    int count = 0;
    while(n){
        n >>= 1;
        count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y;
        int z = x ^ y;
        int numberOfOnes = countSetBits(z);
        cout<<numberOfOnes<<" ";
        results[i] = 1 << numberOfOnes;  // 2^numberOfOnes
    }

    for (const int result : results) {
        cout << result << endl;
    }

    return 0;
}
