#include "DateH.h"
#include<iostream>
#include<assert.h>
using namespace std;
using namespace Horaire;
DateH::DateH(int h, int min, int s, int j, int mois, int a):Heure(h,min,s)
{
    assert((a >= 1900) && (a <= 2999));
    assert((mois >= 1) && (mois <= 12));
    assert((j >= 1) && (j <= longueur_mois(mois, a)));
    
    this->annee = a;
    this->mois = mois;
    this->jour = j;
}

void DateH::printDateH() const
{
	cout << "Date : " << this->jour << "/" << this->mois << "/" << this->annee;
	cout << "   Heure : ";this->printHeure();
}

int DateH::Est_bissextile(int a)
{
    if ((a%4) == 0)
        return(1);
    return(0);
}

int DateH::longueur_mois(int m, int a)
{
    switch (m)
    {
    case 1: return(31);
    case 2: if (Est_bissextile(a))
                return(29);
            return(28);
            break;
    case 3: return(31); break;
    case 4: return(30); break;
    case 5: return(31); break;
    case 6: return(30); break;
    case 7: return(31); break;
    case 8: return(31); break;
    case 9: return(30); break;
    case 10: return(31); break;
    case 11: return(30); break;
    case 12: return(31); break;
    default: printf("erreur  ! "); break;
    }

}

bool DateH::operator>(const DateH& D) const
{
    if (this->annee > D.annee)return true;
    if (this->annee == D.annee)
    {
        if (this->mois > D.mois)return true;
        if (this->mois < D.mois)return false;
            // meme annee && meme mois
            if(this->jour > D.jour)return true;
            if (this->jour < D.jour)return false;
                // meme jour
                if (this->Heure::operator>(D) == true)
                    return true;
                return false;
    }
    if (this->annee < D.annee)return false;
}
