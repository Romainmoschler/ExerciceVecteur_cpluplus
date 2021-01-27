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
		this->m_x += vect2.m_x;
		this->m_y += vect2.m_y;
		this->m_z += vect2.m_z;
	}

	void Soustrait(vecteur3d vect2)
	{
		this->m_x -= vect2.m_x;
		this->m_y -= vect2.m_y;
		this->m_z -= vect2.m_z;
	}

	void Multipli(vecteur3d vect2)
	{
		this->m_x = this->m_x * vect2.m_x;
		this->m_y = this->m_y * vect2.m_y;
		this->m_z = this->m_z * vect2.m_z;
	}

	int coincide(vecteur3d vect2)
	{
		if (this->m_x == vect2.m_x && this->m_y == vect2.m_y && this->m_z == vect2.m_z)

			return true;

		else

			return false;

	}

	void affiche()
	{
		cout << "Coordonees: " << this->m_x << " " << this->m_y << " " << this->m_z << endl;
	}
};

