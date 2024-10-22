#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    int i = n;
    do {
        int j = 1;
        do {
            cout << "* ";
            j++;
        } while (j <= i);
        cout << endl;
        i--;
    } while (i > 0);

    return 0;
}
