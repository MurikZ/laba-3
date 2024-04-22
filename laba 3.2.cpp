#include <iostream>
#include <cmath>
using namespace std;
class Komplex {
    double i;
    double r;

public:
    Komplex()//конструктор по умолчанию
    {
        i = 0;
        r = 0;
    }
    Komplex(double mn, double real)//конструктор с параметрами
    {
        i = mn;
        r = real;
    }

    ~Komplex()//деструктор
    {
        cout << "удаляется память" << endl;
    }
    double otvet;
    double otvet1;
    double real(double a)
    {
        otvet = a * r;
        return  otvet;
    }
    double imag(double a)
    {
        otvet1 = a * i;
        return otvet1;
    }
    double pi = 3.1415926535;
    double argumInDegree() {
        return atan2(otvet1, otvet) * 180 / pi;
    }



};
int main()
{
    setlocale(0, "ru");
    int b;
    Komplex kom(2, 23);
    cout << "введите число ";
    cin >> b;
    double realA = kom.real(b);
    double imagA = kom.imag(b);
    cout << "действительная часть " << realA << " \nмнимая часть " << imagA << "\n";
    double c = kom.argumInDegree();
    cout << "в градусах " << c << endl;
    return 0;
}
