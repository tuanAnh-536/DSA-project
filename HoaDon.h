#ifndef HOADON_H
#define HOADON_H

#include <string>
#include <vector>
using namespace std;

struct MonDaGoi {
    string tenMon;
    int soLuong;
    double gia;
};

class HoaDon {
private:
    int maHoaDon;
    string tenKhachHang;
    vector<MonDaGoi> danhSachMon;
    double tongTien;

public:
    HoaDon(int ma, string tenKH);
    void themMon(string ten, int sl, double gia);
    void inHoaDon() const;
    double tinhTongTien() const;
};

#endif
