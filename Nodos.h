#ifndef NODO_H
#define NODO_H
#include <vcl.h>

struct Cliente
{
	int numero;
	AnsiString genero;
	AnsiString nombre, apellido;
	AnsiString inicialMedia;
	AnsiString direccion;
	AnsiString ciudad, estado;
	int zipCode;
	AnsiString email;
	AnsiString numeroTelefono;
	AnsiString cumpleaños;
	int edad;
	AnsiString CCtype;
	int CCnumber;
	AnsiString CVV2;
	int CCexpires;
	AnsiString codigo;
	int plazas;
	Cliente* siguiente;

	Cliente();
    Cliente(Cliente &);
};

struct Destino
{
	AnsiString nombrePaquete;
	AnsiString destino;
	int duracionDias;
	float costoUSD;
	AnsiString partida;
	AnsiString codigo;
	int plazas;
	Destino* siguiente;

	Destino();
    Destino(Destino &);
};

#endif
