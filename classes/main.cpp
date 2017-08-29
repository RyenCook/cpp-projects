#include <iostream>
using namespace std;

// Class definition of "Box"
class Box {
	private:
		double length;
		double width;
		double height;
	public:
		void setDimensions(double l, double w, double h)
		{
			length = l;
			width = w;
			height = h;
		}
		double getVolume() 
		{
			return (length * width * height);
		}
};

int main() {
	Box b1;
	Box b2;

	b1.setDimensions(5.0, 6.0, 7.0);
	b2.setDimensions(10.0,12.0,13.0);

	cout << "Volume of box1: " << b1.getVolume() << endl;
	cout << "Volume of box2: " << b2.getVolume() << endl;
	
	return 0;
}
