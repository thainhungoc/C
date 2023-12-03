#include <iostream>
using namespace std;
int main() {
    int s, n, a, b;
    cout << "Nhap vao mot so co 2 chu so:";
    cin >> n;
    a = n / 10;
    b = n % 10;
    s = a + b;
    cout << "Tong 2 chu so la:" << s;
    return 0;
}