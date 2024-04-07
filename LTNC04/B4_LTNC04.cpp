#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> vec(n);

    int numEntries, num;

    for (int i = 0; i < n; i++) {
        cin >> numEntries;
        for (int j = 0; j < numEntries; j++) {
            cin >> num;
            vec[i].push_back(num);
        }
    }

    int first, second;
    for (int i = 0; i < q; i++) {
        cin >> first >> second;
        cout << vec[first][second] << endl;
    }

    return 0;
}
