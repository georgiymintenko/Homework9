//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
////Завдання 1
//
//void bros(int kubik);
//int rez();
//
//void main()
//{
//    setlocale(LC_ALL, "");
//    srand(time(NULL));
//
//    cout << "Вітання! Зіграємо в кубики? Правила дуже прості: " << endl;
//     cout<<"Перемагає той, у кого сума за підсумками п'яти кидків більше!" << endl;
//    cout << "Поїхали...\n\n" << endl;
//
//    char brosok;
//    int total_chel = 0;
//    int total_komp = 0;
//
//    do
//    {
//        cout << "Розіграємо черговість кидків? Натисни * для кидка ... Кидай! " << endl;
//        cin >> brosok;
//    } while (brosok != '*');
//
//    int rez_chel, rez_komp;
//    do
//    {
//        rez_chel = rez();
//        cout << "Ваш результат: " << rez_chel << endl;
//
//        cout << "\nТепер я..." << endl;
//
//        rez_komp = rez();
//        cout << "\nМiй результат: " << rez_komp << endl;
//    } while (rez_chel == rez_komp);
//
//    if (rez_chel > rez_komp)
//    {
//
//        cout << "\nНа жаль Ви починаєте першим((( " << endl;
//        for (int i = 1; i <= 5; i++)
//        {
//            do
//            {
//                cout << "Кидай! (жми *)" << endl;
//                cin >> brosok;
//            } while (brosok != '*');
//            total_chel += rez();
//
//            total_komp += rez();
//
//        }
//        cout << "Ваш загальний результат (сумма очкiв за 5 бросков): " << total_chel << endl;
//        cout << "\nМiй загальний результат (сумма очкiв за 5 бросков): " << total_komp << endl;
//    }
//    else
//    {
//        cout << "\nУра!!! Кидаю першим Я!!! " << endl;
//        for (int i = 1; i <= 5; i++)
//        {
//            total_komp += rez();
//
//            do
//            {
//                cout << "Кидай! (жми *)" << endl;
//                cin >> brosok;
//            } while (brosok != '*');
//            total_chel += rez();
//
//        }
//        cout << "Ваш загальний результат (сумма очкiв за 5 бросков): " << total_chel << endl;
//        cout << "Мiй загальний результат (сумма очкiв за 5 бросков): " << total_komp << endl;
//    }
//
//    if (total_chel == total_komp)
//    {
//        cout << "\n\nНИЧЬЯ!!!\n\n" << endl;
//    }
//    else
//    {
//        if (total_chel > total_komp)
//        {
//            cout << "\n\nВи виграли!!!Вітаю!!!\n\n" << endl;
//        }
//
//        if (total_chel < total_komp)
//        {
//           
//                cout << "\n\nЯ виграв!!! Дивно правда?Адже я ж генеруючи випадкові числа а не Ви))) (жарт))\n\n" << endl;
//        }
//    }
//
//    cout << "СТАТИСТИКА ГРИ\n\n";
//
//    cout << "Ваша середня сума по кидкам: " << total_chel / 5.0 << endl;
//    cout << "Моя середня сума по кидкам: " << total_komp / 5.0 << endl;
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
//    cout << "Результат: " << rezult << "\n\n";
//
//    return rezult;
//}
//Завдання 2
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
//    //system("cls"); // очистить окно, если вдруг кому нужно
//    Figura(N, K);
//    system("pause"); // для просмотра 
//    return 0;
//}
//Завдання 3
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
