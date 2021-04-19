#include <iostream>

using namespace std;


class Employee {
	public:
		virtual void work() = 0;
};

class Programmer : public Employee {
	public:
		void work() {
			cout << "I'm a programmer." << endl;
		}
};

class DBAdmin : public Employee {
	public:
		void work() {
			cout << "I'm a DB Administrator." << endl;
		}
};

int main()
{
	
	Employee *emp;
	
	emp = new Programmer;
	emp->work();
	
	emp = new DBAdmin;
	emp->work();
	
	return 0;
}
