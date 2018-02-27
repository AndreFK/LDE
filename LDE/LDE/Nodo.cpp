#include "stdafx.h"
#include "Nodo.h"

Nodo::Nodo(int ValueN) {
	siguiente = NULL;
	anterior = NULL;
	this->ValueN = ValueN;
}

Nodo::~Nodo(){}