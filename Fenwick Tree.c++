#include <iostream>
using namespace std;

const int N = 100005;
int bit[N], n;

void update(int index, int value) {
    while (index <= n) {
        bit[index] += value;
        index += index & (-index);
    }
}

int query(int index) {
    int sum = 0;
    while (index > 0) {
        sum += bit[index];
        index -= index & (-index);
    }
    return sum;
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        update(i, x);
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << query(r) - query(l - 1) << endl;
    }
}
