#include <iostream>

using namespace std;

int main() {
    float p1,pic,m;
    /*p1 - nota de prova peso 2;
      pic nota de trabalho at� 10*/
    cin >> p1 >> pic;

    m = (p1 * 2 + pic) / 3;

    if(m < 5) {
        cout << "Ficou de recupera��o \n";
        cout << m;
    }
    else {
        cout << "Passou direto \n";
        cout << m;
    }

}
