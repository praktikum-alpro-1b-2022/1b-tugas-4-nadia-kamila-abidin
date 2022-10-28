#include <iostream>
using namespace std;

int main (){
    string user;
    string pass;

    cout << "Masukkan username : ";
    cin >> user;

    cout << "Masukkan password : ";
    cin >> pass;

    if (user == "nadiak"){
        if (pass == "nadiak134"){
            cout << "Username dan password sesuai, login berhasil" << endl;
        }else{
            cout << "Username sesuai, password tidak sesuai mohon coba kembali" << endl;
    }
    }else{
        if (pass == "nadiak134"){
            cout << "Password sesuai, username tidak sesuai mohon coba kembali" << endl;
        }else{
            cout << "Username dan password tidak sesusai, mohon coba kembali" << endl;
        }
    }
    return 0;

}
