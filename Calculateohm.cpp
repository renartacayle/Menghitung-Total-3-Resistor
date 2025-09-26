#include <iostream>
using namespace std;

int main() {
    double V, I, R;
    int pilihan;

    cout << "=== Program Perhitungan Rumus Ohm ===\n";
    cout << "Pilih yang ingin dihitung:\n";
    cout << "1. Tegangan (V)\n";
    cout << "2. Arus (I)\n";
    cout << "3. Hambatan (R)\n";
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan Arus (I) dalam ampere: ";
            cin >> I;
            cout << "Masukkan Hambatan (R) dalam ohm: ";
            cin >> R;
            V = I * R;
            cout << "Tegangan (V) = " << V << " volt\n";
            break;
        case 2:
            cout << "Masukkan Tegangan (V) dalam volt: ";
            cin >> V;
            cout << "Masukkan Hambatan (R) dalam ohm: ";
            cin >> R;
            I = V / R;
            cout << "Arus (I) = " << I << " ampere\n";
            break;
        case 3:
            cout << "Masukkan Tegangan (V) dalam volt: ";
            cin >> V;
            cout << "Masukkan Arus (I) dalam ampere: ";
            cin >> I;
            R = V / I;
            cout << "Hambatan (R) = " << R << " ohm\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
    }

    return 0;
}
