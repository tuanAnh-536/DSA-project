#include "HoaDon.h"
#include <iostream>
using namespace std;

HoaDon::HoaDon(int ma, string tenKH) {
    maHoaDon = ma;
    tenKhachHang = tenKH;
    tongTien = 0;
}

void HoaDon::themMon(string ten, int sl, double gia) {
    MonDaGoi mon;
    mon.tenMon = ten;
    mon.soLuong = sl;
    mon.gia = gia;
    danhSachMon.push_back(mon);

    tongTien += sl * gia;
}

double HoaDon::tinhTongTien() const {
    return tongTien;
}

void HoaDon::inHoaDon() const {
    cout << "========== HOA DON ==========" << endl;
    cout << "Ma hoa don: " << maHoaDon << endl;
    cout << "Ten khach hang: " << tenKhachHang << endl;
    cout << "Danh sach mon:" << endl;
    for (const MonDaGoi& mon : danhSachMon) {
        cout << "- " << mon.tenMon
             << " | So luong: " << mon.soLuong
             << " | Don gia: " << mon.gia
             << " | Thanh tien: " << mon.soLuong * mon.gia << endl;
    }
    cout << "Tong tien: " << tongTien << endl;
    cout << "==============================" << endl;
}
