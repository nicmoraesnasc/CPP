#include "PaymentSheet.h"

PaymentSheet::PaymentSheet(/* args */)
{
}

PaymentSheet::~PaymentSheet()
{
}

void PaymentSheet::set_payment(float payment)
{
    this->_payment = payment;
}

float PaymentSheet::get_readjustment()
{
    if(this->_payment > 0)
    {
        if(this->_payment <= 280.0)
        {
            this->_readjusted_payment = this->_payment + (this->_payment * TWENTY_PER_CENT);
        }
        
        else if(this->_payment > 280.00 & this-> _payment <= 700.00)
        {
            this->_readjusted_payment = this->_payment + (this->_payment * FIFTEEN_PER_CENT);
        }
        else if(this->_payment > 700.00 & this->_payment <= 1500.00)
        {
            this->_readjusted_payment = this->_payment + (this->_payment * TEN_PER_CENT);
        }
        else
        {
            this->_readjusted_payment = this->_payment + (this->_payment * FIVE_PER_CENT);
        }
    }
    return this->_readjusted_payment;
}

float PaymentSheet::get_increase_value()
{
    return this->_readjusted_payment - this->_payment;
}

float PaymentSheet::get_percentage()
{
    if(this->_payment > 0)
    {
        if(this->_payment <= 280.0)
        {
            this->_percentage = 20.0;
        }
        
        else if(this->_payment > 280.00 & this-> _payment <= 700.00)
        {
            this->_percentage = 15.0;
        }
        else if(this->_payment > 700.00 & this->_payment <= 1500.00)
        {
            this->_percentage = 10.0;
        }
        else
        {
            this->_percentage = 5.0;
        }  
    }
    return this->_percentage;
}