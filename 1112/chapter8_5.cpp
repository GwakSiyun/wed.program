#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int NUMBER_OF_DAYS = 2; 
    const int NUMBER_OF_HOURS = 24; 
    double data[NUMBER_OF_DAYS][NUMBER_OF_HOURS][2];


    ifstream inputFile("weather.txt");
    if (!inputFile) {
        cout << "파일을 열 수 없습니다!" << endl;
        return 1;
    }

    int day, hour;
    double temperature, humidity;


    for (int k = 0; k < NUMBER_OF_DAYS * NUMBER_OF_HOURS; k++) {
        inputFile >> day >> hour >> temperature >> humidity;
        data[day - 1][hour][0] = temperature; 
        data[day - 1][hour][1] = humidity;   
    }

    inputFile.close();

    for (int i = 0; i < NUMBER_OF_DAYS; i++) {
        double dailyTemperatureTotal = 0, dailyHumidityTotal = 0;

        for (int j = 0; j < NUMBER_OF_HOURS; j++) {
            dailyTemperatureTotal += data[i][j][0];  
            dailyHumidityTotal += data[i][j][1];     
        }

        
        cout << "Day " << i + 1 << "'s average temperature is "
            << dailyTemperatureTotal / NUMBER_OF_HOURS << endl;
        cout << "Day " << i + 1 << "'s average humidity is "
            << dailyHumidityTotal / NUMBER_OF_HOURS << endl;
    }

    return 0;
}