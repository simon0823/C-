// csv 파일 parser

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // csv 파일을 절대경로로 지정해주어야함
    ifstream ip("data.csv");
    
    if(!ip.is_open()) {
        cout << "file open is error" << endl;
    }

    string firstname;
    string lastname;
    string age;
    string weight;

    while(ip.good()) {
        getline(ip, firstname, ',');
        getline(ip, lastname, ',');
        getline(ip, age, ',');
        getline(ip, weight, '\n');

        cout << "Name : " << firstname << " " << lastname << endl;
        cout << "Age : " << age << endl;
        cout << "weight : " << weight << endl;
        cout << "--------------------" << endl;
    }

    ip.close();
}
