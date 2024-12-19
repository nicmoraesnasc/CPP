#ifndef FISHING_CONTROL
#define FISHING_CONTROL

#define MAX_WEIGHT 50.0
#define FINE 4.0


class FishingControl
{
private:
    float _fishing_weight;
    float _excess_weight;

public:
    FishingControl(/* args */);
    ~FishingControl();

    void set_fishing_weight(float fishing_weight);
    float get_fine();
    float get_excess_weight();
};



#endif