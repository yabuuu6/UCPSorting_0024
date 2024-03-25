// 1.dengan membuat tempat sementara dan mengambil data yang terbesar 
// 2.dari terkecil hingga terbesar yang berurutan tidak di bandingkan
// 3.bubbleshort
// 4.
#include <iostream>
#include <string>
using namespace std;

int buya[24];
int n;

void input() {       //Method untuk input
    while (true) {   //Looping
        cout << "Masukan array banyaknya elemen pada array : "; //Output ke layar
        cin >> n;    //Input dari pengguna
        if (n <= 24) //Jika n kurang dari atau sama dengan 20
            break;   //Keluar dari loop
        else {       //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //Output ke layar
        }
    }
    cout << endl;                            //Output baris kosong
    cout << "====================" << endl;  //Output ke layar
    cout << "Masukan Elemen Array" << endl;  //Output ke layar
    cout << "====================" << endl;  //Output ke layar

    for (int i = 0; i < n; i++) {     //Looping ddengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> buya[i];                  //Input dari pengguna
    }
}

void Sort() {

    int i, temp, j;

    for (i = 1; i <= n - 1; i++) { 
        temp = buya[i]; 
        j = i - 1; 
        while (j >= 0 && buya[j] > temp) 
        {
            buya[j + 1] = buya[j]; 
            j = j - 1; 
        }
        buya[j + 1] = temp; 

        for (int k = 0; k < n; k++) {
            cout << buya[k] << " ";

        }
        cout << "pass " << i  << endl;
        cout << endl;
    }while (i <= i);

}

void display() { //Method untuk menampilkan hasil
    cout << endl;                            //Output baris kosong
    cout << "=================================" << endl;  //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;  //Output ke layar
    cout << "=================================" << endl;  //Output ke layar
    for (int i = 0; i < n; i++) {
        cout << buya[i] << endl;
    }
    cout << endl;                                         //Output ke layar
}

int main()
{
    input();
    system("pause");
    Sort();
    return 0;
}


