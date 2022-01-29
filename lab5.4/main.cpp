#include <iostream>
#include "Pos.h"
#include "Cir.h"
#include "Squ.h"
#include "CinS.h"
using namespace std;
int main()
{
    int choice = 0;
    CinS z;
    while (true)
    {
        cout<< "1.  Perimetr of circle \n"
            << "2.  Area of circle \n"
            << "3.  Perimetr of square \n"
            << "4.  Area of square \n"
            << "5.  Size of figures \n"
            << "6.  Move 1 \n"
            << "7.  Move 2 \n"
            << "8.  Print circle \n"
            << "9.  Print square \n"
            << "10. Print figures \n"
            << "11. Exit \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << ((Cir)z).Perimeter() << endl;
            break;
        }
        case 2:
        {
            cout << ((Cir)z).Area() << endl;
            break;
        }
        case 3:
        {
            cout << ((Squ)z).Perimeter() << endl;
            break;
        }
        case 4:
        {
            cout << ((Squ)z).Area() << endl;
            break;
        }
        case 5:
        {
            int a, b;
            cin >> a >> b;
            cout << endl;
            z.size(a, b);
            break;
        }
        case 6:
        {
            int a, b;
            cout << "Input x, y: ";
            cin >> a >> b;
            z.move(a, b);
            cout << endl;
            break;
        }
        case 7:
        {
            int a, b, ma, mb;
            cout << "Input x, y: \n";
            cin >> a >> b;
            cout << "\n Input x*, y*:  \n";
            cin >> ma >> mb;
            z.move(a, b, ma, mb);
            cout << endl;
            break;
        }
        case 8:
        {
            z.printC(z.gmx(), z.gmy());
            break;
        }
        case 9:
        {
            z.printS();
            break;
        }
        case 10:
        {
            z.print();
            break;
        }
        default:
        {
            return 0;
        }
        };
    }
}




