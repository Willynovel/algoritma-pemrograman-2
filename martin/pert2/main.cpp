#include <iostream>
#include <unordered_map>



std::string GetDayString(int day) {
    static const std::unordered_map<int, std::string> dayMap = {
        {1, "Senin"},
        {2, "Selasa"},
        {3, "Rabu"},
        {4, "Kamis"},
        {5, "Jumat"},
        {6, "Sabtu"},
        {7, "Minggu"}
    };

    auto it = dayMap.find(day);
    return it != dayMap.end() ? it->second : "Error code, check your input";
}




int main() {
    int input;
    std::cin >> input;
    std::cout << GetDayString(input) << std::endl;
    return 0;
}
