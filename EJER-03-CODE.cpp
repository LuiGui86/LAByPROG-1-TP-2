///Ejercicio:N°3
///Autor:LGR
///Fecha:07/08/2021
///Comentarios:No recordaba que para saber si un numero es PAR al numero tenemos que sacar el resto (N%2==0)

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

    int N;

    cout << "Ingrese un numero: "<<endl;
    cin >>N;

    if (N%2==0){
        cout<<"PAR";
    }else {
        cout<<"IMPAR";
    }
    cout<<endl;

system ("pause");
return 0;
}
