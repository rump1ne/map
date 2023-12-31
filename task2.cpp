#include <iostream>
#include <map>
#include <string>

std::string intToRoman(int num) {
std::map<int, std::string> romanMap = {
        {1, "I"},
        {4, "IV"},
        {5, "V"},
        {9, "IX"},
        {10, "X"},
        {50, "L"},
        {100, "C"},
        {500, "D"},
        {1000, "M"}
    };

    std::string result = "";

for (auto it = romanMap.rbegin(); it != romanMap.rend(); ++it) {
    while (num >= it->first) {
     result += it->second;
    num -= it->first;
        }
    }

    return result;
}

int main() {
setlocale(LC_ALL, "Russian");
        
    int intValue;
    std::cout << "Введите целое число: ";
    std::cin >> intValue;
    std::string romanNumeral = intToRoman(intValue);
    std::cout << "Эквивалентом римской цифры " << intValue << " является: " << romanNumeral << std::endl;

    return 0;
}
