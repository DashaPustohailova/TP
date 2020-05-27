#pragma once
#include "TypeAviation.h"

// Класс "Авиация", содержащий все типы боевых единиц
class Aviation
{
public:
    vector<PassPlane> vp;
    vector<BattlePlane> vb;
    vector<Helicopter> vh;
    vector<Quadrocopter> vq;
    void print();
    void print(string& path);
    bool search_name(string& name);
};

// Базовый класс AviationBuilder объявляет интерфейс для поэтапного построения авиации

class AviationBuilder
{
protected:
    Aviation* p;
public:
    AviationBuilder() : p(0) {}
    virtual ~AviationBuilder() {}
    virtual void createAviation() {}
    virtual void createPassPlane() {}
    virtual void createPassPlane(ifstream& in) {}
    virtual void createBattlePlane() {}
    virtual void createBattlePlane(ifstream& in) {}
    virtual void createHelicopter() {}
    virtual void createHelicopter(ifstream& in) {}
    virtual void createQuadrocopter() {}
    virtual void createQuadrocopter(ifstream& in) {}
    virtual Aviation* getAviation() { return p; }
};


// Гражданская авиация имеет все типы аппаратов кроме боевых самолетов
class CivilAviationBuilder : public AviationBuilder
{
public:
    void createAviation();
    void createPassPlane();
    void createPassPlane(ifstream& in);
    void createHelicopter();
    void createHelicopter(ifstream& in);
    void createQuadrocopter();
    void createQuadrocopter(ifstream& in);
};


// Военная авиация имеет все типы аппаратов кроме пассажирских самолетов
class ArmyAviationBuilder : public AviationBuilder
{
public:
    void createAviation();
    void createBattlePlane();
    void createBattlePlane(ifstream& in);
    void createHelicopter();
    void createHelicopter(ifstream& in);
    void createQuadrocopter();
    void createQuadrocopter(ifstream& in);
};

