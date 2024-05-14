#include<bits/stdc++.h>
using namespace std;

class Person {
private:
    string name;
    int age;
    int height;
    int weight;

public:
    Person(const string& name, int age, int height, int weight) : name(name), age(age), height(height), weight(weight) {}

    void eat() {
        cout << "vat mangso polau kormaa" << endl;
    }

    virtual void exercise() {
        throw runtime_error("NotImplementedError");
    }
};

class Cricketer : public Person {
private:
    string team;

public:
    Cricketer(const string& name, int age, int height, int weight, const string& team) : Person(name, age, height, weight), team(team) {}

    void eat() override {
        cout << "Vegetables and fruits" << endl;
    }

    void exercise() override {
        cout << "Going to the gym and exercising" << endl;
    }
};

int main() {
    Cricketer sakib("Sakib", 30, 5, 60, "BD");

    sakib.eat();
    sakib.exercise();

    return 0;
}
