//cpp program to find if two strinsgs are anagram or not

#include <iostream>
#include <algorithm>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    // Check if the lengths of the strings are equal
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort the characters in both strings
    std::string sortedStr1 = str1;
    std::string sortedStr2 = str2;
    std::sort(sortedStr1.begin(), sortedStr1.end());
    std::sort(sortedStr2.begin(), sortedStr2.end());

    // Compare the sorted strings
    return sortedStr1 == sortedStr2;
}

int main() {
    std::string input1, input2;

    // Get input from the user
    std::cout << "Enter the first string: ";
    std::cin >> input1;
    std::cout << "Enter the second string: ";
    std::cin >> input2;

    // Check if the strings are anagrams
    if (areAnagrams(input1, input2)) {
        std::cout << "The strings are anagrams.\n";
    } else {
        std::cout << "The strings are not anagrams.\n";
    }

    return 0;
}
