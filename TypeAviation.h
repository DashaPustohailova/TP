#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class PassPlane
{
public:
    string name;
    int weight;
    string type_of_engine;
    int num_of_engine;
    int num_of_wing;
    string type_of_wing;
    string type_of_chassis;
    int speed_of_flight;
    string type_of_takeoff;
    string type_of_control_method;
    int crew;
    string year_of_prod;
    string type_of_weapon;
public:
    void output();
    void output(string path);
};

class BattlePlane
{
public:
    string name;
    int weight;
    string type_of_engine;
    int num_of_engine;
    int num_of_wing;
    string type_of_wing;
    string type_of_chassis;
    int speed_of_flight;
    string type_of_takeoff;
    string type_of_control_method;
    int crew;
    string year_of_prod;
    string type_of_weapon;
public:
    void output();
    void output(string path);
};

class Helicopter
{
public:
    string name;
    int weight;
    string type_of_engine;
    int num_of_engine;
    int num_of_wing;
    string type_of_wing;
    string type_of_chassis;
    int speed_of_flight;
    string type_of_takeoff;
    string type_of_control_method;
    int crew;
    string year_of_prod;
    string type_of_weapon;
public:
    void output();
    void output(string path);
};

class Quadrocopter
{
public:
    string name;
    int weight;
    string type_of_engine;
    int num_of_engine;
    int num_of_wing;
    string type_of_wing;
    string type_of_chassis;
    int speed_of_flight;
    string type_of_takeoff;
    string type_of_control_method;
    int crew;
    string year_of_prod;
    string type_of_weapon;
public:
    void output();
    void output(string path);
};

