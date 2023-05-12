#include<iostream>
#include<vector>

using namespace std;

class Patient
{
	string name;
	friend class Doctor;
	vector <class Doctor*> doctors;

public:
	Patient(const string& name)
		:name(name)
	{}
	void AddDoctor(class Doctor* const doctor)
	{
		doctors.push_back(doctor);
	}
	void MeetDoctor();
	~Patient();

private:

};
class Doctor
{
	string name;
	friend class Patient;
	vector <class Patient*> patients;

public:
	Doctor(const string& name)
		:name(name)
	{}
	void AddPatient(class Patient* const Patient)
	{
		patients.push_back(Patient);
	}
	void MeetPatient()
	{
		for (const auto& patient : patient)
			cout << "Meet patient" << patient->name << endl;
	}
	~Doctor();

private:

};

void Doctor::Doctor()
{
}

void Doctor::~Doctor()
{
}

void Patient::Patient()
{
}

void Patient::MeetDoctor()
{

}

void Patient::~Patient()
{
}

int main()
{
	Patient* p1 = new Patient("Kim");
	Patient* p2 = new Patient("Lee");
	Patient* p3 = new Patient("Park");

	Doctor* d1 = new Doctor("Doc. Lee");
	Doctor* d2 = new Doctor("Doc. Kim");

	p1->AddDoctor(d1);
	p1->AddPatient(d1);

	p2->AddDoctor(d2);
	p2->AddPatient(d2);

	p3->AddDoctor(d2);
	p2->AddPatient(d3);

	delete d2;
	delete d1;
	delete p3;
	delete p2;
	delete p1;

	return;
}