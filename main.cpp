#include <iostream>
#include "FloatCell.h"


int main() {
    // Crea un Floatcell llamado celda1 y otro llamado celda2
    FloatCell celda1 (2.5);
    FloatCell celda2 (0);

    celda2=1.5;  //Utiliza la sobrecarga de operador para asignar directamente el valor 2 a celda2

    FloatCell suma = celda1 + celda2; //Indica que es lo que se va a sumar
    FloatCell multiplicacion = celda1 * celda2; //Indica que es lo que se va amultiplicar

    //Impresion del valor de amas celdas
    std::cout << "Valor de Celda 1: " << celda1.getvalor() << std::endl;
    std::cout << "Valor de Celda 2: " << celda2.getvalor() << std::endl;

    //Impresion del resultado de ambas operaciones
    std::cout << "Celda 1 + Celda 2 = " << suma.getvalor() << std::endl;
    std::cout << "Celda 1 * Celda 2 = " << multiplicacion.getvalor() << std::endl;

    // Crea un Floatcell llamado celdaoriginal1
    FloatCell celdaoriginal1(8.1);

    // Crea un Floatcell llamado celdamovida1 al que se le movera el valor de celdaoriginal1
    FloatCell celdamovida1(std::move(celdaoriginal1));

    // Imprime los valores de ambos FloatCell
    std::cout << "Valor de Celda Original 1: " << celdaoriginal1.getvalor() << std::endl;
    std::cout << "Valor de Celda Movida 1: " << celdamovida1.getvalor() << std::endl;

    // Crea un Floatcell llamado celdaoriginal2
    FloatCell celdaoriginal2(7.6);

    // Crea un Floatcell llamado celdacopiada1 al que se le copiara el valor de celdaoriginal2
    FloatCell celdacopiada1(celdaoriginal2);

    // Imprime los valores de ambos FloatCell
    std::cout << "Valor de Celda Original 2: " << celdaoriginal2.getvalor() << std::endl;
    std::cout << "Valor de Celda Copiada 1: " << celdacopiada1.getvalor() << std::endl;


    return 0;
}
