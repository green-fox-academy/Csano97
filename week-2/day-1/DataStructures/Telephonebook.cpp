#include <iostream>
#include <map>
//We are going to represent our contacts in a map where the keys are going to be strings and the values are going to be strings as well.

//Create a map with the following key-value pairs.
//Name (key)	Phone number (value)
//William A. Lathan	405-709-1865
//John K. Miller	402-247-8568
//Hortensia E. Foster	606-481-6467
//Amanda D. Newland	319-243-5613
//Brooke P. Askew	307-687-2982
//Create an application which solves the following problems.

//What is John K. Miller's phone number?
//Whose phone number is 307-687-2982?
//Do we know Chris E. Myers' phone number?


int main()
{
    std::map<std::string, std::string> telephonebook = {
            {"William A. Lathan",   "405-709-1865"},
            {"John K. Miller",      "402-247-8568"},
            {"Hortensia E. Foster", "606-481-6467"},
            {"Amanda D. Newland",   "319-243-5613"},
            {"Brooke P. Askew",     "307-687-2982"}
    };
    std::cout << telephonebook["John K. Miller"] << std::endl;
    std::map<std::string, std::string>::iterator it;
    for (it = telephonebook.begin(); it != telephonebook.end(); ++it) {
        if ((it->second) == "307-687-2982") {
            std::cout << it->first << std::endl;
        }
    }
        if (telephonebook.find("Chris E. Myers") == telephonebook.end()) {
            std::cout << "Yes we do" << std::endl;
        } else {
            std::cout << "No we don't" << std::endl;
        }
}