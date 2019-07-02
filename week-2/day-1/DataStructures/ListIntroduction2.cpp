//Create a list ('List A') which contains the following values
//Apple, Avocado, Blueberries, Durian, Lychee
//Create a new list ('List B') with the values of List A
//Print out whether List A contains Durian or not
//Remove Durian from List B
//Add Kiwifruit to List A after the 4th element
//Compare the size of List A and List B
//Get the index of Avocado from List A
//Get the index of Durian from List B
//Add Passion Fruit and Pomelo to List B in a single statement
//Print out the 3rd element from List A
#include <iostream>
#include <vector>


int main()
{
    std::vector<std::string> A = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    std::vector<std::string> B = A;
    std::string Durian = "Durian";
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == Durian) {
            std::cout << "The list contains Durian." << std::endl;
        }
    }
    B.erase(B.begin()+3);
    auto it = A.begin()+3;
    it = A.insert(it, "Kiwifruit");
    if(A.size() > B.size()){
        std::cout << "List A is bigger than list B." << std::endl;
    }else{
        std::cout << "List B is bigger than list A." << std::endl;
    }
    for (int j = 0; j < A.size(); ++j) {
        if(A[j] == "Avocado"){
            std::cout << "Index number of Avocado: " << j << std::endl;
        }
    }
    for (int k = 0; k < B.size(); ++k) {
        if(B[k] == "Durian"){
            std::cout << "Index of Durian: " << k << std::endl;
        }

    }

    B.emplace_back("Passion Fruit\n" "Pomelo");
    std::cout << A[2] << std::endl;

    return 0;
}