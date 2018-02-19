#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    string no = "NO";
    string yes = "YES";
    
    
    if (x1 == x2) {
        return v1 == v2 ? yes : no;
    }
    if (x1 < x2 && v1 < v2) {
        return no;
    }
    if (x2 < x1 && v2 < v1) {
        return no;
    }
    
    bool r0 = (x1 - x2) < 0;
    bool r = !r0;
    while (r != r0)
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
