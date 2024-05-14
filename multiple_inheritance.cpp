#include<bits/stdc++.h>
using namespace std;

class Family {
private:
    string address;

public:
    Family(const string& address) : address(address) {}

    const string& getAddress() const {
        return address;
    }
};

class School {
private:
    int id;
    string level;

public:
    School(int id, const string& level) : id(id), level(level) {}

    int getId() const {
        return id;
    }

    const string& getLevel() const {
        return level;
    }
};

class Sports {
private:
    string game;

public:
    Sports(const string& game) : game(game) {}

    const string& getGame() const {
        return game;
    }
};

class Student {
private:
    Family family;
    School school;
    Sports sports;

public:
    Student(const Family& family, const School& school, const Sports& sports) 
        : family(family), school(school), sports(sports) {}

    const Family& getFamily() const {
        return family;
    }

    const School& getSchool() const {
        return school;
    }

    const Sports& getSports() const {
        return sports;
    }
};

int main() {
    Family family("123 Main St");
    School school(1, "High School");
    Sports sports("Football");

    Student student(family, school, sports);

    cout << "Address: " << student.getFamily().getAddress() << endl;
    cout << "School ID: " << student.getSchool().getId() << endl;
    cout << "School Level: " << student.getSchool().getLevel() << endl;
    cout << "Favorite Sport: " << student.getSports().getGame() << endl;

    return 0;
}
