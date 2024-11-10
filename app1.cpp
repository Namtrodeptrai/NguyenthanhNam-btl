#include <bits/stdc++.h>
#include "qly.cpp"

class app
{
public:
    void Menu()
    {
        cout << "             CHUONG TRINH QUAN LY RUOU" << endl;
        cout << "------------------------MENU-------------------------" << endl;
        cout << "   1. Nhap danh sach ruou." << endl;
        cout << "   2. In ra danh sach ruou." << endl;
        cout << "   3. Sap xep danh sach ruou theo so luong." << endl;
        cout << "   4. Them ruou vao danh sach." << endl;
        cout << "   5. Tim kiem ruou theo phan loai" << endl;
        cout << "   6. In ra ruou co gia cao nhat va thap nhat." << endl;
        cout << "   7. Xoa ruou bang ma ruou." << endl;
        cout << "   8. Thoat." << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    void Menu1()
    {
        qlyruou wine;
    back:
        while (true)
        {
            int m;
            cout << endl
                 << "* Nhap chuc nang: ";
            cin >> m;
            switch (m)
            {
            case 1:
                cout << endl
                     << "1. Nhap danh sach ruou." << endl;
                wine.nhap();
                cout << endl
                     << "Nhap thanh cong !" << endl;
                break;
            case 2:
                cout << endl
                     << "2. In ra danh sach ruou." << endl;
                wine.xuat();
                break;
            case 3:
                cout << endl
                     << "Sap xep danh sach ruou theo so luong." << endl;
                wine.sapxep();
                break;
            case 4:
                cout << endl
                     << "4. Them ruou vao trong danh sach da co." << endl;
                wine.them();
                break;
            case 5:
                cout << endl
                     << "5. Tim kiem ruou theo danh muc." << endl;
                wine.tim();
                break;
            case 6:
                cout << endl
                     << "6. In ra ruou co gia cao nhat va thap nhat." << endl;
                wine.maxmin();
                break;
            case 7:
                cout << endl
                     << "7. Xoa ruou bang ma ruou." << endl;
                wine.xoa();
                break;
            case 8:
                cout << endl
                     << "Thoat !" << endl;
                exit(0);
                break;
            default:
                cout << endl
                     << "Vui long nhap lai !" << endl;
                goto back;
            }
        }
    }
};
