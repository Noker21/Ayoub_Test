#include "Ligne.hpp"
#include <iostream>
Ligne::Ligne(const Couleur & couleur, Point & p0, Point & p1):FigureGeometrique(couleur),_p0(p0),_p1(p1){}
void Ligne::afficher() const  {
	std::cout<<"Ligne :  "<<getCouleur()._r<<"."<<getCouleur()._g<<"."<<getCouleur()._b<<"   "<<_p0._x<<"."<<_p0._y<<"   "<<_p1._x<<"."<<_p1._y<<	std::endl;
	}
const Point & Ligne::getP0() const {
		return _p0;}

const Point & Ligne::getP1() const {
		return _p1;}		
		