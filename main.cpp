#include <iostream>
#include "HoaDon.h"
using namespace std;

int main() {
    HoaDon hd(1, "Nguyen Van A");
    hd.themMon("Com rang", 2, 30000);
    hd.themMon("Tra sua", 1, 25000);
    hd.themMon("Goi cuon", 3, 15000);
    hd.inHoaDon();
    cout << ">>> Tong tien phai tra: " << hd.tinhTongTien() << " VND" << endl;

    return 0;
}
