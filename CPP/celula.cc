#include "celula.h"
#include <iostream>      
                                                              
using namespace std;


Ccelula::Ccelula(bool eact, bool eant)
{
	estadoact=eact;
	estadoant=eant;
}


bool Ccelula::getestadoact()
{
	return estadoact;
}


bool Ccelula::getestadoant()
{
	return estadoant;
}


void Ccelula::setestadoact(bool estact)
{
	estadoact=estact;
}


void Ccelula::setestadoant(bool estant)
{
	estadoant=estant;
}	


void Ccelula::mostrarcel()
{
	cout<<" ";
}


void CcelulaA::mostrarcel()
{
	bool estadoact;
	estadoact=getestadoact();
	if(estadoact==true)
	{
		cout<<"A";
	}
	else
	{
		cout<<" ";
	}
}


void CcelulaB::mostrarcel()
{
	bool estadoact;
	estadoact=getestadoact();
	if(estadoact==true)
	{
		cout<<"B";
	}
	else
	{
		cout<<" ";
	}
}


void CcelulaC::mostrarcel()
{
	bool estadoact;
	estadoact=getestadoact();
	if(estadoact==true)
	{
		cout<<"C";
	}
	else
	{
		cout<<" ";
	}

}


int Ccelula::ActualizarEstado(int count)
{
	if(count==3)
	{
		return(1);
	}
	if(count==4)
	{
		return(2);
	}
	if(count==6)
	{
		return(3);
	}
	if((count!=3) or (count!=4) or (count=!6))
	{
		return(0);
	}
}


int CcelulaA::ActualizarEstado(int count)
{
	if(count==3)
	{
		return(1);
	}
	if(count==2)
	{
		return(1);
	}
	if((count!=2) or (count!=3))
	{
		return(0);
	}
}


int CcelulaB::ActualizarEstado(int count)
{
	if(count==3)
	{
		return(2);
	}
	if(count==4)
	{
		return(2);
	}
	if((count!=3) or (count!=4))
	{
		return(0);
	}
}


int CcelulaC::ActualizarEstado(int count)
{
	if(count==5)
	{
		return(3);
	}
	if(count==1)
	{
		return(3);
	}
	if((count!=5) or(count!=1))
	{
		return(0);
	}
}
