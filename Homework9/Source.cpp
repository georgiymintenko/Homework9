//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
////�������� 1
//
//void bros(int kubik);
//int rez();
//
//void main()
//{
//    setlocale(LC_ALL, "");
//    srand(time(NULL));
//
//    cout << "³�����! ǳ����� � ������? ������� ���� �����: " << endl;
//     cout<<"�������� ���, � ���� ���� �� ��������� �'��� ����� �����!" << endl;
//    cout << "������...\n\n" << endl;
//
//    char brosok;
//    int total_chel = 0;
//    int total_komp = 0;
//
//    do
//    {
//        cout << "�������� ��������� �����? ������� * ��� ����� ... �����! " << endl;
//        cin >> brosok;
//    } while (brosok != '*');
//
//    int rez_chel, rez_komp;
//    do
//    {
//        rez_chel = rez();
//        cout << "��� ���������: " << rez_chel << endl;
//
//        cout << "\n����� �..." << endl;
//
//        rez_komp = rez();
//        cout << "\n�i� ���������: " << rez_komp << endl;
//    } while (rez_chel == rez_komp);
//
//    if (rez_chel > rez_komp)
//    {
//
//        cout << "\n�� ���� �� �������� ������((( " << endl;
//        for (int i = 1; i <= 5; i++)
//        {
//            do
//            {
//                cout << "�����! (��� *)" << endl;
//                cin >> brosok;
//            } while (brosok != '*');
//            total_chel += rez();
//
//            total_komp += rez();
//
//        }
//        cout << "��� ��������� ��������� (����� ���i� �� 5 �������): " << total_chel << endl;
//        cout << "\n�i� ��������� ��������� (����� ���i� �� 5 �������): " << total_komp << endl;
//    }
//    else
//    {
//        cout << "\n���!!! ����� ������ �!!! " << endl;
//        for (int i = 1; i <= 5; i++)
//        {
//            total_komp += rez();
//
//            do
//            {
//                cout << "�����! (��� *)" << endl;
//                cin >> brosok;
//            } while (brosok != '*');
//            total_chel += rez();
//
//        }
//        cout << "��� ��������� ��������� (����� ���i� �� 5 �������): " << total_chel << endl;
//        cout << "�i� ��������� ��������� (����� ���i� �� 5 �������): " << total_komp << endl;
//    }
//
//    if (total_chel == total_komp)
//    {
//        cout << "\n\n�����!!!\n\n" << endl;
//    }
//    else
//    {
//        if (total_chel > total_komp)
//        {
//            cout << "\n\n�� �������!!!³���!!!\n\n" << endl;
//        }
//
//        if (total_chel < total_komp)
//        {
//           
//                cout << "\n\n� ������!!! ����� ������?���� � � ��������� �������� ����� � �� ��))) (����))\n\n" << endl;
//        }
//    }
//
//    cout << "���������� ���\n\n";
//
//    cout << "���� ������� ���� �� ������: " << total_chel / 5.0 << endl;
//    cout << "��� ������� ���� �� ������: " << total_komp / 5.0 << endl;
//
//}
//
//void bros(int kubik)
//{
//    switch (kubik)
//    {
//    case 1:
//        cout << "***********" << endl;
//        cout << "*         *" << endl;
//        cout << "*         *" << endl;
//        cout << "*    *    *" << endl;
//        cout << "*         *" << endl;
//        cout << "*         *" << endl;
//        cout << "***********" << endl;
//        break;
//    case 2:
//        cout << "***********" << endl;
//        cout << "*         *" << endl;
//        cout << "*    *    *" << endl;
//        cout << "*         *" << endl;
//        cout << "*    *    *" << endl;
//        cout << "*         *" << endl;
//        cout << "***********" << endl;
//        break;
//    case 3:
//        cout << "***********" << endl;
//        cout << "*         *" << endl;
//        cout << "*  *      *" << endl;
//        cout << "*    *    *" << endl;
//        cout << "*      *  *" << endl;
//        cout << "*         *" << endl;
//        cout << "***********" << endl;
//        break;
//    case 4:
//        cout << "***********" << endl;
//        cout << "*         *" << endl;
//        cout << "*  *   *  *" << endl;
//        cout << "*         *" << endl;
//        cout << "*  *   *  *" << endl;
//        cout << "*         *" << endl;
//        cout << "***********" << endl;
//        break;
//    case 5:
//        cout << "***********" << endl;
//        cout << "*         *" << endl;
//        cout << "*  *   *  *" << endl;
//        cout << "*    *    *" << endl;
//        cout << "*  *   *  *" << endl;
//        cout << "*         *" << endl;
//        cout << "***********" << endl;
//        break;
//    case 6:
//        cout << "***********" << endl;
//        cout << "*         *" << endl;
//        cout << "*  *   *  *" << endl;
//        cout << "*  *   *  *" << endl;
//        cout << "*  *   *  *" << endl;
//        cout << "*         *" << endl;
//        cout << "***********" << endl;
//        break;
//    }
//}
//int rez()
//{
//    int kubik_1 = rand() % 5 + 1;
//    bros(kubik_1);
//
//    int kubik_2 = rand() % 5 + 1;
//    bros(kubik_2);
//
//    int rezult;
//    rezult = kubik_1 + kubik_2;
//    cout << "���������: " << rezult << "\n\n";
//
//    return rezult;
//}
//�������� 2
//#include <iostream>
//using namespace std;
//int Figura(int x, int y)
//{
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
//            {
//                cout << char(219);
//            }
//            else
//            {
//                cout << char(255);
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
//int main()
//{
//    setlocale(0, "RU");
//    int N, K;
//    system("color 5"); cout << "Enter height" << endl;
//    cin >> N;
//    system("color 12"); cout << "Enter weight" << endl;
//    cin >> K;
//    setlocale(0, "C");
//    //system("cls"); // �������� ����, ���� ����� ���� �����
//    Figura(N, K);
//    system("pause"); // ��� ��������� 
//    return 0;
//}
//�������� 3
#include<iostream>
#include <windows.h>
int arr[30];
using namespace std;
float change() {
    for (int i = 0; i < 30; i++) {
        arr[i] = rand() % 100;
        cout << " " << arr[i];
    }
    cout << endl;
    int number;
    int elements;
    cin >> number;
    cin >> elements;
    arr[number] = elements;
    for (int i = 0; i < 30; i++) {



        cout << " " << arr[i];
    }
    return 0;




}
int main() {
    change();
}
