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

    void setY(int b) {
        this->y = b;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        int radius;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> radius;
        setX(radius);
    }

    float Luas(int a) {
        float radius = getX();
        return 3.14 * radius * radius;
    }

    float Keliling(int a) {
        float radius = getX();
        return 2 * 3.14 * radius;
    }

    void cekUkuran() {
        float keliling = Keliling(0);
        if (keliling > 40) {
            cout << "Ukuran lingkaran: Besar" << endl;
        }
        else if (keliling < 20) {
            cout << "Ukuran lingkaran: Sedang" << endl;
        }
        else if (keliling < 10) {
            cout << "Ukuran lingkaran: Kecil" << endl;
        }
    }
};

class Persegipanjang : public bidangDatar {
public:
    void input() {
        int panjang, lebar;
        cout << "Masukkan panjang persegipanjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegipanjang: ";
        cin >> lebar;
        setX(panjang);
        setY(lebar);
    }

    float Luas(int a) {
        int panjang = getX();
        int lebar = getY();
        return panjang * lebar;
    }

    float Keliling(int a) {
        int panjang = getX();
        int lebar = getY();
        return 2 * (panjang + lebar);
    }

    void cekUkuran() {
        float keliling = Keliling(0);
        if (keliling > 40) {
            cout << "Ukuran persegi panjang: Besar" << endl;
        }
        else if (keliling < 20) {
            cout << "Ukuran persegi panjang: Sedang" << endl;
        }
        else if (keliling < 10) {
            cout << "Ukuran persegi panjang: Kecil" << endl;
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
        return  0;
    }

    

