#include <iostream>
using namespace std;

class SnackSlot {
private:
    string snackName;
    double price;
    int stockQuantity;

public:
    // Parameterized Constructor
    SnackSlot(string name, double p, int stock) {
        if(name != "")
            snackName = name;

        if(p > 0)
            price = p;

        if(stock >= 0)
            stockQuantity = stock;
    }

    // Getters
    string getSnackName() {
        return snackName;
    }

    double getPrice() {
        return price;
    }

    int getStockQuantity() {
        return stockQuantity;
    }

    // Setter with validation
    void buySnack(int quantity) {
        if(quantity <= 0){
            cout << "Invalid quantity!" << endl;
            return;
        }

        if(stockQuantity >= quantity){
            stockQuantity = stockQuantity - quantity;
            cout << "Dispensing..." << endl;
        }
        else{
            cout << "Transaction failed: Insufficient stock!" << endl;
        }
    }
};

int main() {

    SnackSlot slot("Chips", 1.50, 5);

    slot.buySnack(3);
    slot.buySnack(4);

    cout << "Remaining Stock: " << slot.getStockQuantity() << endl;

    return 0;
}