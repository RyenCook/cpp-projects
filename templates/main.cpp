#include <iostream>
using namespace std; // BAD PRACTICE

template <class T> // A template, a placeholder for any valid type
// Function template -Basically allows this function to use multiple valid parameters
T getMax(T a, T b) {
	return (a>b?a:b);
}

template <class T>
class mypair { // Class template - Allows a class to have members of a template
        T a, b;
        public:
                mypair(T t_a,T t_b) {
                        a = t_a;
                        b= t_b;
                }
        T getMin() {
                return (b>a?a:b);
        }
};


int main() {
	int a, b;
	double  c, d;

	cout << "Input two integers:" << endl;
	cin >> a;
	cin >> b;
	cout << "The higher number is " << getMax <int> (a,b) << endl; // We can specify what type the parameter will be (int)
	
	cout << "Input two decimals:" << endl;
        cin >> c;
        cin >> d;
        cout << "The higher number is " << getMax(c,d) << endl; // Or let he compilier figure it out automatically (double)

	cout << "Input two more decimals:" << endl;
        cin >> c;
        cin >> d;
	mypair<double> pair(c,d); // Need to have a template argument when declairng classes
        cout << "The lower number is " << pair.getMin() << endl; // Or just let the compilier figure it out automatically (params must be of the same type)


}
