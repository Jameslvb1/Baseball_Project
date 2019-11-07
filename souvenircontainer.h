#ifndef SOUVENIRCONTAINER_H
#define SOUVENIRCONTAINER_H
#include <iostream>
#include "souvenir.h"

using namespace std;

struct SouvenirNode
{
    Souvenir souv;
    SouvenirNode *next = nullptr;
};

class SouvenirContainer
{
private:
    SouvenirNode *head;
    SouvenirNode *tail;

public:
    SouvenirContainer();
    void addSouvenir(Souvenir souv);
    void removeSouvenir(Souvenir souv);
    void displaySouveniers();
    double returnTotal();
};

#endif // SOUVENIRCONTAINER_H
