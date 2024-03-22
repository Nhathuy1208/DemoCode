#include <iostream>
using namespace std;
int main() {
    // Khai báo biến
    int a, b, tong;

    // Nhập giá trị cho hai số từ người dùng
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;

    // Tính tổng
    tong = a + b;

    // Hiển thị kết quả
    cout << "Tong cua hai so la: " << tong << endl;

    return 0;
}