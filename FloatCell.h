#ifndef PROYECTO_PARCIAL_1_FLOATCELL_H
#define PROYECTO_PARCIAL_1_FLOATCELL_H

class FloatCell {
private:
    float valor;
public:
     //Constructores
    explicit FloatCell(float newvalor = 0.0f); // Constructor predeterminado explícito
    FloatCell(const FloatCell &rhs); // Constructor de copia
    FloatCell(FloatCell &&rhs) noexcept;  // Constructor de movimiento

    // Operador de asignación por copia
    FloatCell& operator=(const FloatCell &rhs);

    // Sobrecarga de operadores
    FloatCell& operator=(float newvalor);
    FloatCell operator+(const FloatCell &rhs) const; //Operador de suma
    FloatCell operator*(const FloatCell & rhs) const; // Operador de multiplicacion

    //Metodo de acceso
    float getvalor() const; // Getter para el valor
};

#endif // PROYECTO_PARCIAL_1_FLOATCELL_H