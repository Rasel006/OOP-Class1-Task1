#include<bits/stdc++.h>
using namespace std;
string call() {
    cout << "calling someone I don't know" << endl;
    return "calling done";
}

class Phone {
public:
    static int price;
    static string color;
    static string brand;
    static vector<string> features;

    void call() {
        cout << "calling one person" << endl;
    }

    string send_sms(int phone, string sms) {
        string text = "sending SMS to: " + to_string(phone) + " and message: " + sms;
        return text;
    }
};

int Phone::price = 12000;
string Phone::color = "blue";
string Phone::brand = "samsung";
vector<string> Phone::features = {"camera", "speaker", "hammer"};

int main() {
    Phone my_phone;


    cout << "Features: ";
    for (string feature : Phone::features) {
        cout << feature << " ";
    }
    cout << endl;

    my_phone.call();

    string result = my_phone.send_sms(43545, "I miss you");
    cout << result << endl;

    return 0;
}
