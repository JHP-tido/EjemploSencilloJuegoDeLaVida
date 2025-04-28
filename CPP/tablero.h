#if !defined( _TABLERO_H_ )
#define _TABLERO_H_


class Ctablero
{
	private:
		int filas;
		int columnas;
		int tiempo;
		Ccelula*** Tabla;//celula
	public:
	/*	Ctablero();*/
		Ctablero(int, int);
		~Ctablero();
		void sustituyecelula(int, int, int,bool);
		int getfilas();
		int getcolumnas();
		int gettiempo();
		void desplazar();
		void mostrartab();
};

#endif;