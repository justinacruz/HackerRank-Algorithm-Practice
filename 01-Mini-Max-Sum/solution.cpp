#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    long long arr[5] = {a, b, c, d, e};
    long long total = 0, minimum = arr[0], maximum = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i];
        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }

    cout << total - maximum << " " << total - minimum << endl;
    return 0;
}
