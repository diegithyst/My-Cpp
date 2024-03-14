//
// Created by Mery on 04.03.2024.
//

#include "Observer.h"

Observer::Observer() {};

void Observer::update(float temperature, float humidity, float pressure) {
    cout<<"Temperature: "<<temperature<<" Celcius, Humidity: "<<humidity<<" ,Pressure: "<<pressure<<endl;
};
