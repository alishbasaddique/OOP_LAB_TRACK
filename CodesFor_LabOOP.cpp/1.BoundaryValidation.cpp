#include <iostream>
using namespace std;

class Thermostat
{
private:
    string roomName;
    double temperature;

public:
    //  using Parameterized Constructor
    Thermostat(string rName, double temp)
    {
        roomName = rName;
        temperature = temp;
    }

    // Getter function
    double getTemperature()
    {
        return temperature;
    }

    // Setter function with validation
    void setTemperature(double temp)
    {
        if (temp < 16.0 || temp > 30.0)
        {
            cout << "Error: " << temp 
                 << "C is outside the hardware limits (16.0C - 30.0C)." 
                 << endl;
        }
        else
        {
            temperature = temp;
        }
    }
};

int main()
{
    // Creating object
    Thermostat t("Living Room", 22.5);

    // Changing temperature
    t.setTemperature(35.0);
    t.setTemperature(18.0);

    // Display current temperature
    cout << "Current Temp: " << t.getTemperature() << "C" << endl;

    return 0;
}