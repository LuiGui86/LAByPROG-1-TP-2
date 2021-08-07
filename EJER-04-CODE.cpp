///Ejercicio:
///Autor:
///Fecha:
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

    int N1,N2,DA;

    cout<<"Ingrese un numero: "<<endl;
    cin>>N1;
    cout<<"Ingrese un numero: "<<endl;
    cin>>N2;

    DA= N1-N2;

    if (DA<0){
        DA=N2-N1;
        cout<<DA;
    }else {
        cout<<DA;
    }

    cout<<endl;



system ("pause");
return 0;
}
