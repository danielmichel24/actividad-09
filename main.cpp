#include <iostream>
#include "Computadora.h"
#include "Laboratorio.h"


using namespace std;

int main()
{
    Computadora c01 = Computadora("windows","vaio",8,500);
    Computadora c02;
    c02.setSo("MAC");
    c02.setMarca("apple2");
    c02.setRam(7);
    c02.setRom(1000);

    Laboratorio vj;

    //vj.agregarComputadora(c01);
    //vj.agregarComputadora(c02);
    vj << c01 << c02;

    Computadora c03;
    cin >> c03;
    vj.agregarComputadora(c03);

    Computadora c04;
    cin >> c04;
    vj << c04;    

    vj.mostrar();
    


    //cout << c02;



    return 0;
}
