#include <stdio.h>

struct weather_data
{
    int temperature;
    float rainfall;
    int wind_per_second;
};

int main(int argc, char const *argv[])
{
    struct weather_data trondheim;
    trondheim.temperature = 6;
    trondheim.rainfall = 7.4;
    trondheim.wind_per_second = 5;
    
    return 0;
}

