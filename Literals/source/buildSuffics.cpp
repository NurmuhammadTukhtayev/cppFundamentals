#include<iostream>
#include<chrono>

using namespace std::literals::chrono_literals;

int main(){

    typedef std::chrono::duration<long long, std::ratio<2700>> hour;
    auto schoolHour = hour(1);

    auto shortBreak = 300s;
    auto longBreak = 0.25h;

    auto schoolWay = 15min;
    auto homework = 2h;

    auto schoolDaysInSeconds = 2 * schoolWay + 6 * schoolHour + 4 * shortBreak + longBreak + homework;

    std::cout << "Schoolday in seconds: " << schoolDaysInSeconds.count() << std::endl;

    std::chrono::duration<double, std::ratio<3600>> schoolDayInHour = schoolDaysInSeconds;
    std::chrono::duration<double, std::ratio<60>> schoolDayInMinutes = schoolDaysInSeconds;
    std::chrono::duration<double, std::ratio<1, 1000>> schoolDayInMilliseconds = schoolDaysInSeconds;

    std::cout << "School day in hours: " << schoolDayInHour.count() << std::endl;
    std::cout << "School day in minutes: " << schoolDayInMinutes.count() << std::endl;
    std::cout << "School day in milliseconds: " << schoolDayInMilliseconds.count() << std::endl;

    std::cout << std::endl;

}