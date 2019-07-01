#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    std::string expand("always takes longer than ");
    std::string saving = quote.substr(quote.find("you"));
    quote.replace(quote.find("you"), quote.size(), expand);





    // When saving this quote a disk error has occurred. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    std::cout << quote << saving << std::endl;
    return 0;
}
