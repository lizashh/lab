#include <iostream>   //����������� ���������
#include <math.h>
using namespace std;

int main()   //����� ����� � ���������

{ //task1
    setlocale(LC_ALL, "Russian");  //����������� �������� ����� ��� ������ � �������
    double a, b, S, P;            //���������� ��������� ��� �����, ������, ������� � ���������
    cout << "����� a =";
    cin >> a;                               //���� ������
    cout << "������ b =";
    cin >> b;
    S = a * b;          //���������� �������
    cout << "������� =" << S << endl;  //����� ���������� �� �����
    P = 2 * (a + b);    //���������� ���������
    cout << "�������� =" << P << endl; //����� ����������
    system("pause");
    return 0;

    //task2
       /*setlocale(LC_ALL, "Russian");  //����������� �������� ����� ��� ������ � �������
       double d, L, p = 3.14;    //���������� ��������� 
       cout << " ����� d ="; 
       cin >> d;               //���� ��������
       L = p * d;              //���������� ����� ����������  
       cout << L << endl;   //����� ����������
       system("pause");
       return 0;*/

       //task3
          /*double a, b, c;  //���������� ����������
          cout << "a =";
          cin >> a;                     //���� ������
          cout << "b =";
          cin >> b;
          c = (a + b) / 2;    //���������� ��.���
          cout << "c = " << c <<endl;  //����� ����������
          system("pause");
          return 0; */

          //task4
            /*
            setlocale(LC_ALL, "Russian"); //����������� �������� ����� ��� ������ � �������
            double a, b, c, d, e, f;   //���������� ���������� 
            cout << "a =";
            cin >> a;                //���� ������
            cout << "b =";
            cin >> b;
            c = pow(a, 2) + pow(b, 2);  //���������� ����� ��������� 
            d = pow(a, 2) - pow(b, 2);  //���������� �������� ���������
            e = pow(a, 2) * pow(b, 2);  //���������� ������������ ���������
            f = pow(a, 2) / pow(b, 2);  //���������� �������� ���������
            cout << " ����� = " << c << endl;
            cout << " �������� = " << d << endl;
            cout << " ������������ = " << e << endl;          //����� ����������
            cout << " ������� = " << f << endl;
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