#include "Laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("Computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(10) << "S0";
        archivo << setw(10) << "Marca";
        archivo << setw(10) << "Ram";
        archivo << setw(10) << "Rom";
        archivo << endl;
        for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("Computadoras.txt");
    if (archivo.is_open()){
        for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        archivo << c.getSo() << endl;
        archivo << c.getMarca() << endl;
        archivo << c.getRam() << endl;
        archivo << c.getRom() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int ram;
        int rom;
        Computadora c;

        while (true)
        {
            getline(archivo, temp); //So
            if (archivo.eof()) {
            break;
            }
            c.setSo(temp);

            getline(archivo, temp); //Marca
            c.setMarca(temp);

            getline(archivo, temp); //Ram
            ram = stoi(temp); // stof=string to float
            c.setRam(ram);

            getline(archivo, temp);
            rom = stoi(temp); //string to int
            c.setRom(rom);

            agregarComputadora(c);
        }

    }
    archivo.close();
}