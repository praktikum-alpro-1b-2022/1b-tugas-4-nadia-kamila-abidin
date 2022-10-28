#include <iostream>
using namespace std;

int main (){
    int menu;
    int hrg1 = 5000, hrg2 = 7000, hrg3 = 4500, hrg4 = 4000;

    cout << "   Daftar menu" << endl;
    cout << "==============================" << endl;
    cout << "1. Nasi goreng informatika : " << hrg1 << endl;
    cout << "2. Nasi soto ayam internet : " << hrg2 << endl;
    cout << "3. Gado gado Disket : " << hrg3 << endl;
    cout << "4. Bubur ayam LAN : " << hrg4 << endl;
    cout << "==============================" << endl;
    cout << "Masukkan pilihan Anda : ";
    cin >> menu;

    cout << " " << endl;

    if (menu==1){
        cout << " Pilihan No.1 Nasi goreng informatika : " << hrg1 << endl;
    }else if (menu==2){
        cout << "Pilihan No.2 Nasi soto ayam Informatika : " << hrg2 << endl;
    }else if (menu==3) {
        cout << "Pilihan No.3 Gado gado Disket : " << hrg3 << endl;
    }else if (menu==4){
        cout << "Pilihan No.4 Bubur ayam LAN : " << hrg4 << endl;
    }else{
        cout << "Pilihan Anda salah" << endl;
    }

    return 0;
}
