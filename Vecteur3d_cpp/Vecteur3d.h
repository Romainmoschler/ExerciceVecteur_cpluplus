#pragma once

#include <iostream>

using namespace std;

template <class T> class vecteur3d
{
private:
	T m_x, m_y, m_z;

public:
	vecteur3d(T a = 0.0f, T b = 0.0f, T c = 0.0f)
	{
		m_x = a;
		m_y = b;
		m_z = c;
	}

	vecteur3d(vecteur3d const&)
	{

	}


	void Somme(vecteur3d vect2)
	{
		*this = *this + vect2;
	}

	void Soustrait(vecteur3d vect2)
	{
		*this = *this - vect2;
	}

	void Multipli(vecteur3d vect2)
	{
		this->m_x = this->m_x * vect2.m_x;
		this->m_y = this->m_y * vect2.m_y;
		this->m_z = this->m_z * vect2.m_z;
	}

	int coincide(vecteur3d vect2)
	{
		if (this == vect2)

			return true;

		else

			return false;

	}

	void affiche()
	{
		cout << "Coordonees: " << *this << endl;
	}

	int getX()
	{
		return this->m_x;
	}

	int getY()
	{
		return this->m_y;
	}

	int getZ()
	{
		return this->m_z;
	}

	friend vecteur3d operator+(vecteur3d vect1, vecteur3d vect2)
	{
		vecteur3d resultat;

		resultat.m_x = vect1.m_x + vect2.m_x;
		resultat.m_y = vect1.m_y + vect2.m_y;
		resultat.m_z = vect1.m_z + vect2.m_z;

		return resultat;
	}

	friend vecteur3d operator-(vecteur3d vect1, vecteur3d vect2)
	{
		vecteur3d resultat;

		resultat.m_x = vect1.getX() - vect2.getX();
		resultat.m_y = vect1.getY() - vect2.getY();
		resultat.m_z = vect1.getZ() - vect2.getZ();

		return resultat;
	}

	friend vecteur3d& operator==(const vecteur3d vect1,const vecteur3d vect2)
	{
		if (vect1.getX() == vect2.getX() && vect1.getY() == vect2.getY() && vect1.getZ() == vect2.getZ())

			return true;

		else

			return false;
	}

	friend ostream& operator<<(ostream& os, vecteur3d& vect1) 
	{
			os << vect1.m_x << " " << vect1.m_y << " " << vect1.m_z;

			return os;
	}
	
	vecteur3d operator=(const vecteur3d vect1)
	{
		this->m_x = vect1.m_x;
		this->m_y = vect1.m_y;
		this->m_z = vect1.m_z;

		return *this;
	}
};