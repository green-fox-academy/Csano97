#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indentation
    std::string todo("My todo:\n");
    std::string game(" - Download games\n");
    std::string diabl("     - Diablo\n");
    todoText.insert(todoText.find(""), todo);
    todoText.append(game);
    todoText.append(diabl);

    // Expected output:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    std::cout << todoText << std::endl;

    return 0;
}
