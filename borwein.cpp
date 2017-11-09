//
//  borwein.cpp
//  Programa que implementa el algoritmo para el cálculo de los dos primeros valores de la serie de Borwein que estima el valor de la constante PI.
//
//  Created by Jaime Matas Bustos on 25/10/17.
//
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi0 = 0.0, pi1 = 0.0, pi2 = 0.0;
    double x0 = 0.0, x1 = 0.0, x2 = 0.0;
    double y1 = 0.0, y2 = 0.0;
    
    //Bienvenida al programa
    cout << "Bienvenid@s al software inteligente para estimar el valor de Pi empleando la serie matemática de Borwein." << endl;
    
    //Cálculo de pi0
    pi0 = 2 + sqrt(2);
    cout << "El valor de PI cuando n = 0 es: " << pi0 << endl;
    
    //Cálculo de pi1
    //pi0 lo tengo calculado de la iteración anterior
    //x1 que tendré que calcularlo en función x0 que sabemos su valor inicial
    //y1 que sabemos su valor inicial
    x0 = sqrt(2);
    y1 = pow(2,(1.0/4.0));
    x1 = (1.0/2.0)*(sqrt(x0) + (1.0/sqrt(x0)));
    pi1 = pi0 * ((x1 + 1)/(y1 + 1));
    cout << "El valor de PI cuando n = 1 es: " << pi1 << endl;
    
    //Cálculo de pi2
    //pi1 lo tengo calculado de la iteración anterior
    //x2 que tendré que calcularlo en función x1 que sabemos su valor de la iteración anterior
    //y2 que debemos calcularlo en función del valor y1 y x1
    x2 = (1.0/2.0)*(sqrt(x1) + (1.0/sqrt(x1)));
    y2 = (y1*sqrt(x1)+(1.0/sqrt(x1)))/(y1+1);
    pi2 = pi1 * ((x2 + 1)/(y2 + 1));
    cout << "El valor de PI cuando n = 2 es: " << pi2 << endl;
    
    //Nos despedimos educadamente del usuario
    cout << "Hasta luego amiguito... Sé feliz!" << endl;
    cout << "By neozizou, copyright 1DAM 2017-2018" << endl;

}
