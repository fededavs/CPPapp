#ifndef LISTAS_H
#define LISTAS_H
#include "Nodos.h"
#include <vcl.h>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class ListaClientes
{
	Cliente *cabeza;
	int total;
	int numeroCliente;
    int ultimoNumero;

public:
	ListaClientes();
	~ListaClientes();
	void cargarListaClientes(string);
    void agregarClienteCSV(Cliente*);
	void ingresarCliente(Cliente*);
	void eliminarCliente(AnsiString);
	void modificarCliente(AnsiString, Cliente&);
	Cliente *buscarCliente(AnsiString);
    Cliente *getCabeza();
    int getTotal();
};

class ListaDestinos
{
	Destino *cabeza;
	int total;

public:
	ListaDestinos();
	~ListaDestinos();
	void cargarListaDestinos(string);
    void agregarDestinoCSV(Destino*);
	void ingresarDestino(Destino*);
	void eliminarDestino(AnsiString);
	void modificarDestino(AnsiString, Destino&);
	Destino *buscarDestino(AnsiString);
    Destino *getCabeza();
    int getTotal();
};

#endif