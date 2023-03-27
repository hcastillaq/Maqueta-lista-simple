#include <iostream>

using namespace std;

struct nodo
{
	string letra;
	int dato;
	nodo *sig;
} *ptr;

void recorrer(nodo *c)
{
	nodo *k = c;
	while (k != NULL)
	{
		cout << k->dato << endl;
		k = k->sig;
	}
}

void insertar_por_cabeza(nodo *p)
{
	p->sig = ptr;
	ptr = p;
}

void insertar_por_cola(nodo *p)
{
	if (ptr != NULL)
	{

		nodo *k = ptr;
		while (k->sig != NULL)
		{
			k = k->sig;
		}

		k->sig = p;
		p->sig = NULL;
	}
	else
	{
		insertar_por_cabeza(p);
	}
}

void eliminar(int dato)
{
	nodo *p = ptr;

	if (p->dato == dato)
	{
		ptr = ptr->sig;
		delete (p);
	}
	else
	{
		while (p->dato != dato)
		{
			p = p->sig;
		}

		nodo *j = ptr;

		while (j->sig != p)
		{
			j = j->sig;
		}

		j->sig = p->sig;

		p->sig = NULL;
		delete (p);
	}
}

void ordenar()
{
	nodo *p = ptr;
	while (p != NULL)
	{
		nodo *j = p->sig;
		while (j != NULL)
		{
			if (p->dato > j->dato)
			{
				int aux = p->dato;
				p->dato = j->dato;
				j->dato = aux;
			}
			j = j->sig;
		}
		p = p->sig;
	}
}
