#include <iostream>
#include "metodos.h"

int main()
{
	nodo *p = new nodo;
	p->dato = 1;

	nodo *j = new nodo;
	j->dato = 3;

	nodo *k = new nodo;
	k->dato = 6;

	nodo *h = new nodo;
	h->dato = 10;

	insertar_por_cabeza(p);
	insertar_por_cabeza(j);
	insertar_por_cabeza(k);
	insertar_por_cola(h);
	recorrer(ptr);
	cout << "-----" << endl;
	ordenar();
	recorrer(ptr);
	cout << "-----" << endl;
	eliminar(3);
	recorrer(ptr);
}
