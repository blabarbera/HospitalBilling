#include <iostream>
#include "billType.h"
#include "patientType.h"
#include "doctorType.h"
#include <string>

using namespace std;

int main()
{

	int month, day, year, ID, age;
	string fname, lname, spec;
	float hcost, pcost, dcost, rcost;

	//Create object of doctorType
	cout << "Enter Doctor's first and last name: ";
	cin >> fname >> lname;
	cout << "Enter Doctor's specialty: ";
	cin >> spec;
	cout << endl;

	doctorType PhysName(fname, lname, spec);

	//Print doctor's information
	cout << "-------Doctor's Information-------" << endl;
	cout << "Doctor Name: ";
	cout << PhysName.getFirstName().append(" " + PhysName.getLastName()) << endl;
	cout << "Doctor Specialty: ";
	cout << PhysName.getSpec() << endl;

	//Create object of patientType
	cout << "\nEnter patient's ID Number: ";
	cin >> ID;
	cout << "Enter patient " << ID << "'s first name and last name: ";
	cin >> fname >> lname;
	cout << "Enter patient's DOB as M D YYYY: ";
	cin >> month >> day >> year;
	cout << "Enter patient's age: ";
	cin >> age;

	//Create dateType object for DOB
	dateType DOB(month, day, year);

	cout << "Enter patient Admission Date as M D YYYY: ";
	cin >> month >> day >> year;

	//Create dateType Object for Admission Date
	dateType AdmitDate(month, day, year);

	cout << "Enter patient Discharge Date as M D YYYY: ";
	cin >> month >> day >> year;

	//Create dateType object for Discharge Date
	dateType DischDate(month, day, year);

	patientType patient(fname, lname, ID, age, DOB, AdmitDate, DischDate, PhysName);

	cout << "Enter cost of patient's medication: ";
	cin >> pcost;
	cout << "Enter patient's hospital charges: ";
	cin >> hcost;
	cout << "Enter patient's doctor's fee: ";
	cin >> dcost;
	cout << "Enter patient's room cost: ";
	cin >> rcost;

	billType patcosts(ID, hcost, pcost, dcost, rcost);

	cout << "\n-------Patient Information-------" << endl;
	cout << "Patient ID: " << patient.getPatID() << endl;
	cout << "Patient Name: " << patient.getFirstName().append(" " + patient.getLastName()) << endl;
	cout << "Patient Age: " << patient.getAge() << endl;
	cout << "DOB: ";
	patient.getDOB().printDate();
	cout << endl;
	cout << "Patient Admission Date: ";
	patient.getAdmitDate().printDate();
	cout << endl;
	cout << "Patient Discharge Date: ";
	patient.getDischDate().printDate();
	cout << endl;
	cout << "Physician's Name: " << patient.getPhysName() << endl;
	cout << "Hospital Charges: " << patcosts.getHospChrg() << endl;
	cout << "Medicine Charges: " << patcosts.getPharmChrg() << endl;
	cout << "Doctor's Charges: " << patcosts.getDocChrg() << endl;

}