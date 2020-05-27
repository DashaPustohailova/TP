#include <fstream>
#include "Aviation.h"
#include <iostream>


using namespace std;

//////////Aviation////////////

void Aviation::print()
{
    for (int i = 0; i < vp.size(); i++)
    {
        vp[i].output();
    }
    for (int i = 0; i < vb.size(); i++)
    {
        vb[i].output();
    }
    for (int i = 0; i < vh.size(); i++)
    {
        vh[i].output();
    }
    for (int i = 0; i < vq.size(); i++)
    {
        vq[i].output();
    }
}

void Aviation::print(string& path)
{
    for (int i = 0; i < vp.size(); i++)
    {
        vp[i].output(path);
    }
    for (int i = 0; i < vb.size(); i++)
    {
        vb[i].output(path);
    }
    for (int i = 0; i < vh.size(); i++)
    {
        vh[i].output(path);
    }
    for (int i = 0; i < vq.size(); i++)
    {
        vq[i].output(path);
    }
}

bool Aviation::search_name(string& name)
{
    for (int i = 0; i < vp.size(); i++)
    {
        if (vp[i].name == name)
        {
            return true;
        }
    }
    for (int i = 0; i < vb.size(); i++)
    {
        if (vb[i].name == name)
        {
            return true;
        }
    }
    for (int i = 0; i < vh.size(); i++)
    {
        if (vh[i].name == name)
        {
            return true;
        }
    }
    for (int i = 0; i < vq.size(); i++)
    {
        if (vq[i].name == name)
        {
            return true;
        }
    }
    return false;
}

///////Civil Aviation/////////

void CivilAviationBuilder::createAviation()
{
    p = new Aviation;
}

