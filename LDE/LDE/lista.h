#pragma once
#include "Nodo.h"

class lista
{
public:
	
	Nodo *inicio;
	Nodo *fin;
	Nodo * centinela;
	int cant;

	int num;
	int rep;
	
	void add(Nodo *n);
	void eliminar(int n);
	int MaxRep();
	int MaxDif();
	
	int aux(int c);

	lista();
	~lista();
};

