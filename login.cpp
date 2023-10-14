//(C) CoreXenith
//A.GKTG
//2023
#include <iostream>
#include <string>

int main() {
    std::string username = "user";
    std::string password = "password";
    std::string inputUsername;
    std::string inputPassword;

    std::cout << "Username: ";
    std::cin >> inputUsername;
    std::cout << "Password: ";
    std::cin >> inputPassword;

    if (inputUsername == username && inputPassword == password) {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Login failed. Incorrect username or password." << std::endl;
    }

    return 0;
}
