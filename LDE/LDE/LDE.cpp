// LDE.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Nodo.h"
#include "lista.h"
#include <iostream>

using namespace std;

int main()
{	
	lista list;
	list.add(new Nodo(5));
	list.add(new Nodo(3));
	list.add(new Nodo(4));
	list.add(new Nodo(1));
	list.eliminar(4);
	list.MaxDif();
    return 0;
}

