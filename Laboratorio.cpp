#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    if (cont < 5){
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }

}
void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(10) << "S0";
    cout << setw(10) << "Marca";
    cout << setw(10) << "Ram";
    cout << setw(10) << "Rom";
    cout << endl;


    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout << c;
        
        //cout << "Sistema operativo: " << p.getSo() << endl;
        //cout << "Marca: " << p.getMarca() << endl;
        //cout << "Ram: " << p.getRam() << " gb" << endl;
        //cout << "Rom: " << p.getRom() << " gb" << endl;
        //cout << endl;
    }
}


