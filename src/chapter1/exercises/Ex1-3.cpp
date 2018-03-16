#include <iostream>;
using namespace std;

int main() {
	cout << "Hello World!" << endl;
	char input {' '};
	cout << "To exit, press 'm' and then 'Enter' key." << endl;
	cin >> input;
	while (input != 'm') {
		cout << "You just entered '" << input << "'. "
		     << "You need to enter 'm' to exit" << endl;
		cin >> input;
	}
	cout << "Thank you. Exiting." << endl;
	return 0;
}
