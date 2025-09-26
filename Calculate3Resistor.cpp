#include <iostream>
using namespace std;

int main() {
    double r1,r2,r3;
    int mode;

    cout << "Masukan nilai resistor R1,R2,R3 (ohm): ";
    cin >> r1 >> r2 >> r3;
    cout << "Pilih mode:\n 1 = Seri\n 2 = Paralel: ";
    cin >> mode;
    double total;
    if (mode == 1){
        total = r1 + r2 + r3;
        cout << "Total seri = " << total << "ohm";        
    } else if (mode == 2){
        total = 1/(1/r1 + 1/r2 + 1/r3);
        cout << "Total Pararel = " << total << "ohm\n";
    } else{
        cout << "Pilihan tidak valid.\n";
    }
    return 0;
}
