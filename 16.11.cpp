//task 16.11

#include <iostream>
#include <string>
using namespace std;


class Car
{
public:
    float passed;
    float fuel;
    float FPK;
    virtual void fuelPerKm() {FPK = 1 ; }
    bool go(int distance)
        {
      		fuelPerKm();
      		cout << distance << " "<< FPK << " " << fuel << endl;
            if (distance * FPK < fuel){
                passed = passed + distance;
                return true;
            }
            else{
                return false;
            }
        }
    
};
 
class Truck: public Car
{
public:
    float weight;
    virtual void fuelPerKm() { 
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
    virtual void fuelPerKm()
        { 
            for(int j = 0; j < passengers ; j++)
                {
                    FPK += FPK*0.1;
                }
        }
};

int main(){
	Personal bmw;
	bmw.passed = 0;
	bmw.fuel = 5;
	bmw.FPK = 2;
	bmw.passengers = 2;
	if (bmw.go(1)) {
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	Truck volvo;
	volvo.passed = 0;
	volvo.fuel = 5;
	volvo.FPK = 5;
	
	if (volvo.go(5)) {
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
}
