#include <iostream>
#include <vector> 
using namespace std;

class Patient {
    int id;
    string name;
    bool appointment_status;


    static int count;

public:
s
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


    int getId() {
        return id;
    }
};


int Patient::count = 0;


void searchPatientById(const vector<Patient>& patients, int searchId) {
    bool found = false;
    for (const Patient& patient : patients) {
        if (patient.getId() == searchId) {
            patient.print();
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Patient with ID " << searchId << " not found!" << endl;
    }
}

int main() {

    vector<Patient> patients;
    

    patients.push_back(Patient(1001, "Kunal"));
    patients.push_back(Patient(1002, "Shubham"));
    patients.push_back(Patient(1003, "Tushar"));
    patients.push_back(Patient(1004, "Charchit"));
    patients.push_back(Patient(1005, "Emili"));
    patients.push_back(Patient(1006, "Darwit"));
    patients.push_back(Patient(1007, "Darwit"));
    patients.push_back(Patient(1008, "Darwit"));
    patients.push_back(Patient(1009, "Darwit"));
    patients.push_back(Patient(10010, "Darwit"));


    int searchId;
    cout << "Enter patient ID to search: ";
    cin >> searchId;
    searchPatientById(patients, searchId);

    return 0;
}
