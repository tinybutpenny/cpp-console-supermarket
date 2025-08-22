#include <iostream>
#include <string>
#include <cctype>

std::string tolower(std::string s) {
    for (char &c : s)
    c = std::tolower(c);
    return s;
}
bool dachon(float x) {
    return x == 0;
}

bool luachonhople(std::string x) {
    tolower(x);
    return x == "thitlon" || x == "thitbo" || x == "ca" || x == "rau" || x == "carot";
}
int chonsoluong() {
    int a;
    std::cout << " Vui lòng chọn số lượng" << std::endl;
    while (true) {
        std::cin >> a;
        if (std::cin.fail()) {
            std::cout << " Lựa chọn không hợp lệ" "\n"
            " Vui lòng chọn lại" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        } else {
            return a;
        }
    }
    
}
float tonggiatien(std::string b) {
    float a;

    if(b == "thitlon") {
        a = 15;
        return a;
    } else if(b == "thitbo") {
        a = 20.5;
        return a;
    } else if(b == "ca") {
        a = 12.5;
        return a;
    } else if(b == "rau") {
        a = 10;
        return a;
    } else {
        a = 11.7;
        return a;
    }
}
float tinhtiensoluong(int a, float b) {
    float c;
    c = a*b;
    return c;
}
void inlog(std::string a, int b, float c,int d) {
    if(d == 0) {
        std::cout << " Đã chọn: " << a << "\n"
        " Số lượng là: " << b << "\n"
        " Đơn giá là: " << c << std::endl;
        return;
    } else if( d == 1) {
        std::cout << " Chọn tiếp: " << a << "\n"
        " Số lượng mới là: " << b << "\n"
        " Đơn giá là: " << c << std::endl;
        return;
    } else {return;}
}

void dachonroi(float a, std::string b,int c, float d, float &e, int &f,int &chon) { // a: tiền cũ, c: số lượng cũ, b: sản phẩm, d: giá tiền cũ, e: tiền mới, f: số lượng mới

    std::cout << " Bạn đã chọn: " << b << " rồi" "\n"
    " Bạn muốn chọn tiếp không y/n" << std::endl;
    char tieptuc;
    while (true) {
        std::cin >> tieptuc;
        if (tieptuc == 'Y' || tieptuc == 'y') {
                f = chonsoluong() + c;
                e = tinhtiensoluong(c,d) + a;
                chon = 1;
                return;
        } else {
            f = c;
            e = a;
            chon = 2;
            return;
        }
    }
}

void chonsanpham(std::string &sanpham, int &soluong, float &tienthitlon, float &tienthitbo, float &tienca, float &tienrau, float &tiencarot, float &giatien, int &sosanpham, float e, int f,int chon) {
    sosanpham = 0;
    tienthitlon = 0, tienthitbo = 0, tienca = 0, tienrau = 0, tiencarot = 0;
    std::cout << " Vui lòng chọn sản phẩm ấn ok để thoát" << std::endl;
    while (true)  {
        e = 0;
        f = 0;
        chon = 0;
        std::cin >> sanpham;
        if (sanpham == "ok") {
            if (sosanpham == 0) {
                char thoat;
                std::cout << " Bạn chưa chọn sản phẩm" "\n"
                " Bạn có muốn thoát chứ (y/n)" << std::endl;
                std::cin >> thoat;
                if (thoat == 'Y' || thoat == 'y') {
                    return;
                } else {
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                }
            } else {
                std::cout << " Bạn đã chọn được: " << sosanpham << "sản phẩm" << std::endl;
                return;
            }
        }
        if (luachonhople(sanpham)) {
            if (sanpham == "thitlon") {
                if (dachon(tienthitlon)) {
                    soluong = chonsoluong();
                    giatien = tonggiatien(sanpham);
                    inlog(sanpham,soluong,giatien,chon);
                    tienthitlon = tinhtiensoluong(soluong,giatien);
                    sosanpham ++;
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                } else {
                    dachonroi(tienthitlon,sanpham,soluong,giatien,e,f,chon);
                    tienthitlon = e;
                    soluong = f;
                    inlog(sanpham,soluong,giatien,chon);
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                }
            } else if(sanpham == "thitbo") {
                if (dachon(tienthitbo)) {
                    soluong = chonsoluong();
                    giatien = tonggiatien(sanpham);
                    inlog(sanpham,soluong,giatien,chon);
                    tienthitbo = tinhtiensoluong(soluong,giatien);
                    sosanpham ++;
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                } else {
                    dachonroi(tienthitbo,sanpham,soluong,giatien,e,f,chon);
                    tienthitbo = e;
                    soluong = f;
                    inlog(sanpham,soluong,giatien,chon);
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                }
            } else if(sanpham == "ca") {
                if (dachon(tienca)) {
                    soluong = chonsoluong();
                    giatien = tonggiatien(sanpham);
                    inlog(sanpham,soluong,giatien,chon);
                    tienca = tinhtiensoluong(soluong,giatien);
                    sosanpham ++;
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                } else {
                    dachonroi(tienca,sanpham,soluong,giatien,e,f,chon);
                    tienca = e;
                    soluong = f;
                    inlog(sanpham,soluong,giatien,chon);
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                }
            } else if (sanpham == "rau") {
                if (dachon(tienrau)) {
                    soluong = chonsoluong();
                    giatien = tonggiatien(sanpham);
                    inlog(sanpham,soluong,giatien,chon);
                    tienrau = tinhtiensoluong(soluong,giatien);
                    sosanpham ++;
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                } else {
                    dachonroi(tienrau,sanpham,soluong,giatien,e,f,chon);
                    tienrau = e;
                    soluong = f;
                    inlog(sanpham,soluong,giatien,chon);
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                }
            } else {
                if (dachon(tiencarot)) {
                    soluong = chonsoluong();
                    giatien = tonggiatien(sanpham);
                    inlog(sanpham,soluong,giatien,chon);
                    tiencarot = tinhtiensoluong(soluong,giatien);
                    sosanpham ++;
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                } else {
                    dachonroi(tiencarot,sanpham,soluong,giatien,e,f,chon);
                    tiencarot = e;
                    soluong = f;
                    inlog(sanpham,soluong,giatien,chon);
                    std::cout << " Mời bạn tiếp tục sản phẩm ấn ok để thoát" << std::endl;
                    continue;
                }
            }
        } else {
            std::cout << " Lựa chọn không hợp lệ" "\n"
            " Vui lòng chọn lại" << std::endl;
            continue;
        }
    }
}

