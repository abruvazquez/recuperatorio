#pragma once
#include <string>
#include <string.h>
#include <ostream>

using namespace std;

class cCalzado
{
protected:
	float talle;
	const string horma;
	string color;
	bool cordones;
	static int cod;
	string desc;

public:
	cCalzado();
	void settalle(float Talle);
	void setcolor(string Color);
	void setcordones(bool Cordones);
	int getcod()const { return cod; };
	virtual string Arreglarse() = 0;
	string get()const { return desc; };
	virtual ~cCalzado();
	friend ostream& operator<<(ostream& out, const cCalzado& calzado);
	bool operator==(cCalzado& calzado);
		
};

ostream& operator<<(ostream& out, const cCalzado& calzado);
