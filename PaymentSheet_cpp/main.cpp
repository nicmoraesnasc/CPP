#include <iostream>
#include "PaymentSheet.h"

int main() 
{
    PaymentSheet payment_sheet = PaymentSheet();

    float payment = 0;
    
    std::cout << "Digite o salario: ";
    std::cin >> payment;

    std::cout << "Salario antes do reajuste: R$" << payment << std::endl;
    
    payment_sheet.set_payment(payment);
    
    std::cout << "Percentual do reajuste: " << payment_sheet.get_percentage() << "%" << std::endl;
    std::cout << "Valor reajustado: R$" << payment_sheet.get_readjustment() << std::endl;
    std::cout << "Valor do aumento: R$" << payment_sheet.get_increase_value() << std::endl;
    
    return 0;
}