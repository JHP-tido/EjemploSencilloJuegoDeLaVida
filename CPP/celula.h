#if !defined( _CELULA_H_ )
#define _CELULA_H_

class Ccelula
{
	private:
		bool estadoact;
		bool estadoant;
	public:
		//Ccelula();
		Ccelula(bool, bool);
		bool getestadoact();
		bool getestadoant();
		void setestadoact(bool);
		void setestadoant(bool);
		virtual ~Ccelula(){};
		virtual int ActualizarEstado(int);
		virtual void mostrarcel();
};


class CcelulaA:public Ccelula
{
	public:
		//CcelulaA(); //nota: al construir uno de los tipos celulas nuevos, los mostrar son de ese tipo en el array
		CcelulaA(bool eact, bool eant):Ccelula(eact,eant){};
		~CcelulaA(){};
		int ActualizarEstado(int);
		void mostrarcel();
};



class CcelulaB:public Ccelula
{
	public:
		//CcelulaB();
		CcelulaB(bool eact, bool eant):Ccelula(eact,eant){};
		~CcelulaB(){};
		int ActualizarEstado(int);
		void mostrarcel();
};


class CcelulaC:public Ccelula
{
	public:
		//CcelulaC();
		CcelulaC(bool eact, bool eant):Ccelula(eact,eant){};
		~CcelulaC(){};
		int ActualizarEstado(int);
		void mostrarcel();
};

#endif