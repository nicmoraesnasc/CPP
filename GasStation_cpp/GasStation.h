#ifndef GAS_STATION
#define GAS_STATION

#define GAS_PRICE_PER_LITER 2.50
#define ALCOHOL_PRICE_PER_LITER 1.90
#define GAS_DESCOUNT_BELLOW_20_LITERS 0.97
#define ALCOHOL_DESCOUNT_BELLOW_20_LITERS 0.96
#define DESCOUNT_ABOVE_20_LITERS 0.94
#define TWENTY_LITERS 20.0

class GasStation
{
private:
    float _liters = 0;

public:
    GasStation(/* args */);
    ~GasStation();

    void set_liters(float liters);
    float get_alcohol_price();
    float get_gas_price();
    float get_gas_descount();
    float get_alcohol_descount();
};
#endif



