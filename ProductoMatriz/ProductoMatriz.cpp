#include <iostream>

using namespace std;

int row,fil,i,j; 

int main()
{   
     cout <<"             Producto de dos matriz     "<<endl;
    cout <<"Ingrese el numero de filas de la Matriz "<<endl;
    cin >>fil;
    cout <<"Ingrese el numero de columnas de la Matriz"<<endl;
    cin >>row;
    int matriz1[fil][row];
    for  (i=0;i<=fil-1;i++)
    {
        for  (j=0;j<=row-1;j++)
        {
            cout <<"Ingrese la posicion "<<"("<<i<<")"<<"("<<j<<")"<<" de la matriz 1"<<endl;
            cin >>matriz1[i][j];
        }
    }
    system("pause");
    int matriz2[fil][row];
    for  (i=0;i<=fil-1;i++)
    {
        for  (j=0;j<=row-1;j++)
        {
            cout <<"Ingrese la posicion "<<"("<<i<<")"<<"("<<j<<")"<<" de la matriz 2"<<endl;
            cin >>matriz2[i][j];
        }
    }
//    system("pause");
    cout << "A continuacion se sumaran las matrices ingresadas "<<endl;
    system("pause");
    int matriz3[fil][row];
    for  (i=0;i<=fil-1;i++)
    {
        for  (j=0;j<=row-1;j++)
        {
            matriz3[i][j]= matriz1[i][j]*matriz2[i][j];
            cout << "Valor posicion "<<"("<<i<<")"<<"("<<j<<"): "<<matriz3[i][j]<<endl;
        }
    }
    cout << "Algebra lineal"<<endl;
    system("pause");
    return  0;
}
