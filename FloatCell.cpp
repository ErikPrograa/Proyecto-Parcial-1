#include "FloatCell.h"
#include <iostream>

// Constructores
FloatCell::FloatCell(float newvalor) : valor(newvalor) {} // Constructor predeterminado explícito
FloatCell::FloatCell(const FloatCell &rhs) : valor(rhs.valor) { // Constructor de copia
    std::cout << "VALOR COPIADO XD" << std::endl; // Se imprime esto al ser utilizado este constructor
}
FloatCell::FloatCell(FloatCell &&rhs) noexcept : valor(std::move(rhs.valor)) { // Constructor de movimiento
    std::cout << "VALOR MOVIDO XD" << std::endl; // Se imprime esto al ser utilizado este constructor
}

// Operador de asignación por copia
FloatCell& FloatCell::operator=(const FloatCell &rhs) {
    if (this != &rhs) {
        valor = rhs.valor;
    }
    return *this;
}
// Sobrecarga de operadores
FloatCell& FloatCell::operator=(float newvalor) {
    valor = newvalor;
    return *this;
}
// Este le enseña al operador como sumar con los FloatCell
FloatCell FloatCell::operator+(const FloatCell& rhs) const {
    return FloatCell(valor + rhs.valor);
}
// Este le enseña al operador como multiplicar con los FloatCell
FloatCell FloatCell::operator*(const FloatCell& rhs) const {
    return FloatCell(valor * rhs.valor);
}

//Metodo de acceso
float FloatCell::getvalor() const { // Getter para el valor de la instancia actual
    return valor;
}


