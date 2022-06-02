//task 16.11

class Car
{
public:
    float passed;
    float fuel;
    float FPK;
    void go(distance)
    {
        fuelPerKm()
        if (distance * FPK < fuel){
            passed = passed + distance;
            return TRUE;
        }
        else{
            return FALSE;
        }
    }
    virtual void float* fuelPerKm() {FPK = 1 ; }
};

class Truck: public Car
{
public:
    float weight;
    virtual void float* fuelPerKm() {
        for(int j = 0; j < weight ; j++)
        {
            FPK += FPK*0.25;
        }
    }
};

class Personal: public Car
{
public:
    int passengers;
    virtual void float* fuelPerKm()
    {
        for(int j = 0; j < passengers ; j++)
        {
            FPK += FPK*0.1;
        }
    }
};

