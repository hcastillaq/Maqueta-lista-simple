#include <iostream>
#include <string>
using namespace std;

struct nodo
{
	string letra;
	nodo *sig;
} *ptr;

void insertar_por_cabeza(nodo *p)
{
	p->sig = ptr;
	ptr = p;
}

int equivalencia(string letra)
{
	string abecedario = "abcdefghijklmnñopqrstuvwxyz";
	return abecedario.find(letra);
}

void ordenar_alfabeticamente()
{
	nodo *p = ptr;
	while (p != NULL)
	{
		nodo *j = p->sig;
		while (j != NULL)
		{
			if (equivalencia(p->letra) > equivalencia(j->letra))
			{
				string aux = p->letra;
				p->letra = j->letra;
				j->letra = aux;
			}
			j = j->sig;
		}
		p = p->sig;
	}
}

void recorrer(nodo *c)
{
	nodo *k = c;
	while (k != NULL)
	{
		cout << k->letra << endl;
		k = k->sig;
	}
}

int main()
{
	nodo *p = new nodo;
	p->letra = "a";

	nodo *j = new nodo;
	j->letra = "j";

	nodo *k = new nodo;
	k->letra = "l";

	nodo *h = new nodo;
	h->letra = "b";

	insertar_por_cabeza(p);
	insertar_por_cabeza(j);
	insertar_por_cabeza(k);
	insertar_por_cabeza(h);

	recorrer(ptr);
	ordenar_alfabeticamente();
	cout << " ----- " << endl;
	recorrer(ptr);
}
