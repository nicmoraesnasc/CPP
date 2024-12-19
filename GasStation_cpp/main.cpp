#include <iostream>
#include "GasStation.h"

int main()
{
    GasStation gas_station = GasStation();

    std::string alcohol_or_gas;

    std::cout << "Digite A para alcool e G para gasolina: " ;
    std::cin >> alcohol_or_gas;

    if(alcohol_or_gas == "A" || alcohol_or_gas == "a")
        {
        float liters = 0; 

        std::cout << "Quantidade de alcool desejado (em litros): ";
        std::cin >> liters;
        
        gas_station.set_liters(liters); 

        std::cout << "Valor: R$" << gas_station.get_alcohol_price() << std::endl;
        std::cout << "Valor com descontos: R$"<< gas_station.get_alcohol_descount() << std::endl;
        return 0;
        }

    else if(alcohol_or_gas == "G" || alcohol_or_gas == "g")
        {
        float liters = 0; 
        std::cout << "Quantidade de gasolina desejada (em litros): ";
        std::cin >> liters;
        
        gas_station.set_liters(liters); 

        std::cout << "Valor: R$" << gas_station.get_gas_price() << std::endl;
        std::cout << "Valor com descontos: R$"<< gas_station.get_gas_descount() << std::endl;
        return 0;
        }
}
