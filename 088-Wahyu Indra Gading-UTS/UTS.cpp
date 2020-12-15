#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void menu () {
    int ops;
    cout << "\n***********************************************\n";
    cout << "*********** Program Perhitungan Kecil *********\n";
    cout << "***********************************************\n";
    cout << "\n\nSilahkan Pilih Salah Satu Perhitungan :\n\n";
    cout << "1. Akar & Pangkat Kuadrat\n2. Akar & Pangkat Kubik\n3. Determinan Matriks (2x2)\n";
    cout << "4. Determinan Matriks (3x3)\n5. Mencari Vektor & Besarnya \n\n";
    cout << "   Jawab(1-5): "; cin >> ops;
    cout << endl;

    if ( ops == 1) {
        char yt = 'A';
        float x,b,c;

        do {
            cout << "\n\n----> Akar & Pangkat Kuadrat <----\n\n";
            cout << "Input Bilangan: "; cin >> x;

            b = sqrt(x);
            c = pow(x,2);

            printf ("\n%.2f Akar 2    = %.2f", x, b);
            printf ("\n%.2f Pangkat 2 = %.2f", x,c);
            cout << endl << endl;
            cout << " [ A. Hitung Ulang    B. Ke Menu Utama   C. Keluar ]\n\n";
            cout << "Pilih (a/b/c): "; cin >> yt;
        } while (toupper(yt) == 'A');

        if (toupper(yt) == 'B') {
                system("cls");
                menu();
        }
        else
        system("cls");

    }

    else if ( ops == 2) {
        char yt = 'A';
        float x,b,c;

        do {
            cout << "\n\n----> Akar & Pangkat Kubik <----\n\n";
            cout << "Input Bilangan: "; cin >> x;

            b = cbrt(x);
            c = pow(x,3);

            printf ("\n%.2f Akar 3    = %.2f", x, b);
            printf ("\n%.2f Pangkat 3 = %.2f", x,c);
            cout << endl << endl;
            cout << " [ A. Hitung Ulang    B. Ke Menu Utama   C. Keluar ]\n\n";
            cout << "Pilih (a/b/c): "; cin >> yt;
        } while (toupper(yt) == 'A');

        if (toupper(yt) == 'B') {
                system("cls");
                menu();
        }
        else
        system("cls");

    }

    else if (ops == 3) {
        char yt = 'A';
        int a,b,c,d,det;
        do {
            cout << "\n\n----> Determinan Matriks (2x2) <----\n\n";
            cout << "Inputkan data:\n";
            cout << "Baris ke-1 Kolom ke-1 : "; cin >> a;
            cout << "Baris ke-1 Kolom ke-2 : "; cin >> b;
            cout << "Baris ke-2 Kolom ke-1 : "; cin >> c;
            cout << "Baris ke-2 Kolom ke-2 : "; cin >> d;
            det = (a*d)-(b*c);
            cout << "\n\nDeterminan Matriks = "<< det;
            cout << endl << endl;
            cout << " [ A. Hitung Ulang    B. Ke Menu Utama   C. Keluar ]\n\n";
            cout << "Pilih (a/b/c): "; cin >> yt;
        } while (toupper(yt) == 'A');

        if (toupper(yt) == 'B') {
                system("cls");
                menu();
        }
        else
        system("cls");

    }
    else if (ops == 4) {
        char yt = 'A';
        int a,b,c,d,e,f,g,h,i,det;
        do {
            cout << "\n\n----> Determinan Matriks (3x3) <----\n\n";
            cout << "Inputkan data:\n";
            cout << "Baris ke-1 Kolom ke-1 : "; cin >> a;
            cout << "Baris ke-1 Kolom ke-2 : "; cin >> b;
            cout << "Baris ke-1 Kolom ke-3 : "; cin >> c;
            cout << "Baris ke-2 Kolom ke-1 : "; cin >> d;
            cout << "Baris ke-2 Kolom ke-2 : "; cin >> e;
            cout << "Baris ke-2 Kolom ke-3 : "; cin >> f;
            cout << "Baris ke-3 Kolom ke-1 : "; cin >> g;
            cout << "Baris ke-3 Kolom ke-2 : "; cin >> h;
            cout << "Baris ke-3 Kolom ke-3 : "; cin >> i;
            det = ((a*e*i+b*f*g+c*d*h)-(g*e*c+h*f*a+b*d*i));
            cout << "\n\nDeterminan Matriks = "<< det;
            cout << endl << endl;
            cout << " [ A. Hitung Ulang    B. Ke Menu Utama   C. Keluar ]\n\n";
            cout << "Pilih (a/b/c): "; cin >> yt;
        } while (toupper(yt) == 'A');

        if (toupper(yt) == 'B') {
                system("cls");
                menu();
        }
        else
        system("cls");

    }
    else if (ops == 5) {
        char yt = 'A';
        int a,b,c,d, x,y;
        float besar;

        do {
            cout << "\n\n----> Vektor $ Besarannya <----\n\n";
            cout << "Input Data:\n";
            cout << "Koordinat 1, 'x': ";cin >> a;
            cout << "Koordinat 1, 'y': ";cin >> b;
            cout << "Koordinat 2, 'x': ";cin >> c;
            cout << "Koordinat 2, 'y': ";cin >> d;
            x = c-a;
            y = d-b;
            besar = sqrt(pow(x,2)+pow(y,2));
            cout << "\nVektor (x,y) : (" << x << "," << y << ")";
            printf ("\nBesar Vektor : %.2f", besar);
            cout << endl << endl;
            cout << " [ A. Hitung Ulang    B. Ke Menu Utama   C. Keluar ]\n\n";
            cout << "Pilih (a/b/c): "; cin >> yt;
        } while (toupper(yt) == 'A');

        if (toupper(yt) == 'B') {
                system("cls");
                menu();
        }
        else
        system("cls");

    }

    else cout << "\n\n\nTidak Ada di Menu !!";
}

int main() {
    string username, password;
    char tag;

    cout << endl << endl;
    printf ("Username : "); cin >> username;
    printf ("Password : "); cin >> password;

        if (username == "unesa") {
            if (password == "jaya") {
                system("cls");
                menu();
            } else {
                cout << "\n\aPassword Anda Salah !\n";
                cout << "\nCoba Lagi (y/t): "; cin >> tag;
                if (tag == 'y') {
                    system("cls");
                    main();
                }
            }
        } else {
            cout << "\n\aMohon Maaf Anda Tidak terdaftar !\n";
            cout << "\nCoba Lagi (y/t): "; cin >> tag;
            if (tag == 'y') {
                system ("cls");
                main();
            }
        }


    return 0;
}
