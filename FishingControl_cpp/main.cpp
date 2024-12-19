#include <iostream>
#include "FishingControl.h"


int main()
{
    FishingControl fishing_control = FishingControl();

    float fishing_weight = 0;
    std::cout << "Quantidade pescada em kg: ";
    std::cin >> fishing_weight;

    fishing_control.set_fishing_weight(fishing_weight);

    std::cout << "Peso excedido: " << fishing_control.get_excess_weight() << "Kg" << std::endl;
    std::cout << "Valor da multa: R$" << fishing_control.get_fine() << std::endl;
    return 0;
}
