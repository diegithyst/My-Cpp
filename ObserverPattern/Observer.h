//
// Created by Mery on 04.03.2024.
//
#pragma once
#include <string>
#include <list>
#include <iostream>
using namespace std;


class Observer {
public:
    Observer();
    virtual void update(float temperature, float humidity, float pressure);
};


