#include "GasStation.h"

GasStation::GasStation(/* args */)
{
}

GasStation::~GasStation()
{
}

void GasStation::set_liters(float liters) 
{
    this->_liters = liters;
}

float GasStation::get_alcohol_price()
{
    return this->_liters * ALCOHOL_PRICE_PER_LITER;
}

float GasStation::get_gas_price()
{
    return this->_liters * GAS_PRICE_PER_LITER; 
}

float GasStation::get_alcohol_descount()
{
    float raw_price = this->get_alcohol_price();

    if(this->_liters <= TWENTY_LITERS) 
    {
        return raw_price * ALCOHOL_DESCOUNT_BELLOW_20_LITERS;
    }
    else
    {
        return raw_price * DESCOUNT_ABOVE_20_LITERS;
    }
}

float GasStation::get_gas_descount()
{
    float raw_price = this->get_gas_price();

    if(this->_liters <= TWENTY_LITERS) 
    {
        return raw_price * GAS_DESCOUNT_BELLOW_20_LITERS;
    }
    else
    {
        return raw_price * DESCOUNT_ABOVE_20_LITERS;
    }
}