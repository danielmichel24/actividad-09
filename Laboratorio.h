#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Computadora.h"


class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarComputadora(const Computadora &c);
    void mostrar();

    friend Laboratorio& operator<<(Laboratorio &v, const Computadora &c)
    {
        v.agregarComputadora(c);
        
        return v;
    }
};

#endif // LABORATORIO_H
