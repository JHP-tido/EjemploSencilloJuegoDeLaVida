#include "tablero.h"
#include "celula.h"
#include <iostream>

using namespace std;

int main()
{
	int fil;
	int mirafil;
	int col;
	int miracol;
	int tip;
	cout<<"Introduzca filas del tablero"<<endl;
	cin >> fil;
	cout<<"Introduzca columnas del tablero"<<endl;
	cin >> col;
	Ctablero c(fil, col);
	mirafil=fil;
	miracol=col;
	
	do
	{
		cout<<"Introduzca fila, columna y tipo de celula a revivir(1-celulaA, 2-celulaB, 3-celulaC)"<<endl;
		
		do
		{
			cin>>fil;
			if(fil>mirafil)
			{
				cout<<"Fuera de limite"<<endl;
			}
		}
		while(fil>mirafil);
		
		do
		{
			cin>>col;
			if(col>miracol)
			{
				cout<<"Fuera de limite"<<endl;
			}
		}
		while(fil>mirafil);
		
		do
		{
			cin>>tip;
			if(tip>=4)
			{
				cout<<"Sólo hay tipo 1, 2, 3 y 0 para muerta"<<endl;
			}
		}
		while(tip>=4);
		
		c.sustituyecelula(fil+1, col+1, tip, false);
		cout<<"Quiere revivir otra celula: si(0) no(cualquier otro numero)"<<endl;
		cin>>tip;
	}
	while(tip==0);
	
	do
	{
		c.mostrartab();
		cout<<"Turno:" << c.gettiempo() <<endl;
		c.desplazar();
		cout<<"Si quiere continuar turno pulse 0 si no cualquier otro numero"<<endl;
		cin>>tip;
	}
	while(tip==0);
	
return 0;
}

