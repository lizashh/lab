#include <iostream>   //подключение библиотек
#include <math.h>
using namespace std;

int main()   //точка входа в программу

{ //task1
    setlocale(LC_ALL, "Russian");  //подключение русского €зыка дл€ вывода в консоль
    double a, b, S, P;            //объ€вление перемнных дл€ длины, ширины, площади и периметра
    cout << "ƒлина a =";
    cin >> a;                               //ввод данных
    cout << "Ўирина b =";
    cin >> b;
    S = a * b;          //нахождение площади
    cout << "ѕлощадь =" << S << endl;  //вывод результата на экран
    P = 2 * (a + b);    //нахождение периметра
    cout << "ѕериметр =" << P << endl; //вывод результата
    system("pause");
    return 0;

    //task2
       /*setlocale(LC_ALL, "Russian");  //подключение русского €зыка дл€ вывода в консоль
       double d, L, p = 3.14;    //объ€вление перемнных 
       cout << " ƒлина d ="; 
       cin >> d;               //ввод диаметра
       L = p * d;              //нахождение длины окружности  
       cout << L << endl;   //вывод результата
       system("pause");
       return 0;*/

       //task3
          /*double a, b, c;  //объ€вление переменных
          cout << "a =";
          cin >> a;                     //ввод данных
          cout << "b =";
          cin >> b;
          c = (a + b) / 2;    //нахождение ср.арф
          cout << "c = " << c <<endl;  //вывод результата
          system("pause");
          return 0; */

          //task4
            /*
            setlocale(LC_ALL, "Russian"); //подключение русского €зыка дл€ вывода в консоль
            double a, b, c, d, e, f;   //объ€вление переменных 
            cout << "a =";
            cin >> a;                //ввод данных
            cout << "b =";
            cin >> b;
            c = pow(a, 2) + pow(b, 2);  //нахождение суммы квадратов 
            d = pow(a, 2) - pow(b, 2);  //нахождение разности квадратов
            e = pow(a, 2) * pow(b, 2);  //нахождение произведени€ квадратов
            f = pow(a, 2) / pow(b, 2);  //нахождение частного квадратов
            cout << " —умма = " << c << endl;
            cout << " –азность = " << d << endl;
            cout << " ѕроизведение = " << e << endl;          //вывод результата
            cout << " „астное = " << f << endl;
            system("pause");
            return 0;*/

            //task5
              /*double a, b, c, d, e, f;
              cout << "a =";
              cin >> a;
              cout << "b =";
              cin >> b;
              c = abs(a) + abs(b);
              d = abs(a) - abs(b);
              e = abs(a) * abs(b);
              f = abs(a) / abs(b);
              cout << c << endl;
              cout << d << endl;
              cout << e << endl;
              cout << f << endl;
              system("pause");
              return 0;*/
}