#include <iostream>
using namespace std;

class LoyaltyCard {
private:
    string customerName;
    int stamps;

public:

    // Parameterized Constructor
    LoyaltyCard(string name) {
        if(name != "")
            customerName = name;

        stamps = 0;
    }

    // Getter
    int getStamps() {
        return stamps;
    }

    // Setter with validation
    void addStamp() {

        stamps++;

        if(stamps == 10) {
            cout << "Congratulations " << customerName 
                 << "! You earned a free coffee!" << endl;

            stamps = 0; // reset after reward
        }
    }
};

int main() {

    LoyaltyCard card("Sara");

    for(int i = 0; i < 10; i++) {
        card.addStamp();
    }

    cout << "Current Stamps: " << card.getStamps() << endl;

    return 0;
}