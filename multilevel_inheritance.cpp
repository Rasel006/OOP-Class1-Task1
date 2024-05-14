#include<bits/stdc++.h>
using namespace std;

class Vehicle {
protected:
    string name;
    int price;

public:
    Vehicle(const string& name, int price) : name(name), price(price) {}

    virtual void move() {}

    virtual string toString() const {
        return name + " " + to_string(price);
    }
};

class Bus : public Vehicle {
protected:
    int seat;

public:
    Bus(const string& name, int price, int seat) : Vehicle(name, price), seat(seat) {}

    virtual string toString() const override {
        return Vehicle::toString();
    }
};

class Truck : public Vehicle {
protected:
    int weight;

public:
    Truck(const string& name, int price, int weight) : Vehicle(name, price), weight(weight) {}

    virtual string toString() const override {
        return Vehicle::toString();
    }
};

class PickupTruck : public Truck {
public:
    PickupTruck(const string& name, int price, int weight) : Truck(name, price, weight) {}
};

class ACBus : public Bus {
protected:
    int temperature;

public:
    ACBus(const string& name, int price, int seat, int temperature) : Bus(name, price, seat), temperature(temperature) {}

    virtual string toString() const override {
        return Bus::toString();
    }
};

int main() {
    ACBus green_line("green", 5000000, 22, 16);
    cout << green_line.toString() << endl;
    return 0;
}
