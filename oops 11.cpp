// Use of multiple inheritance

#include<iostream>
using namespace std;

class Vehicle {
    public:
     Vehicle()
     {
     cout<< " This is my new vehicle"<<endl;
     }
};

class Twowheeler {
    public:
    Twowheeler()
    {
        cout<< " This is my herohonda bike"<<endl;
    }
};

class car : public Vehicle , public Twowheeler {

};

int main() {
    car obj;
    return 0;
}