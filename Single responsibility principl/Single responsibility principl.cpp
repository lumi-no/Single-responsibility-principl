#include <iostream>
#include <string>
#include <fstream>

// Клас для зберігання даних 
class User {
private:
    std::string name;
    int age;

public:
    User(const std::string& name, int age) : name(name), age(age) {}

    std::string getName() const { return name; }
    int getAge() const { return age; }
};

// Клас для обробки даних
class UserManager {
public:
    void saveUser(const User& user) {
        std::cout << "Saving user: " << user.getName() << ", Age: " << user.getAge() << std::endl;
        
    }
};


class Logger {
public:
    void log(const std::string& message) {
        std::ofstream logfile("log.txt", std::ios::app);
        if (logfile.is_open()) {
            logfile << message << std::endl;
            logfile.close();
        }
    }
};

int main() {
   
    User user("Alice", 30);

  
    UserManager userManager;
    userManager.saveUser(user);

    
    Logger logger;
    logger.log("User Alice saved successfully.");

    return 0;
}
