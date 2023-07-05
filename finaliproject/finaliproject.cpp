#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x, y;
public:
    bidangDatar() {
        x = 0;
        y = 0;
    }

    virtual void input() {}
    virtual float Luas(int a) { return 0; }
    virtual float Keliling(int a) { return 0; }
    virtual void cekUkuran() { return; }

    void setX(int a) {
        this->x = a;
    }

    int getX() {
        return x;
    }
};

class Lingkaran : public bidangDatar {
private:
    float radius;
public:
    Lingkaran() : bidangDatar() {
        radius = 0;
    }

    void input() {
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> radius;
    }

    float Luas(int a) {
        return 3.14 * radius * radius;
    }

    float Keliling(int a) {
        return 2 * 3.14 * radius;
    }

    void cekUkuran() {
        if (radius == 0) {
            cout << "Lingkaran belum diinputkan.\n";
        }
        else {
            cout << "Lingkaran dengan jari-jari " << radius << endl;
            cout << "Luas: " << Luas(radius) << endl;
            cout << "Keliling: " << Keliling(radius) << endl;
        }
    }
};

class Persegipanjang : public bidangDatar {
private:
    int panjang, lebar;
public:
    Persegipanjang() : bidangDatar() {
        panjang = 0;
        lebar = 0;
    }

    void input() {
        cout << "Masukkan panjang persegipanjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegipanjang: ";
        cin >> lebar;
    }

    float Luas(int a) {
        return panjang * lebar;
    }

    float Keliling(int a) {
        return 2 * (panjang + lebar);
    }

    void cekUkuran() {
        if (panjang == 0 || lebar == 0) {
            cout << "Persegipanjang belum diinputkan.\n";
        }
        else {
            cout << "Persegipanjang dengan panjang " << panjang << " dan lebar " << lebar << endl;
            cout << "Luas: " << Luas(0) << endl;
            cout << "Keliling: " << Keliling(0) << endl;
        }
    }
};

int main() {
    bidangDatar* objek;
    Lingkaran lingkaran;
    Persegipanjang persegipanjang;

    int pilihan;
    cout << "Pilih objek bidang datar:\n";
    cout << "1. Lingkaran\n";
    cout << "2. Persegi Panjang\n";
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        objek = &lingkaran;
        return 0;
    }
    

