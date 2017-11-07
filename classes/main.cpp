#include <iostream>
using namespace std;

// Class definition of "Box", basically defines all the shit a "box" object can do.
class Box {
	// private infromation, cant be changed by anything but the box that contains it.
	// Cannot just type NameOfBox.length = 10;
	private:
		double length;
		double width;
		double height;
	// public information, can be changed by anything, the box or the rest of the code.
	// Can call NameOfBox.setDimensions(5,5,5) to set the values to 5, 5 and 5 respectively
	public:
		void setDimensions(double l, double w, double h);
		double getVolume();
};

int main() {
	Box b1;
	Box b2;

	// Calling the public functions to CHANGE the private data
	b1.setDimensions(5.0, 6.0, 7.0);
	b2.setDimensions(10.0,12.0,13.0);

	cout << "Volume of box1: " << b1.getVolume() << endl;
	cout << "Volume of box2: " << b2.getVolume() << endl;
	
	return 0;
}

void Box::setDimensions(double l, double w, double h)
                {
                        length = l;
                        width = w;
                        height = h;
                }
double Box::getVolume()
                {
                        return (length * width * height);
                }

