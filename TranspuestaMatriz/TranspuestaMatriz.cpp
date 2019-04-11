#include<iostream>
using namespace std;
 
int main(){
    int fila,columna,i,j;
    int arr[20][20];
    
    cout<<"	          Matriz transpuesta\n";
    cout<<"ingrese el numero de filas de la Matriz:";
    cin>>fila;
    cout<<"ingrese el numero de columnas de la Matriz:";
    cin>>columna;
       for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            cout<<"ingrese el numero de la fila"<<fila-3<<" columna"<<columna-3<<": ";
            cin>>arr[i][j];
        }
       }
       cout<<endl;
       cout<<"matriz original"<<endl;
       for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            cout<<arr[i][j]<<" ";
        }
       }
       cout<<endl;
       cout<<"matriz Transpuesta"<<endl;
       for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
        	
        
       
            
            cout<< "Valor posicion "<<"("<<i<<")"<<"("<<j<<"): " << arr[j][i]<<" "<<endl;
        }
       }
}
 
 
 
