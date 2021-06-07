#include <iostream>
#include <vector>


struct Dress {
    int dressNumber;
    std::vector<int> matchingJewelry; 

    int pushJewelry(int jewelryNumber) {
        matchingJewelry.push_back(jewelryNumber);
        return jewelryNumber;
    }

    int removeJewelry(int jewelryNumber) {
        for (int i=0; i < matchingJewelry.size(); i++) {
            if (matchingJewelry[i] == jewelryNumber) {
                matchingJewelry.erase(matchingJewelry.begin() + i);
                break;
            }
        }
        return jewelryNumber;
    }

    void print() {
        std::cout << "Dress Number: " << dressNumber << " matches: ";
        for (int i= 0; i < matchingJewelry.size(); i++) {
            std::cout << matchingJewelry[i] << " "; 
        }
        std::cout << std::endl;
    }

};

int main() {
    Dress d1;
    d1.dressNumber = 3;
    d1.matchingJewelry = {4, 6, 78, 9, 2};
    d1.print();
    d1.pushJewelry(420);
    d1.removeJewelry(78);
    d1.print();
    return 0;
}