#include <iostream>
#include "mytemperature.h"

int main() {
    std::cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\t\tCelsius" << std::endl;
    for (double celsius = 40.0; celsius >= 31.0; celsius -= 1.0) {
        double fahrenheit = celsius_to_fah(celsius);
        double celsiusFromFahrenheit = fahrenheit_to_cels(fahrenheit);
        std::cout << celsius << "\t\t" << fahrenheit << "\t\t|\t" << fahrenheit << "\t\t" << celsiusFromFahrenheit << std::endl;
    }

    return 0;
}