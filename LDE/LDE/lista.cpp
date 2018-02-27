#include "stdafx.h"
#include <iostream>
#include "lista.h"

using namespace std;

lista::lista()
{
	this->inicio = centinela;
	this->fin = centinela;
	centinela->siguiente = centinela;
	centinela->anterior = NULL;
	centinela->ValueN = -1;
	cant = 0;
}


void lista::add(Nodo*n) {
	Nodo* tmp=n;
	Nodo * tmp1 = inicio;

	if (inicio = centinela) {
		tmp->siguiente = centinela;
		centinela->anterior = tmp;
		tmp->anterior = NULL;
		inicio = n;
		cant = +1;
	}
	if (n->ValueN > tmp1->ValueN) {
		tmp->siguiente = tmp1;
		tmp->anterior = NULL;
		tmp1->anterior = tmp;
		inicio = n;
		cant += 1;
	}
	else {
		for (int i = 0; i < cant; i++) {
			tmp1 = tmp1->siguiente;
			if (tmp1->ValueN > tmp->ValueN) {
				tmp->siguiente = tmp1->siguiente;
				tmp->anterior = tmp1;
				tmp1->siguiente = tmp;
				cant += 1;
			}
		}
	}
}


void lista::eliminar(int n) {
	Nodo * tmp;
	tmp->ValueN = n;
	Nodo * tmp1 = inicio;

	if (tmp->ValueN == tmp1->ValueN) {
		inicio = tmp1->siguiente;
		inicio->anterior = NULL;
		tmp1->siguiente = NULL;
		cant = cant - 1;
	}
	else {
		for (int i = 0; i < cant; i++) {
			tmp1 = tmp1->siguiente;
			if (tmp1->ValueN == n) {
				cout << "Elemento con valor " << n << " ha sido eliminado";
				tmp1->anterior->siguiente = tmp1->siguiente;
				tmp1->siguiente->anterior = tmp1->anterior;
			}
		}
		cant = cant - 1;
	}

}


int lista::aux(int c) {

}


int lista::MaxRep() {
	
}

int lista::MaxDif() {
	int x;
	x = inicio->ValueN - fin->ValueN;
	return x;
}

lista::~lista()
{
}
