#include <iostream>
#include <cstring>

using namespace std ;

class String {
private:
    char* data;

public:
    // Default constructor
    String() : data(nullptr) {}

    // Constructor that takes a C-style string
    String(const char* str) {
        if (str != nullptr) {
            data = new char[strlen(str) + 1];
            strcpy(data, str);
        } else {
            data = nullptr;
        }
    }

    // Copy constructor (deep copy)
    String(const String& other) {
        if (other.data != nullptr) {
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        } else {
            data = nullptr;
        }
    }

    // Destructor
    ~String() {
        delete[] data;
    }

    // Assignment operator (deep copy)
    String& operator=(const String& other) {
        if (this != &other)

            {

            // Release existing memory

            delete[] data;

            if (other.data != nullptr) {
                data = new char[strlen(other.data) + 1];
                strcpy(data, other.data);
            } else {
                data = nullptr;
            }
        }
        return *this;
    }

    // Overloaded equality operator (==)

    bool operator==(const String& other) const {
        return (data == nullptr && other.data == nullptr) || (data != nullptr && other.data != nullptr && strcmp(data, other.data) == 0);
    }

    // Overloaded inequality operator (!=)

    bool operator!=(const String& other) const {
        return !(*this == other);
    }

    // Overloaded less than operator (<)

    bool operator<(const String& other) const {
        return (data != nullptr && other.data != nullptr) && (strcmp(data, other.data) < 0);
    }

    // Overloaded less than or equal to operator (<=)

    bool operator<=(const String& other) const {
        return (*this < other) || (*this == other);
    }

    // Overloaded greater than operator (>)
    bool operator>(const String& other) const {
        return !(*this <= other);
    }

    // Overloaded greater than or equal to operator (>=)
    bool operator>=(const String& other) const {
        return !(*this < other);
    }

    // Member function to get the string
    const char* GetString() const {
        return data;
    }
};

int main() {
    String str1("jeevan");
    String str2("suraj");
    String str3("jeevan");

    // Copy constructor test
    String str4 = str1; // Deep copy using copy constructor

    cout << "str1: " << str1.GetString() <<endl;
    cout << "str2: " << str2.GetString() <<endl;
    cout << "str3: " << str3.GetString() <<endl;
    cout << "str4: " << str4.GetString() <<endl;

    // Assignment operator test

    str4 = str2; // Deep copy using assignment operator

    cout << "After assignment operator:\n";
    cout << "str4: " << str4.GetString() << std::endl;

    return 0;
}
