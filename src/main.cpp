#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"
#include <iostream>
#include <vector>


int main(){
	Couleur rouge {0,1,0};
	Point p0{100,200};
	Point p1{100,200};
	//PolygoneRegulier P(rouge,p0,50,5);
	//P.afficher();
	//l.afficher();
	
	std::vector<FigureGeometrique*> figure;
	figure.push_back(new PolygoneRegulier (rouge,p0,50,5));
	figure.push_back(new Ligne (rouge,p0,p1));
		for(int i=0;i<2;i++){
		figure[i]->afficher();
		}


}
