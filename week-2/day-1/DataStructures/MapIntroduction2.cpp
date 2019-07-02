#include <iostream>
#include <map>


int main()
{
    std::map<std::string, std::string> books;
    books.insert(std::pair<std::string, std::string>("978-1-60309-452-8", "A Letter to Jo"));
    books.insert(std::pair<std::string, std::string>("978-1-60309-459-7", "Lupus"));
    books.insert(std::pair<std::string, std::string>("978-1-60309-444-3", "Red Panda and Moon Bear"));
    books.insert(std::pair<std::string, std::string>("978-1-60309-461-0", "The Lab"));
    std::map<std::string, std::string>::iterator it;
    for (it = books.begin(); it != books.end(); it++) {
        std::cout << it->second << "(ISBN: " << it->first << ")" << std::endl;
    }
    books.erase("978-1-60309-444-3");
    for (it = books.begin(); it != books.end(); it++) {
        if ((it->second) == "The Lab") {
            books.erase(it);
        }
    }
    std::cout << "" << std::endl;
    for (it = books.begin(); it != books.end(); it++) {
        std::cout << it->second << "(ISBN: " << it->first << ")" << std::endl;
    }
    books.insert(std::pair<std::string, std::string>("978-1-60309-450-4", "They Called Us Enemy"));
    books.insert(std::pair<std::string, std::string>("978-1-60309-453-5", "Why Did We Trust Him?"));

    for (it = books.begin(); it != books.end(); it++){
        if((it->first) == "478-0-61159-424-8"){
            std::cout << it->second << std::endl;
        }
    }
    std::cout << books["978-1-60309-453-5"] << std::endl;
    return 0;
}