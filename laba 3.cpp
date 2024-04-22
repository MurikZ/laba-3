#include <iostream>
using namespace std;
class Pifagor {
    double cat1;
    double cat2;
public:
    Pifagor(double kat1, double kat2)
    {
        cat1 = kat1;
        cat2 = kat2;
    }

    double tgal;

    double tg()
    {
        tgal = cat2 / cat1;
        return tgal;
    }
    void form() {
        cout << "тангенс угла противолежащего второму катету прямоугольного треугольника " << tgal;
    }

};

int main()
{
    setlocale(0, "ru");
    Pifagor pf(4, 3);
    double pr = pf.tg();
    pf.form();
}
