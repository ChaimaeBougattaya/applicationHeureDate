#pragma once
namespace Horaire {
	class Heure
	{
	protected:// ou bien private ==> aucun changement au niveau du r�sultat 
		int heure;
		int munite;
		int seconde;
	public:
		// pour l'exercice
		Heure(int h, int m, int s);
		void printHeure()const;
		bool operator>(const Heure&)const;
		
		Heure(const Heure&);
		Heure& operator=(const Heure&);
	};
}
