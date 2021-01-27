#pragma once

#include "Vecteur3d.h"

#include <iostream>

using namespace std;

template <class T>  class vecteur2d : vecteur3d <T>
{
public:
	vecteur2d(T a = 0.0f, T b = 0.0f);

	void Somme(vecteur2d vect2);

	void Soustrait(vecteur2d vect2);

	void Multipli(vecteur2d vect2);

	


};

template<class T>
inline vecteur2d<T>::vecteur2d(T a = 0.0f, T b = 0.0f)
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