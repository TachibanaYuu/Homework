#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    int numQues;
    cin >> numQues;
    a.erase(a.begin()+(numQues-1));
    int start, end;
    cin >> start >> end;
    a.erase(a.begin()+(start-1), a.begin()+(end-1));
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    return 0;
}
