#include <stdio.h>
#include "string.h"

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA, TRABANT};
const char* get_car_type(enum car_type car_type_name)
{
    switch (car_type_name)
    {
        case VOLVO: return "Volvo";
        case TOYOTA: return "Toyota";
        case LAND_ROVER: return "Land Rover";
        case TESLA: return "Tesla";
        default: return "no such car";
    }
}

struct car {
    enum car_type type;
    double km;
    double gas;
};
void description(struct car);

int main()
{
    struct car volvo;
    volvo.type = VOLVO;
    volvo.gas = 3.5;
    volvo.km = 1000.15;
    struct car toyota;
    toyota.type = TOYOTA;
    toyota.gas = 5.6;
    toyota.km = 1200;
    struct car land;
    land.type = LAND_ROVER;
    land.gas = 10.8;
    land.km = 1000.5;
    struct car tesla;
    tesla.type = TESLA;
    tesla.gas = 0;
    tesla.km = 2500;
    description(tesla);
    description(volvo);
    description(toyota);
    description(land);
    printf("%s", get_car_type(TRABANT));
    return 0;
}

void description(struct car car){
    char exclude[10] = "Tesla";
    if(strcmp(get_car_type(car.type), exclude) == 0){
        printf("Car type: %s, range: %.2lf km\n", get_car_type(car.type), car.km);
    }else{
        printf("Car type: %s, range: %.2lf km, consumption: %.2lf km/h\n", get_car_type(car.type), car.km, car.gas);
    }
}