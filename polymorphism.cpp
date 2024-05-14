#include<bits/stdc++.h>
using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(const string& name) : name(name) {}
    virtual void make_sound() {
        cout << "Animal making some sound" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& name) : Animal(name) {}
    void make_sound() override {
        cout << "Meow meow" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}
    void make_sound() override {
        cout << "Gheu gheu" << endl;
    }
};

class Goat : public Animal {
public:
    Goat(const string& name) : Animal(name) {}
    void make_sound() override {
        cout << "Beh beh beh" << endl;
    }
};

int main() {
    unique_ptr<Animal> don = make_unique<Cat>("Real Don");
    don->make_sound();

    unique_ptr<Animal> shepard = make_unique<Dog>("Local Shephard");
    shepard->make_sound();

    unique_ptr<Animal> mess = make_unique<Goat>("L M");
    mess->make_sound();

    unique_ptr<Animal> less = make_unique<Goat>("Gora Gori");
    less->make_sound();

    vector<unique_ptr<Animal>> animals;
    animals.push_back(move(don));
    animals.push_back(move(shepard));
    animals.push_back(move(mess));
    animals.push_back(move(less));

    for (const auto& animal : animals) {
        animal->make_sound();
    }

    return 0;
}
