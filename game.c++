#include <iostream>
#include <cstdlib>  // rand() va srand() uchun
#include <ctime>    // time() uchun

using namespace std;

int main() {
    // Tasodifiy raqamni tanlash uchun random generatorni sozlash
    srand(time(0)); // har safar turli tasodifiy raqam olish uchun vaqtni seed sifatida ishlatamiz
    int raqam = rand() % 100 + 1;  // 1 dan 100 gacha bo'lgan raqam
    int taxmin;
    int urinishlar = 0;

    cout << "1 va 100 orasida tasodifiy raqam topishga harakat qiling!" << endl;
    
    // Foydalanuvchidan raqamni taxmin qilishni so'rash
    do {
        cout << "Taxmin qilgan raqamingizni kiriting: ";
        cin >> taxmin;
        urinishlar++;

        // Raqamni tekshirish
        if (taxmin > raqam) {
            cout << "Kichraytiring! Sizning raqamingiz katta." << endl;
        } else if (taxmin < raqam) {
            cout << "Kattalashtiring! Sizning raqamingiz kichik." << endl;
        } else {
            cout << "Tabriklayman! Siz raqamni to'g'ri topdingiz!" << endl;
            cout << "Raqamni " << urinishlar << " urinishda topdingiz." << endl;
        }
    } while (taxmin != raqam);

    return 0;
}
