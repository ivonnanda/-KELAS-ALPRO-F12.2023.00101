#include <iostream>
using namespace std;

int nilaiTerkecil(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;


    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;


    cout << "Nilai terkecil dari " << x << " dan " << y << " adalah: " << nilaiTerkecil(x, y) << endl;

    return 0;
}
