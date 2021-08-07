///Ejercicio: N° 1
///Autor:LGR
///Fecha:07/08/2021
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

int N;

cout << "iIngrese un numero: "<<endl;
cin >>N;

if (N>0) {
    cout << "POSITIVO";
}
else if (N<0) {
    cout << "NEGATIVO";
}
else {
    cout<<"CERO";

}

cout <<endl;

system ("pause");
return 0;
}
