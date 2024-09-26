#include <cmath>
#include <iostream>
#include <math.h>

#define PHI 3.14

float HitungVolume(float r) {
    float sum = ((4.0/3.0) * PHI) * pow(r, 3);
    return sum;
}

float HitungLuas(float r) {
    float sum = 4 * PHI * pow(r,2);
    return sum;
}



int main() {
    float input;
    std::cout << "Masukkan jari-jari : "; 
    std::cin >> input;
    std::cout << HitungLuas(input) << std::endl;
    std::cout << HitungVolume(input) << std::endl;
    return 0;
}
