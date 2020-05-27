#include "TypeAviation.h"
#include <fstream>
#include <iostream>
#include <fstream>
#include "Director.h"

using namespace std;
//////////////////////////////
///////Passenger Plane////////
//////////////////////////////

void PassPlane::output()
{
    cout << "Passenger plane" << endl;
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Type of engine: " << type_of_engine << endl;
    cout << "Number of engines: " << num_of_engine << endl;
    cout << "Number of wings: " << num_of_wing << endl;
    cout << "Type of wing: " << type_of_wing << endl;
    cout << "Type of chassis: " << type_of_chassis << endl;
    cout << "Speed of flight: " << speed_of_flight << endl;
    cout << "Type of takeoff: " << type_of_takeoff << endl;
    cout << "Type of control method: " << type_of_control_method << endl;
    cout << "Number of people in the crew: " << crew << endl;
    cout << "Year of production: " << year_of_prod << endl;
    cout << "Type of weapon: " << type_of_weapon << endl << endl;
}

void PassPlane::output(string path)
{
    path += "Passenger_Plane.txt";
    ofstream out(path, ios::app);
    out << "Name: " << name << endl;
    out << "Weight: " << weight << endl;
    out << "Type of engine: " << type_of_engine << endl;
    out << "Number of engines: " << num_of_engine << endl;
    out << "Number of wings: " << num_of_wing << endl;
    out << "Type of wing: " << type_of_wing << endl;
    out << "Type of chassis: " << type_of_chassis << endl;
    out << "Speed of flight: " << speed_of_flight << endl;
    out << "Type of takeoff: " << type_of_takeoff << endl;
    out << "Type of control method: " << type_of_control_method << endl;
    out << "Number of people in the crew: " << crew << endl;
    out << "Year of production: " << year_of_prod << endl;
    out << "Type of weapon: " << type_of_weapon << endl;
}

//////////////////////////////
////////Battle Plane//////////
//////////////////////////////

void BattlePlane::output()
{
    cout << "Battle plane" << endl;
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Type of engine: " << type_of_engine << endl;
    cout << "Number of engines: " << num_of_engine << endl;
    cout << "Number of wings: " << num_of_wing << endl;
    cout << "Type of wing: " << type_of_wing << endl;
    cout << "Type of chassis: " << type_of_chassis << endl;
    cout << "Speed of flight: " << speed_of_flight << endl;
    cout << "Type of takeoff: " << type_of_takeoff << endl;
    cout << "Type of control method: " << type_of_control_method << endl;
    cout << "Number of people in the crew: " << crew << endl;
    cout << "Year of production: " << year_of_prod << endl;
    cout << "Type of weapon: " << type_of_weapon << endl << endl;
}

void BattlePlane::output(string path)
{
    path += "Battle_Plane.txt";
    ofstream out(path, ios::app);
    out << "Name: " << name << endl;
    out << "Weight: " << weight << endl;
    out << "Type of engine: " << type_of_engine << endl;
    out << "Number of engines: " << num_of_engine << endl;
    out << "Number of wings: " << num_of_wing << endl;
    out << "Type of wing: " << type_of_wing << endl;
    out << "Type of chassis: " << type_of_chassis << endl;
    out << "Speed of flight: " << speed_of_flight << endl;
    out << "Type of takeoff: " << type_of_takeoff << endl;
    out << "Type of control method: " << type_of_control_method << endl;
    out << "Number of people in the crew: " << crew << endl;
    out << "Year of production: " << year_of_prod << endl;
    out << "Type of weapon: " << type_of_weapon << endl;
}

//////////////////////////////
/////////Helicopter///////////
//////////////////////////////

void Helicopter::output()
{
    cout << "Helicopter" << endl;
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Type of engine: " << type_of_engine << endl;
    cout << "Number of engines: " << num_of_engine << endl;
    cout << "Number of wings: " << num_of_wing << endl;
    cout << "Type of wing: " << type_of_wing << endl;
    cout << "Type of chassis: " << type_of_chassis << endl;
    cout << "Speed of flight: " << speed_of_flight << endl;
    cout << "Type of takeoff: " << type_of_takeoff << endl;
    cout << "Type of control method: " << type_of_control_method << endl;
    //cout << "Number of people in the crew: " << crew << endl;
    cout << "Year of production: " << year_of_prod << endl;
    cout << "Type of weapon: " << type_of_weapon << endl << endl;
}

void Helicopter::output(string path)
{
    path += "Helicopter.txt";
    ofstream out(path, ios::app);
    out << "Name: " << name << endl;
    out << "Weight: " << weight << endl;
    out << "Type of engine: " << type_of_engine << endl;
    out << "Number of engines: " << num_of_engine << endl;
    out << "Number of wings: " << num_of_wing << endl;
    out << "Type of wing: " << type_of_wing << endl;
    out << "Type of chassis: " << type_of_chassis << endl;
    out << "Speed of flight: " << speed_of_flight << endl;
    out << "Type of takeoff: " << type_of_takeoff << endl;
    out << "Type of control method: " << type_of_control_method << endl;
    //out << "Number of people in the crew: " << crew << endl;
    out << "Year of production: " << year_of_prod << endl;
    out << "Type of weapon: " << type_of_weapon << endl;
}

//////////////////////////////
////////Quadrocopter//////////
//////////////////////////////

void Quadrocopter::output()
{
    cout << "Quadrocopter" << endl;
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Type of engine: " << type_of_engine << endl;
    cout << "Number of engines: " << num_of_engine << endl;
    cout << "Number of wings: " << num_of_wing << endl;
    cout << "Type of wing: " << type_of_wing << endl;
    cout << "Type of chassis: " << type_of_chassis << endl;
    cout << "Speed of flight: " << speed_of_flight << endl;
    cout << "Type of takeoff: " << type_of_takeoff << endl;
    cout << "Type of control method: " << type_of_control_method << endl;
    cout << "Year of production: " << year_of_prod << endl;
    cout << "Type of weapon: " << type_of_weapon << endl << endl;
}

void Quadrocopter::output(string path)
{
    path += "Quadrocopter.txt";
    ofstream out(path, ios::app);
    out << "Name: " << name << endl;
    out << "Weight: " << weight << endl;
    out << "Type of engine: " << type_of_engine << endl;
    out << "Number of engines: " << num_of_engine << endl;
    out << "Number of wings: " << num_of_wing << endl;
    out << "Type of wing: " << type_of_wing << endl;
    out << "Type of chassis: " << type_of_chassis << endl;
    out << "Speed of flight: " << speed_of_flight << endl;
    out << "Type of takeoff: " << type_of_takeoff << endl;
    out << "Type of control method: " << type_of_control_method << endl;
    out << "Year of production: " << year_of_prod << endl;
    out << "Type of weapon: " << type_of_weapon << endl;
}
