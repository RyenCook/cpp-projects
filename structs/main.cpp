#include <iostream>
#include <sstream>
#include <string>


// Basically a user-defined data structure
struct book_t {
    // A book_t can store the following, and can be called with member notation (aka dot notation)
    std::string title;
    std::string author;
    std::string subject;
    int id;
};

int main()
{
    book_t test;
    std::stringstream sin;

    // One deadass way to insert stuff into a struct
    sin.str("CS102 is BS102");
    sin >> test.title;
    sin.str("Ryan Cook");
    sin >> test.author;
    sin.str("Autobiography");
    sin >> test.subject;
    sin.str("6969");
    sin >> test.id;

    std::cout << test.title << "\t" << test.author << "\t" << test.subject << "\t" << test.id << "\n";
    return 0;
}
