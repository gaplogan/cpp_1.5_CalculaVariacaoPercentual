#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double DifVal, ValIni, ValFin, Perc;

    system("cls");

    do
    {
        cout << "Digite o valor inicial: ";
        cin >> ValIni;
    } while (ValIni < 0);

    cout << endl;

    do
    {
        cout << "Digite o valor final: ";
        cin >> ValFin;
    } while (ValFin < 0);

    cout << endl;

    DifVal = ValFin - ValIni;
    Perc = (DifVal / ValIni) * 100;

    if (DifVal < 0)
    {
        cout << "A Variação percentual foi de " << Perc << "%";
    }
    else if (DifVal > 0)
    {
        cout << "A Variação percentual foi de +" << Perc << "%";
    }
    else
    {
        cout << "A Variação percentual foi de 0%";      
    }

    return 0;
}