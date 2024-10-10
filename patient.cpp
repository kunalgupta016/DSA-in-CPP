#include <iostream>
using namespace std;

class Patient {
    int id;
    string name;
    bool appointment_status;
    static int count;
    
public:

    Patient(int id_, string name_) {
        this->id = id_;
        this->name = name_;
        
        
        if (count < 3) {
            appointment_status = true;
        } else {
            appointment_status = false;
        }
        count++; 
    }
    

    void print() {
        cout << "Patient ID: " << id << endl;
        cout << "Patient Name: " << name << endl;
        cout << "Appointment Status: " << (appointment_status ? "True" : "False") << endl;
        cout << "----------------------------" << endl;
    }

    
};

int Patient::count = 0;

int main() {

    Patient P1(1001, "Kunal");
    P1.print();

    Patient P2(1002, "Shubham");
    P2.print();

    Patient P3(1003, "Tushar");
    P3.print();

    Patient P4(1004, "Charchit");
    P4.print();

    Patient P5(1005, "Emili");
    P5.print();

    Patient P6(1006, "Darwit");
    P6.print();

    Patient P7(1007, "Darwit");
    P7.print();

    Patient P8(1008, "Darwit");
    P8.print();

    Patient P9(1009, "Darwit");
    P9.print();

    Patient P10(10010, "Darwit");
    P10.print();

    

    return 0;
}
