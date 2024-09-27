#include <iostream>

int main() {
    double hargaAsli = 150000;
    double persentaseDiscount = 12.5;

    double jumlahDiscount = hargaAsli * (persentaseDiscount / 100);
    double hargaSetelahDiscount = hargaAsli - jumlahDiscount;

    std::cout << "harga  : " << hargaAsli << std::endl;
    std::cout << "Diskon : " << persentaseDiscount << std::endl;
    std::cout << "Besarnya diskon dari harga : " << jumlahDiscount << std::endl;
    std::cout << "Harga setelah diskon : " << hargaSetelahDiscount << " ribu" << std::endl;

    return 0;
}