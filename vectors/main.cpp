#include <iostream>
#include <string>
#include <vector>

/* Vectors are basically the ArrayLists of C++. They are declared as:
 *
 * vector<type> vector_name(number_of_elements); - The number_of_elements is optional
 * vector<type> vector_name;
 *
 */
int main()
{
	int resize_values, erase_pos, add_back;

	std::vector<int> values (5); // Declares a vector of 5 integers
	std::vector<double> decimals(7); // Declares a vector of 7 doubles
	std::vector<std::string> names; // Declares an empty vector of strings

	std::cout << "Enter in the number of values you'd like to enter: " << std::flush;
	std::cin >> resize_values;

	values.resize(resize_values);

	for(std::vector<int>::size_type i=0; i < values.size(); i++)
	{
		std::cout << "Enter in a value: " << std::flush;
		std::cin >> values[i];
	}

    for(std::vector<int>::size_type i=0; i < values.size(); i++)
    {
        std::cout << "The value in values[" << i << "] is: " << values[i] << std::endl;
    }
	
	std::cout << "Enter in which position you'd like to remove: " << std::flush;
	std::cin >> erase_pos;

	values.erase(values.begin() + erase_pos);

	for(std::vector<int>::size_type i=0; i < values.size(); i++)
    {
        std::cout << "The value in values[" << i << "] is: " << values[i] << std::endl;
    }

	std::cout << "Enter in a value to add: " << std:: flush;
	std::cin >> add_back;

	values.push_back(add_back);

	for(std::vector<int>::size_type i=0; i < values.size(); i++)
    {
        std::cout << "The value in values[" << i << "] is: " << values[i] << std::endl;
    }

	values.push_back(add_back);

	return 0;
}
