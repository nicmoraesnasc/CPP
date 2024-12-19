#include "FishingControl.h"

FishingControl::FishingControl(/* args */)
{
}

FishingControl::~FishingControl()
{
}

void FishingControl::set_fishing_weight(float fishing_weight) 
{
    this->_fishing_weight = fishing_weight;
}

float FishingControl::get_excess_weight()
{
    if(this->_fishing_weight > MAX_WEIGHT)
    {
        return this->_excess_weight = _fishing_weight - MAX_WEIGHT;
    }
    else
    {
        return 0.0;
    }
    
}

float FishingControl::get_fine()
{
    return this->get_excess_weight() * FINE;
}

