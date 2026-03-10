#include <iostream>
using namespace std;

class ParkingMeter
{
private:
    int timeRemaining;
    const int maxTime;   // fixed maximum time

public:
    // Constructor
    ParkingMeter() : maxTime(120)
    {
        timeRemaining = 0;
    }

    // Getter
    int getTimeRemaining()
    {
        return timeRemaining;
    }

    // Setter / Updater
    void addTime(int minutes)
    {
        timeRemaining = timeRemaining + minutes;

        if (timeRemaining > maxTime)
        {
            timeRemaining = maxTime;
            cout << "Max time reached. Excess coins refunded." << endl;
        }
    }
};

int main()
{
    ParkingMeter meter;

    meter.addTime(60);
    meter.addTime(90);

    cout << "Time on meter: " << meter.getTimeRemaining() << " mins" << endl;

    return 0;
}