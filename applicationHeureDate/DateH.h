#pragma once
#include "Heure.h"
using namespace Horaire;
class DateH :
    public Heure
{
private:
    int jour;
    int mois;
    int annee;
public:
    DateH(int h, int min, int s, int j, int moi, int a);
    void printDateH()const;
    int Est_bissextile(int);
    int longueur_mois(int , int );
    bool operator>(const DateH&)const;
};

