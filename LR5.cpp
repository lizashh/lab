#include <iostream> //����������� ���������
#include <math.h>
using namespace std;

int main() //����� ����� � ���������

{
    //task1
    int x1, y1, x2, y2;    //���������� ���������� (����� � ������������ (�1,�1) � (�2,�2)
    cout << "x1=";
    cin >> x1;
    cout << "y1=";
    cin >> y1;                      //���� ������
    cout << "x2=";
    cin >> x2;
    cout << "y2=";
    cin >> y2;

    double x;        //���������� ���������� ��� �������� ����������

    x = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); //���������� ���������� ����� a � b
    cout << x << endl;   //����� ����������

    system("pause");
    return 0;

    //task2
    /*setlocale(LC_ALL, "Russian"); //����������� �������� ����� ��� ������ � �������
    double A, B, C, AC, BC, sum; //���������� ��������� ��� �����, �������� � �����

    cout << "A =";
    cin >> A;       //���� � � ����������
    cout << "B =";
    cin >> B;      //���� B � ����������
    cout << "C =";
    cin >> C;      //���� � � ����������

    AC = max(A, C) - min(A, C);  //���������� ������� ��
    BC = max(B, C) - min(B, C);  //���������� ������� ��
    sum = AC + BC;               //���������� ����� ��������

    cout << "����� AC =" << AC << endl;
    cout << "����� �� =" << BC << endl;                 //����� ����������
    cout << "����� ���� �������� =" << sum << endl;
    system("pause");
    return 0;*/

    //task3
    /*setlocale(LC_ALL, "Russian");        //����������� �������� ����� ��� ������ � �������
    double A, B, C, AC, BC, p, mx, mn;     //���������� ����������
    cout << "C ������������� ����� � � �" << endl;

    cout << "A =";
    cin >> A;
    cout << "B =";          //���� ������
    cin >> B;
    cout << "C =";
    cin >> C;

    mx = max(A, B);    //����������� ������������� � ������������ �������� ����� ������� � � �
    mn = min(A, B);

    while (C >= mx || C <= mn)
    {
        cout << "C ������������� ����� � � �!" << endl;        //�������������� ����� ������������� �
        cout << "C = ";
        cin >> C;
    }

    AC = max(A, C) - min(A, C);     //���������� ���� ��������
    BC = max(B, C) - min(B, C);
    p = AC * BC;                    //���������� ������������ ��������
    cout << "����� AC =" << AC << endl;
    cout << "����� �� =" << BC << endl;              //����� ���������� �����������
    cout << "������������ �������� =" << p << endl;
    system("pause");
    return 0; */

    //task4
    /*setlocale(LC_ALL, "Russian");     //����������� �������� ����� ��� ������ � �������
    double x1, x2, y1, y2, h, w, P, S;     //���������� ���������� ��� ���������, ������, �����, ������� � ���������

    cout << "�������� ���������� ������� 1:" << endl;
    cout << " x1 = ";
    cin >> x1;
    cout << " y1 = ";
    cin >> y1;                                             //���� ������
    cout << "�������� ���������� ������� 2:" << endl;
    cout << " x2 = ";
    cin >> x2;
    cout << " y2 = ";
    cin >> y2;

    h = max(y1, y2) - min(y1, y2); // ���������� ������
    w = max(x1, x2) - min(x1, x2); // ���������� �����
    S = h * w;                     //���������� �������
    P = 2 * (h + w);               //���������� ���������
    cout << "������� =" << S << endl;     //����� ���������� �����������
    cout << "�������� =" << P << endl;
    system("pause");
    return 0;*/

    //task5
    /*setlocale(LC_ALL, "Russian"); //����������� �������� ����� ��� ������ � �������
    double x1, x2, x3, y1, y2, y3, AB, BC, AC, P, PP, S; //���������� ����������

    cout << "���� ��������� ������� �" << endl;
    cout << "x1 =";
    cin >> x1;
    cout << "y1 =";
    cin >> y1;
    cout << "���� ��������� ������� B" << endl;              //���� ������
    cout << "x2 =";
    cin >> x2;
    cout << "y2 =";
    cin >> y2;
    cout << "���� ��������� ������� C" << endl;
    cout << "x3 =";
    cin >> x3;
    cout << "y3 =";
    cin >> y3;

    AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));    //���������� ������ ������������
    AC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

    P = AB + BC + AC; //���������� ���������
    PP = P / 2;       //���������� �������������

    S = sqrt(PP * (PP - AB) * (PP - BC) * (PP - AC)); //���������� �������� �� ������� ������

    cout << "�������� =" << P << endl; //����� ����������
    cout << "������� = " << S << endl;
    system("pause");
    return 0;*/

}
