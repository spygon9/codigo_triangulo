#include <iostream>
#include <stdlib.h>

int mian(){

    int L1, L2, L3;
    int p, a, ang;
    int b, h;
    std:: cout << "Escriba el valor de L1";
    std:: cin >> L1;
    std:: cout << "Escriba el valor de L2";
    std:: cin >> L2;
    std:: cout << "Escriba el valor de L3";
    std:: cin >> L3;
    std:: cout << "Escriba el valor de la base";
    std:: cin >> b;
    std:: cout << "Escriba el valor de la altura";
    std:: cin >> h;

    if(L1 == L2 && L1 == L3 && L2 == L3){

        std:: cout << "El triangulo es quilatero\n";

    }

    if(L1 =! L2){

        if (L2 =! L3){

            std::cout << "El triangulo es escaleno\n";

        }


    }

    p = L1 + L2 + L3; 
    std::cout << "El perimetro del triangulo es de " << p << "\n";

    a = (b*h)/2;
    std::cout << "El area del triangulo es de " << a << "\n";

}