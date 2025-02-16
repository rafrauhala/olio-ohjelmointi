#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}

    string getName() const { return name; }
    int getAge() const { return age; }

    void printStudentInfo() const {
        cout << name << ": " << age << endl;
    }
};

int main()
{

        int selection =0;
        vector<Student>studentList;

        Student a("Keijo",30);
        Student b("Inka",26);
        Student c("Jasmin",28);
        Student d("Petri",27);


        studentList.push_back(a);
        studentList.push_back(b);
        studentList.push_back(c);
        studentList.push_back(d);

        do
        {
            cout<<endl;
            cout<<"Select"<<endl;
            cout<<"Add students = 0"<<endl;
            cout<<"Print all students = 1"<<endl;
            cout<<"Sort and print students according to Name = 2"<<endl;
            cout<<"Sort and print students according to Age = 3"<<endl;
            cout<<"Find and print student = 4"<<endl;
            cin>>selection;

            switch(selection)
            {
            case 0: {
                // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
                // Lisää uusi student StudentList vektoriin.
                cout << "Anna opiskelijan nimi: ";
                string nimi;
                cin >> nimi;
                cout << "Anna opiskelijan ikä: ";
                int ika;
                cin >> ika;
                studentList.push_back(Student(nimi, ika));
                cout << "Opiskelija lisätty." << endl;

                break;
            }
            case 1:
                // Tulosta StudentList vektorin kaikkien opiskelijoiden
                // nimet.
                cout << "Opiskelijoiden nimet: ";
                for (Student s: studentList) {
                    s.printStudentInfo();
                }
                cout << endl;

                break;

            case 2:
                // Järjestä StudentList vektorin Student oliot nimen mukaan
                // algoritmikirjaston sort funktion avulla
                // ja tulosta printStudentInfo() funktion avulla järjestetyt
                // opiskelijat
                sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                    return a.getName() < b.getName();
                }
                );
                cout << endl << "Lajiteltu nimen perusteella"  << endl;
                for (const Student& s : studentList) {
                     s.printStudentInfo();
                }
                break;

            case 3:
                // Järjestä StudentList vektorin Student oliot iän mukaan
                // algoritmikirjaston sort funktion avulla
                // ja tulosta printStudentInfo() funktion avulla järjestetyt
                // opiskelijat
                sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                    return a.getAge() < b.getAge();
                }
                );
                cout << endl << "Lajiteltu iän perusteella"  << endl;
                for (const Student& s: studentList) {
                    s.printStudentInfo();
                }
                break;

            case 4: {
                // Kysy käyttäjältä opiskelijan nimi
                // Etsi studentListan opiskelijoista algoritmikirjaston
                // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
                // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

                cout << "Anna etsittava nimi" << endl;
                string etsittavanimi;
                cin >> etsittavanimi;
                auto it = find_if(studentList.begin(), studentList.end(), [&etsittavanimi](const Student& s) {
                    return s.getName() == etsittavanimi;
                });

                if (it != studentList.end()) {
                    cout << "Opiskelija löytyi:" << endl;
                    it->printStudentInfo();
                } else {
                    cout << "Opiskelijaa ei löytynyt." << endl;
                }
                break;
            }

            default:
                cout<< "Wrong selection, stopping..."<<endl;
                break;
            }
        }while(selection < 5);

        return 0;
    }

