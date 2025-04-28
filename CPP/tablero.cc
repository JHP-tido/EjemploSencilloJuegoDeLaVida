#include "tablero.h"
#include <iostream>   
                                                                 
using namespace std;


void Ctablero::desplazar()
{
	bool estact;
	bool estant;
	int count;
	int fil;
	int col;
	int tipo;
	tiempo++;
	fil=1;
	while(fil<=filas)
	{	
		col=1;
		while(col<=columnas)
		{
			estact=Tabla[fil][col]->getestadoact();
			Tabla[fil][col]->setestadoant(estact);
			col++;
		}
		fil++;
	}
	
	fil=1;
	while(fil<=filas)
	{	
		col=1;
		while(col<=columnas)
		{
			count=0;
			estant=Tabla[fil-1][col-1]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			estant=Tabla[fil-1][col]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			estant=Tabla[fil-1][col+1]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			estant=Tabla[fil][col-1]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			estant=Tabla[fil][col+1]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			estant=Tabla[fil+1][col-1]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			estant=Tabla[fil+1][col]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			estant=Tabla[fil+1][col+1]->getestadoant();
			if(estant==true)
			{
				count=count+1;
			}
			tipo=Tabla[fil][col]->ActualizarEstado(count);
			estact=Tabla[fil][col]->getestadoact();
			sustituyecelula(fil, col, tipo,estact);
			col++;
		}
		fil++;
	}		
		
}

/*Ctablero::Ctablero()
{
	filas=0;
	columnas=0;
	tiempo=0;
		
	Tabla = new Ccelula**[filas+2]; 		//reserva memoria del puntero
	for(int i = 0; i < (filas+2); i++) 
		Tabla[i] = new Ccelula*[columnas+2];
			
	for(int i=0;i<(filas+2);i++)
		{
		for(int j=0;i<(columnas+2);i++)
			{
			Tabla[i][j]=new Ccelula(false, false);
			}
		}
}*/

Ctablero::Ctablero(int fil, int col)
{
	filas=fil;
	columnas=col;
	tiempo=0;
	Tabla = new Ccelula**[filas+2];			//reserva memoria del puntero(equivale a filas)
	for(int i = 0; i < (filas+2); i++){ 
		Tabla[i] = new Ccelula*[columnas+2]; //reserva memoria de puntero a puntero(equivale a columnas)
		for(int j=0;j<(columnas+2);j++)
			Tabla[i][j] = new Ccelula (false, false);
	}
}

	
Ctablero::~Ctablero()
{
	for(int i = 0; i < (filas+2); i++)
	{
		for(int j=0;j<(columnas+2);j++)
		{
			delete Tabla[i][j]; 
		}
	};
	for(int i = 0; i < (filas+2); i++)
	{
		delete Tabla[i];
	};
	delete Tabla;			
}
	

int Ctablero::gettiempo()
{
	return tiempo;
}
	
	
void Ctablero::sustituyecelula(int i, int j, int tipo,bool estact) 
{
	delete Tabla[i][j];
	switch(tipo) 
	{
		case 0: Tabla[i][j] = new Ccelula(false, estact); break;
		case 1: Tabla[i][j] = new CcelulaA(true, estact); break;
		case 2: Tabla[i][j] = new CcelulaB(true, estact); break;
		case 3: Tabla[i][j] = new CcelulaC(true, estact); break;
	}
}


void Ctablero::mostrartab()
{
	int fil;
	int col;
	fil=1;
	while(fil<=filas+1)
	{	
		col=1;
		while(col<=columnas+1)
		{
			Tabla[fil][col]->mostrarcel();
			col++;
		}
		cout<<endl;		//realiza un salto de línea al final de la columna
		fil++;
	}	
}
