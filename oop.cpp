#include <iostream>
#include <fstream>
using namespace std;

class vehicle {
        public:
                string brand = "ford";
                void honk() {
                        cout << "Tuut, Tuut!\n";
                }
};

class car : public vehicle {
        public:
                string model = "Mustang\n";
};

class employee {
        protected:
                int salary;
};

class programmer : public employee {
        public:
                int bonus;
                void setsalary(int s) {
                        salary = s;
                }
                int getsalary() {
                        return salary;
                }
};

int main(void)
{
        car mycar;
        mycar.honk();
        cout << mycar.brand + " " + mycar.model;

        programmer myobj;
        myobj.setsalary(50000);
        myobj.bonus = 15000;
        cout << "salary: " << myobj.getsalary() << endl;
        cout << "bonus: " << myobj.bonus << endl;

        ofstream myfile("filename.txt");
        myfile << "files can be stricky, but it is fun enough!!!";
        myfile.close();
        string mytext;
        ifstream myrfile("filename.txt");
        getline(myrfile, mytext);
        cout << mytext << endl;
        myfile.close();
        return 0;
}