#include "tumpukan.h"
#include "keramik.h"
#include <iostream>
#include <conio.h>
using namespace std;

main(void){
  int pil;
  string data;
  awal();
  
  do{
    cout<<endl<<endl<<"PROGRAM TUMPUKAN KERAMIK"<<endl;
        cout<<"----------------------"<<endl;
        cout << "\n1. Input\n2. Hapus\n3. Tampil\n4. Bersihkan\n5. Keluar\nMasukan pilihan : ";
        cin >> pil;
    switch (pil){
            case 1:
                cout << "Masukan nama Keramik = "; cin >> data;
                input (data);
                break;
            case 2:
                hapus();
                break;
            case 3:
                tampil();
                break;
            case 4:
                bersih();
                break;
            case 5:
                cout << "Terimakasih, tekan enter untuk keluar";
        }
        getch();
    }
    while (pil != 5);
}

