#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0, n = 0;
    float **mat = NULL;
    float d = 0.0;
    
    cout << "      Matriz gauss Jordan \n";
    cout << "Ingrese el número de filas y columnas (Matriz cuadrada) ";
    cin >> n;
    cout << endl;
    
    // Asignación de memoria para matriz de matriz
    mat = new float*[2*n];
    for (i = 0; i < 2*n; ++i)
    {
        mat[i] = new float[2*n]();
    }
    
    cout << "ingrese los coeficientes:" << endl;
    //Introduce los coeficientes de la matriz.
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }
    
    cout << endl << "Matriz de entrada:" << endl;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    // Inicializando el lado derecho a la matriz de identidad.
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < 2*n; ++j)
        {
            if(j == (i+n))
            {
                mat[i][j] = 1;
            }
        }
    }
    
    // Pivote parcial
    for(i = n; i > 1; --i)
    {
        if(mat[i-1][1] < mat[i][1])
        {
            for(j = 0; j < 2*n; ++j)
            {
                d = mat[i][j];
                mat[i][j] = mat[i-1][j];
                mat[i-1][j] = d;
            }
        }
    }
    cout << endl;
    
    // Salida pivotada
    cout << "Salida pivotada: " << endl;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < 2*n; ++j)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    //Reducción a matriz diagonal
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < 2*n; ++j)
        {
            if(j != i)
            {
                d = mat[j][i] / mat[i][i];
                for(k = 0; k < n*2; ++k)
                {
                    mat[j][k] -= mat[i][k]*d;
                }
            }
        }
    }
    cout << endl;
    
    // Reducción a matriz de unidad
    for(i = 0; i < n; ++i)
    {
        d = mat[i][i];
        for(j = 0; j < 2*n; ++j)
        {
            mat[i][j] = mat[i][j]/d;
        }
    }
    
    // Impresión inversa de la matriz de entrada
    cout<<"Matriz inversa:" << endl;
    for(i=0; i < n; ++i)
    {
        for(j = n; j < 2*n; ++j)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    
    //Borrar la memoria asignada
    for (i = 0; i < n; ++i)
    {
        delete[] mat[i];
    }
    delete[] mat;
    
    return 0;
}