float tongsotien (float a, float b, float c, float d, float e, int &k) {
    float f;
    float g;
    float h;
    k = 0;
    
    f = a + b + c + d + e;
    if (f >= 50) {
        g = f * 0.1;
        h = f;
        f = h - g;
        k = 1;
    }
    return f;
}

void inhoadon(float a, float b, float c, float d, float e) {

    int f;
    if (a != 0) {
        f = 0;
        f = a / 15;
        std::cout << " Thịt lợn số lượng: " << f << "\n"
        " Đơn giá: 15$" "\n"
        " Số tiền phải trả: " << a << std::endl;
    }
    if (b != 0) {
        f = 0;
        f = b / 20.5;
        std::cout << " Thịt bò số lượng: " << f << "\n"
        " Đơn giá: 20.5$" "\n"
        " Số tiền phải trả: " << b << std::endl;
    }
    if (c != 0) {
        f = 0;
        f = c / 12.5;
        std::cout << " Cá số lụong: " << f << "\n"
        " Đơn giá: 12.5$" "\n"
        " Số tiền phải trả: " << c << std::endl;
    } 
    if (d !=0) {
        f = 0;
        f = d / 10;
        std::cout << "  Rau số lụong: " << f << "\n"
        " Đơn giá: 10$" "\n"
        " Số tiền phải trả: " << d << std::endl;
    }
    if (e !=0) {
        f = 0;
        f = e / 11.5;
        std::cout << "  Cà rốt số lụong: " << f << "\n"
        " Đơn giá: 11,5$" "\n"
        " Số tiền phải trả: " << e << std::endl;
    }
    return;
}
int main() {
    std::string sanpham;
    int soluong, sosanpham, e,chon,k;
    float tienthitlon, tienthitbo, tienca, tienrau, tiencarot, giatien, sotienphaitra, f;
    char tieptuc;
    std::string ten;
    while (true)  {
        std::cout << " Vui lòng nhập tên của bạn" << std::endl;
        std::getline(std::cin,ten);
        if (std::cin.fail()) {
            std::cout << " Tên không hợp lệ" "\n"
            " Vui lòng nhập lại" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        } else {
            break;
        }
    }
    do {
        std::cout << " Hi chào: " << ten << "\n"
        " Bạn muốn mua gì" << std::endl;
        chonsanpham(sanpham,soluong,tienthitlon,tienthitbo,tienca,tienrau,tiencarot,giatien,sosanpham,e,f,chon);
        if (sosanpham == 0) {
            return 0;
        } else {
            sotienphaitra = tongsotien(tienthitlon,tienthitbo,tienca,tienrau,tiencarot,k);
        }
        std::cout << " Bạn có muốn in hóa đơn không y/n" << std::endl;
        char tiep;
        while (true) {
            std::cin >> tiep;
            if (tiep == 'Y' || tiep == 'y') {
                std::cout << " Hóa đơn của " << ten << "\n" 
                " Các sản phẩm bạn mua là: " << std::endl;
                inhoadon(tienthitlon,tienthitbo,tienca,tienrau,tiencarot);
                std::cout << " Tổng số tiền phải trả của: " << sosanpham << " sản phẩm là: " << sotienphaitra << std::endl;
                if (k == 1) {
                    std::cout << " Xin chúc mừng bạn: " << ten << "\n"
                    " Được giảm 10% vì đã tiêu hơn 50$" << std::endl;
                }
                break;
            } else {
                std::cout <<" Tổng số tiền " << ten << " phải trả của " << sosanpham << " sản phẩm là: " << sotienphaitra << std::endl;
                if (k == 1) {
                    std::cout << " Xin chúc mừng bạn: " << ten << "\n"
                    " Được giảm 10% vì đã tiêu hơn 50$" << std::endl;
                }
                break;
            }
        }
        
        std::cout << " Bạn có muốn tiếp tục không (y/n)" << std::endl;
        std::cin >> tieptuc;
    } while (tieptuc == 'Y' || tieptuc == 'y');
    std::cout << " Tạm biệt " << ten << "\n" 
    " Hẹn gặp lại" << std::endl;
    return 0;
}