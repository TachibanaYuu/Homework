#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> res;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        res.push_back(k);
    }
    for (int i = n-1; i >= 0; i--) {
        cout << res[i] << " ";
    }
    return 0;
}

