#include <iostream>
using namespace std;
#include <cstdint> // for uint8_t, uint16_t, uint32_t, uint64_t, int8_t, int16_t, int32_t, int64_t

int main()
{
    // Assign
    //  1st
    // datatype variableName;
    int speed; // variable declaration
    // variableName = value;
    speed = 200; // variable initialization( add value to variable)
    string car;
    car = "Toyota";
    bool isFast; // True or False
    isFast = false;

    // 2nd
    // datatype variableName = value;
    int distance = 300;     // variable declaration and initialization
    string car2 = "Toyota"; // variable declaration and initialization
    bool isFast2 = true;    // variable declaration and initialization
    float price = 100.50;

    // for EE
    uint8_t age = 10;  // 8-bit unsigned integer (0-255)
    int8_t age2 = -10; // 8-bit signed integer (-128 to 127)

    uint16_t age3 = 1000; // 16-bit unsigned integer (0-65535)
    int16_t age4 = -1000; // 16-bit signed integer (-32768 to 32767)

    uint32_t age5 = 100000; // 32-bit unsigned integer (0-4294967295)
    int32_t age6 = -100000; // 32-bit signed integer (-2147483648 to 2147483647)

    uint64_t age7 = 10000000000; // 64-bit unsigned integer (0-18446744073709551615)
    int64_t age8 = -10000000000; // 64-bit signed integer (-9223372036854775808 to 9223372036854775807)

    return 0;
}