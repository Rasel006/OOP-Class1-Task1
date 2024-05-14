#include<bits/stdc++.h>
using namespace std;

class Laptop {
private:
    int memory;
    int ssd;

public:
    Laptop(int memory, int ssd) : memory(memory), ssd(ssd) {}

    string coding() {
        return "Learning Python and practicing";
    }
};

class Phone {
private:
    string brand;
    int price;
    string color;
    string origin;
    bool dual_sim;

public:
    Phone(string brand, int price, string color, string origin, bool dual_sim) : 
        brand(brand), price(price), color(color), origin(origin), dual_sim(dual_sim) {}

    string phone_call(int number, string text) {
        return "Sending SMS to: " + to_string(number) + " with: " + text;
    }

    string toString() {
        return "phone: " + brand + " " + to_string(price) + " " + (dual_sim ? "true" : "false");
    }
};

int main() {
    Phone my_phone("iphone", 120000, "silver", "china", true);
    cout << my_phone.brand << endl;
    cout << my_phone.toString() << endl;
    return 0;
}
