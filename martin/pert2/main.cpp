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

// std::string GetDayString(int day) {
//     std::string dayStr;
//     switch (day) {
//         case 1 :
//             dayStr = "Senin";
//             break;
//         case 2 :
//             dayStr = "Selasa";
//             break;
//         case 3 :
//             dayStr = "Rabu";
//             break;
//         case 4 :
//             dayStr = "Kamis";
//             break;
//         case 5 :
//             dayStr = "Jumat";
//             break;
//         case 6 :
//             dayStr = "Sabtu";
//             break;
//         case 7 :
//             dayStr = "Minggu";
//             break;
//         default:
//             dayStr = "Error code, check your input";
//     }
//     return dayStr;
// }



int main() {
    int input;
    std::cin >> input;
    std::cout << GetDayString(input) << std::endl;
    return 0;
}
