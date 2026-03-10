#include <iostream>
using namespace std;

class UserProfile {
private:
    string username;
    string password;

public:
    // Parameterized Constructor
    UserProfile(string user, string pass) {
        if(user != "")
            username = user;

        if(pass.length() >= 6)
            password = pass;
    }

    // Getter
    string getUsername() {
        return username;
    }

    // Setter with validation
    void updatePassword(string oldPassword, string newPassword) {

        if(oldPassword != password){
            cout << "Access Denied: Incorrect current password." << endl;
            return;
        }

        if(newPassword.length() < 6){
            cout << "Password must be at least 6 characters." << endl;
            return;
        }

        password = newPassword;
        cout << "Password updated." << endl;
    }
};

int main() {

    UserProfile user("ali_dev", "qwerty123");

    user.updatePassword("wrongpass", "newsecurepass");
    user.updatePassword("qwerty123", "newsecurepass");

    return 0;
}