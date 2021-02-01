#pragma once

#include "Vecteur3d.h"

#include <iostream>

using namespace std;

template <class T>  class vecteur2d : vecteur3d <T>
{
public:
	vecteur2d(T a = 0, T b = 0);


	void Somme(vecteur2d vect2);

	void Soustrait(vecteur2d vect2);

	void Multipli(vecteur2d vect2);

	bool coincide(vecteur2d vect1, vecteur2d vect2);

	void affiche();

	/*friend vecteur2d operator<<(ostream& os, vecteur3d& vect1)
	{
		os << vect1.getX() << " " << vect1.getY();
		return os;
	}*/


};

template<class T>
inline vecteur2d<T>::vecteur2d(T a , T b )
{
	this->m_x = a;
	this->m_y = b;
	this->m_z = 0;
}

template<class T>
inline void vecteur2d<T>::Somme(vecteur2d vect2)
{
	this->m_x = this->m_x + vect2.m_x;
	this->m_y = this->m_y + vect2.m_y;
}

template<class T>
inline void vecteur2d<T>::Soustrait(vecteur2d vect2)
{
	this->m_x = this->m_x - vect2.m_x;
	this->m_y = this->m_y - vect2.m_y;
}

template <class T>
inline void vecteur2d<T>::Multipli(vecteur2d vect2)
{
	this->m_x = this->m_x * vect2.m_x;
	this->m_y = this->m_y * vect2.m_y;
}

template <class T>
inline bool vecteur2d<T>::coincide(vecteur2d vect1, vecteur2d vect2)
{
	if (vect1.m_x == vect2.m_x && vect1.m_y == vect2.m_y)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
inline void vecteur2d<T>::affiche()
{
	cout << "Coordonees: " << this->m_x << " " << this->m_y << endl;
}

