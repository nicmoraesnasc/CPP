#ifndef PAYMENTSHEET
#define PAYMENTSHEET
#define TWENTY_PER_CENT 0.20
#define FIFTEEN_PER_CENT 0.15
#define TEN_PER_CENT 0.10
#define FIVE_PER_CENT 0.05

class PaymentSheet
{
private:
    float _payment;
    float _readjusted_payment;
    float _percentage = 0.0;

public:
    PaymentSheet(/* args */);
    ~PaymentSheet();

    void set_payment(float payment);
    float get_readjustment();
    float get_increase_value();
    float get_percentage();

};

#endif