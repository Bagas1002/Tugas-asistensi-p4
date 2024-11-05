#include <iostream>
#include <string>

// Struct untuk cetak biru karakter
struct Karakter {
    std::string nama;
    int energi;
    int kasih;
};

// Fungsi untuk simulasi mengelus, menambah atribut kasih
void elus(Karakter &hewan) {
    std::cout << "Kamu mendapatkan kasih dari " << hewan.nama << "\n";
    hewan.kasih += 10;
}

// Fungsi untuk simulasi melompat, mengurangi energi dan tidak mengubah kasih
void lompat(Karakter &karakter) {
    std::cout << karakter.nama << " sedang melompat!\n";
    karakter.energi -= 20;
}

// Fungsi untuk simulasi makan, menambah kasih dan energi
void makan(Karakter &karakter) {
    std::cout << karakter.nama << " sedang makan!\n";
    karakter.kasih += 10;
    karakter.energi += 10;
}

// Fungsi untuk simulasi lari, mengurangi energi dan tidak mengubah kasih
void lari(Karakter &karakter) {
    std::cout << karakter.nama << " sedang berlari!\n";
    karakter.energi -= 30;
}

// Fungsi untuk menampilkan atribut dari karakter
void tampilkanAtribut(const Karakter &karakter) {
    std::cout << "Energi " << karakter.nama << " adalah " << karakter.energi << std::endl;
    std::cout << "Kasih " << karakter.nama << " adalah " << karakter.kasih << std::endl;
}

int main() {
    // Mendefinisikan karakter
    Karakter bagas = {"Bagas", 100, 50};  // Karakter manusia
    Karakter zeus = {"Zeus", 70, 30};     // Karakter kelinci

    // Loop utama simulasi
    std::string perintah;
    while (true) {
        std::cout << "\nMasukkan perintah (ELUS ZEUS, LOMPAT ZEUS, MAKAN ZEUS, LARI ZEUS, ATRIBUT <nama_karakter>, atau KELUAR): ";
        std::getline(std::cin, perintah);

        if (perintah == "ELUS ZEUS") {
            elus(zeus);
        } else if (perintah == "LOMPAT ZEUS") {
            lompat(zeus);
        } else if (perintah == "MAKAN ZEUS") {
            makan(zeus);
        } else if (perintah == "LARI ZEUS") {
            lari(zeus);
        } else if (perintah == "ATRIBUT BAGAS") {
            tampilkanAtribut(bagas);
        } else if (perintah == "ATRIBUT ZEUS") {
            tampilkanAtribut(zeus);
        } else if (perintah == "KELUAR") {
            break;
        } else {
            std::cout << "Perintah tidak dikenal. Silakan coba lagi." << std::endl;
        }
    }

    return 0;
}