void CivilAviationBuilder::createPassPlane()
{
    PassPlane plane;
    cout << "Title: ";
    cin >> plane.name;
    cin.clear(); 
    cin.ignore(INT_MAX, '\n');
    cout << "Weight: ";
    cin >> plane.weight;
    while (plane.weight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> plane.weight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of engine: ";
    cin >> plane.type_of_engine;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Number of engine: ";
    cin >> plane.num_of_engine;
    while (plane.num_of_engine < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_engine;
    }
    cout << "Number of wing: ";
    cin >> plane.num_of_wing;
    while (plane.num_of_wing < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_wing;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of wing: ";
    cin >> plane.type_of_wing;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of chassis: ";
    cin >> plane.type_of_chassis;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Speed of flight: ";
    cin >> plane.speed_of_flight;
    while (plane.speed_of_flight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.speed_of_flight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_takeoff: ";
    cin >> plane.type_of_takeoff;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_control_method: ";
    cin >> plane.type_of_control_method;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Crew: ";
    cin >> plane.crew;    
    while (plane.crew < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.crew;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Year_of_prod: ";
    cin >> plane.year_of_prod;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_weapon: ";
    cin >> plane.type_of_weapon;
    cin.clear();
    cin.ignore(INT_MAX, '\n');  
    
   

    p->vp.push_back(plane);
}

void CivilAviationBuilder::createPassPlane(ifstream& in)
{
    PassPlane plane;
    try{
    in >> plane.name >> plane.weight >> plane.type_of_engine >> plane.num_of_engine
        >> plane.num_of_wing >> plane.type_of_wing >> plane.type_of_chassis
        >> plane.speed_of_flight >> plane.type_of_takeoff
        >> plane.type_of_control_method >> plane.crew >> plane.year_of_prod >> plane.type_of_weapon;
    if (plane.weight < 0 || plane.num_of_engine < 0 || plane.num_of_wing < 0 || plane.speed_of_flight < 0) {
        string e = "Error reding file";
        throw e;
    }
}
catch (string e)
{
    cout << e << endl;
    system("pause");
    exit(1);
}
    p->vp.push_back(plane);
}

void CivilAviationBuilder::createHelicopter()
{
    Helicopter plane;
    cout << "Title: ";
    cin >> plane.name;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Weight: ";
    cin >> plane.weight;
    while (plane.weight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.weight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of engine: ";
    cin >> plane.type_of_engine;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Number of engine: ";
    cin >> plane.num_of_engine;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    while (plane.num_of_engine < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_engine;
    }
    cout << "Number of wing: ";
    cin >> plane.num_of_wing;
    while (plane.num_of_wing < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_wing;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of wing: ";
    cin >> plane.type_of_wing;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of chassis: ";
    cin >> plane.type_of_chassis;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Speed of flight: ";
    cin >> plane.speed_of_flight;
    while (plane.speed_of_flight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.speed_of_flight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_takeoff: ";
    cin >> plane.type_of_takeoff;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_control_method: ";
    cin >> plane.type_of_control_method;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Crew: ";
    cin >> plane.crew;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Year_of_prod: ";
    cin >> plane.year_of_prod;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_weapon: ";
    cin >> plane.type_of_weapon;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    p->vh.push_back(plane);
}


void CivilAviationBuilder::createHelicopter(ifstream& in)
{
    Helicopter plane;
    try{
    in >> plane.name >> plane.weight >> plane.type_of_engine >> plane.num_of_engine
        >> plane.num_of_wing >> plane.type_of_wing >> plane.type_of_chassis
        >> plane.speed_of_flight >> plane.type_of_takeoff
        >> plane.type_of_control_method >> plane.crew>> plane.year_of_prod >> plane.type_of_weapon;
    if (plane.weight < 0 || plane.num_of_engine < 0 || plane.num_of_wing < 0 || plane.speed_of_flight < 0) {
        string e = "Error reding file";
        throw e;
    }
}
catch (string e)
{
    cout << e << endl;
    system("pause");
    exit(1);
}
    p->vh.push_back(plane);
}

void CivilAviationBuilder::createQuadrocopter()
{
    Quadrocopter plane;
    cout << "Title: ";
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cin >> plane.name;
    cout << "Weight: ";
    cin >> plane.weight;
    while (plane.weight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.weight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of engine: ";
    cin >> plane.type_of_engine;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Number of engine: ";
    cin >> plane.num_of_engine;
    while (plane.num_of_engine < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_engine;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Number of wing: ";
    cin >> plane.num_of_wing;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    while (plane.num_of_wing < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_wing;
    }
    cout << "Type of wing: ";
    cin >> plane.type_of_wing;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of chassis: ";
    cin >> plane.type_of_chassis;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Speed of flight: ";
    cin >> plane.speed_of_flight;
    while (plane.speed_of_flight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.speed_of_flight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_takeoff: ";
    cin >> plane.type_of_takeoff;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_control_method: ";
    cin >> plane.type_of_control_method;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Year_of_prod: ";
    cin >> plane.year_of_prod;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_weapon: ";
    cin >> plane.type_of_weapon;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    p->vq.push_back(plane);
}

void CivilAviationBuilder::createQuadrocopter(ifstream& in)
{
    Quadrocopter plane;
    try{
    in >> plane.name >> plane.weight >> plane.type_of_engine >> plane.num_of_engine
        >> plane.num_of_wing >> plane.type_of_wing >> plane.type_of_chassis
        >> plane.speed_of_flight >> plane.type_of_takeoff
        >> plane.type_of_control_method >>  plane.year_of_prod >> plane.type_of_weapon;
    if (plane.weight < 0 || plane.num_of_engine < 0 || plane.num_of_wing < 0 || plane.speed_of_flight < 0) {
        string e = "Error reding file";
        throw e;
    }
}
catch (string e)
{
    cout << e << endl;
    system("pause");
    exit(1);
}
    p->vq.push_back(plane);
}

///////Army Aviation/////////

void ArmyAviationBuilder::createAviation()
{
    p = new Aviation;
}

void ArmyAviationBuilder::createBattlePlane()
{
    BattlePlane plane;
    cout << "Title: ";
    cin >> plane.name;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Weight: ";
    cin >> plane.weight;
    while (plane.weight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.weight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of engine: ";
    cin >> plane.type_of_engine;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Number of engine: ";
    cin >> plane.num_of_engine;
    while (plane.num_of_engine < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_engine;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Number of wing: ";
    cin >> plane.num_of_wing;
    while (plane.num_of_wing < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_wing;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of wing: ";
    cin >> plane.type_of_wing;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of chassis: ";
    cin >> plane.type_of_chassis;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Speed of flight: ";
    cin >> plane.speed_of_flight;
    while (plane.speed_of_flight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.speed_of_flight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_takeoff: ";
    cin >> plane.type_of_takeoff;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_control_method: ";
    cin >> plane.type_of_control_method;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Crew: ";
    cin >> plane.crew;    
    while (plane.crew < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.crew;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Year_of_prod: ";
    cin >> plane.year_of_prod;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_weapon: ";
    cin >> plane.type_of_weapon;
    cin.clear();
    cin.ignore(INT_MAX, '\n');





    p->vb.push_back(plane);
}

void ArmyAviationBuilder::createBattlePlane(ifstream& in)
{
    BattlePlane plane;
    try{
    in >> plane.name >> plane.weight >> plane.type_of_engine >> plane.num_of_engine
        >> plane.num_of_wing >> plane.type_of_wing >> plane.type_of_chassis
        >> plane.speed_of_flight >> plane.type_of_takeoff
        >> plane.type_of_control_method >> plane.crew >> plane.year_of_prod >> plane.type_of_weapon;
    if (plane.weight < 0 || plane.num_of_engine < 0 || plane.num_of_wing < 0 || plane.speed_of_flight < 0) {
        string e = "Error reding file";
        throw e;
    }
}
catch (string e)
{
    cout << e << endl;
    system("pause");
    exit(1);
}
    p->vb.push_back(plane);
}

void ArmyAviationBuilder::createHelicopter()
{
    Helicopter plane;
    cout << "Title: ";
    cin >> plane.name;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Weight: ";
    cin >> plane.weight;
    while (plane.weight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.weight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of engine: ";
    cin >> plane.type_of_engine;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Number of engine: ";
    cin >> plane.num_of_engine;
    while (plane.num_of_engine < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_engine;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Number of wing: ";
    cin >> plane.num_of_wing;
    while (plane.num_of_wing < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_wing;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of wing: ";
    cin >> plane.type_of_wing;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of chassis: ";
    cin >> plane.type_of_chassis;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Speed of flight: ";
    cin >> plane.speed_of_flight;
    while (plane.speed_of_flight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.speed_of_flight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_takeoff: ";
    cin >> plane.type_of_takeoff;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_control_method: ";
    cin >> plane.type_of_control_method;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Crew: ";
    cin >> plane.crew;
    while (plane.crew < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.crew;
    }
    cout << "Year_of_prod: ";
    cin >> plane.year_of_prod;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_weapon: ";
    cin >> plane.type_of_weapon;
    cin.clear();
    cin.ignore(INT_MAX, '\n');




    p->vh.push_back(plane);
}

void ArmyAviationBuilder::createHelicopter(ifstream& in)
{
    Helicopter plane;
    try{
    in >> plane.name >> plane.weight >> plane.type_of_engine >> plane.num_of_engine
        >> plane.num_of_wing >> plane.type_of_wing >> plane.type_of_chassis
        >> plane.speed_of_flight >> plane.type_of_takeoff
        >> plane.type_of_control_method >> plane.crew >> plane.year_of_prod >> plane.type_of_weapon;
    if (plane.weight < 0 || plane.num_of_engine < 0 || plane.num_of_wing < 0 || plane.speed_of_flight <0) {
        string e = "Error reding file";
        throw e;
    }
}
catch (string e)
{
    cout << e << endl;
    system("pause");
    exit(1);
}
    p->vh.push_back(plane);
}

void ArmyAviationBuilder::createQuadrocopter()
{
    Quadrocopter plane;
    cout << "Title: ";
    cin >> plane.name;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Weight: ";
    cin >> plane.weight;
    while (plane.weight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.weight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of engine: ";
    cin >> plane.type_of_engine;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Number of engine: ";
    cin >> plane.num_of_engine;
    while (plane.num_of_engine < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_engine;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Number of wing: ";
    cin >> plane.num_of_wing;
    while (plane.num_of_wing < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.num_of_wing;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of wing: ";
    cin >> plane.type_of_wing;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type of chassis: ";
    cin >> plane.type_of_chassis;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Speed of flight: ";
    cin >> plane.speed_of_flight;
    while (plane.speed_of_flight < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You enter wrong weight. Please enter weight again: ";
        cin >> plane.speed_of_flight;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_takeoff: ";
    cin >> plane.type_of_takeoff;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_control_method: ";
    cin >> plane.type_of_control_method;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Year_of_prod: ";
    cin >> plane.year_of_prod;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Type_of_weapon: ";
    cin >> plane.type_of_weapon;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    p->vq.push_back(plane);
}

void ArmyAviationBuilder::createQuadrocopter(ifstream& in)
{
    Quadrocopter plane;
    try {
        in >> plane.name >> plane.weight >> plane.type_of_engine >> plane.num_of_engine
            >> plane.num_of_wing >> plane.type_of_wing >> plane.type_of_chassis
            >> plane.speed_of_flight >> plane.type_of_takeoff
            >> plane.type_of_control_method >> plane.year_of_prod >> plane.type_of_weapon;
        if (plane.weight<0 || plane.num_of_engine < 0 || plane.num_of_wing < 0 || plane.speed_of_flight < 0) {
            string e = "Error reding file";
            throw e;
        }
    }
    catch (string e)
    {
        cout << e << endl;
        system("pause");
        exit(1);
    }
    p->vq.push_back(plane);
}
