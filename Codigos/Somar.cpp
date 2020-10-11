/**
 * Somar números em c++
 * @author Lucas Santiago
 */

#include <iostream>
#include <string>

// Somar dois valores numéricos inteiros
float somar(float a, float b) {
    return a + b;
}

int main(int argc, char** argv) {

    if (argc > 1) {
        float a = std::stof(argv[1]);
        float b = std::stof(argv[2]);

        std::cout << "Resultado: " << somar(a, b) << std::endl;

    }

    else
        std::cout << "Para usar meu programa escreva ./(nome do programa compilado) <Primeiro número> <Segundo número>. :P" << std::endl; 
    
}