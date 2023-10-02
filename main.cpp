#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

class Build {
private:
	int year;
	string type;
	int people;
public:
	Build(int y, string t, int a) {
		set_data(y, t, a);
	}

	Build(int y, int a) {
		year = y;
		people = a;
		cout << "Данные установлены" << endl;
	}

	Build() {}

	void set_data(int year, string type, int people) {
		this->year = year;
		this->type = type;
		this->people = people;
	}

	void set_data(int y, int a) {
		year = y;
		people = a;
	}

	void get_info() {
		cout << "Type: " << type << ". Year: " << year << ". People: " << people << endl;
	}

	~Build() {
		cout << "Delete object" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	Build school(100, "School", 1000);
	school.get_info();

	Build house(200, 300);
	house.get_info();

	return 0;
}