#pragma once
#include "Aviation.h"

class Director
{
public:
    Aviation* createAviation(AviationBuilder& builder);
    void add(AviationBuilder& builder, int type);
    void add(AviationBuilder& builder, ifstream& in, string& type);
    void change(Aviation* avia, string& name, int param, int data);
    void change(Aviation* avia, string& name, int param, string& data);
    void del(Aviation* avia, string& name);
};