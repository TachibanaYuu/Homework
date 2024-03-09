#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int a[10000], b[10000];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n+1; i++) cin >> b[i];
    int suma(0), sumb(0);
    for (int i = 0; i < n; i++) suma += a[i];
    for (int i = 0; i < n+1; i++) sumb += b[i];
    cout << sumb - suma;
    return 0;
}
