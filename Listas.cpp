#include "Listas.h"
using namespace std;

// Metodos y constructores de la lista de clientes

ListaClientes::ListaClientes()
{
	cabeza = nullptr;
	total = 0;
	numeroCliente = 0;
	ultimoNumero = 0;
}
ListaClientes::~ListaClientes()
{
	Cliente *actual = cabeza;
	while(actual != nullptr)
	{
		Cliente *siguiente = actual->siguiente;
		delete actual;
		actual = siguiente;
	}
	cabeza = nullptr;
	total = 0;
}

void ListaClientes::cargarListaClientes(string nombreArchivo)
{
	ifstream archivo(nombreArchivo);
	if(!archivo.is_open()) return;

	Cliente *nuevoCliente;
	int numeroCliente = 0; //variable temporal para rastrear el numero mas alto
	string linea;
	
	while(getline(archivo, linea))
	{
		nuevoCliente = new Cliente();
		stringstream s(linea);
		string campo;

		getline(s, campo, ',');
		nuevoCliente->numero = stoi(campo);
		getline(s, campo, ',');
		nuevoCliente->genero = campo;
		getline(s, campo, ',');
		nuevoCliente->nombre = campo;
		getline(s, campo, ',');
		nuevoCliente->apellido = campo;
		getline(s, campo, ',');
		nuevoCliente->inicialMedia = campo;
		getline(s, campo, ',');
		nuevoCliente->direccion = campo;
		getline(s, campo, ',');
		nuevoCliente->ciudad = campo;
		getline(s, campo, ',');
		nuevoCliente->estado = campo;
		getline(s, campo, ',');
		nuevoCliente->zipCode = stoi(campo);
		getline(s, campo, ',');
		nuevoCliente->email = campo;
		getline(s, campo, ',');
		nuevoCliente->numeroTelefono = campo;
		getline(s, campo, ',');
		nuevoCliente->cumpleaņos = campo;
		getline(s, campo, ',');
		nuevoCliente->edad = stoi(campo);
		getline(s, campo, ',');
		nuevoCliente->CCtype = campo;
		getline(s, campo, ',');
		nuevoCliente->CCnumber = stoi(campo);
		getline(s, campo, ',');
		nuevoCliente->CVV2 = campo;
		getline(s, campo, ',');
		nuevoCliente->CCexpires = stoi(campo);
		getline(s, campo, ',');
		nuevoCliente->codigo = campo;
		getline(s, campo, ',');
		nuevoCliente->plazas = stoi(campo);

		agregarClienteCSV(nuevoCliente);

		if(nuevoCliente->numero > numeroCliente)
			numeroCliente = nuevoCliente->numero;
	}
	ultimoNumero = numeroCliente; //para asegurarse que el ultimo cliente sea el numero mas alto
	archivo.close();
}

void ListaClientes::agregarClienteCSV(Cliente *nuevo)
{
	if(cabeza == nullptr)
    {
		cabeza = nuevo;
    }
    else
    {
        Cliente* temp = cabeza;
		while(temp->siguiente != nullptr)
			temp = temp->siguiente;

        temp->siguiente = nuevo;
    }
    nuevo->siguiente = nullptr;
	total++;
}

void ListaClientes::ingresarCliente(Cliente *nuevo)
{
	if(cabeza == nullptr)
	{
		cabeza = nuevo;
	}
	else
	{
		Cliente* temp = cabeza;
		while(temp->siguiente != nullptr)
			temp = temp->siguiente;

		temp->siguiente = nuevo;
	}
	nuevo->siguiente = nullptr;
    nuevo->numero = ++numeroCliente;
	total++;
}

void ListaClientes::eliminarCliente(AnsiString nombre)
{
	if(cabeza == nullptr) return;

	Cliente *actual = cabeza;
	Cliente *anterior = nullptr;

	if(actual->nombre == nombre) //si el cliente a eliminar es la cabeza
	{
		cabeza = cabeza->siguiente;
		delete actual;
		total--;
        return;
	}

	actual = cabeza->siguiente;
	anterior = cabeza;

	while(actual != nullptr && actual->nombre != nombre)
	{
		anterior = actual;
        actual = actual->siguiente;
	}
    //si no se encontro el cliente
	if(actual == nullptr) return;

    //desvincula el nodo de la lista y elimina el cliente
	anterior->siguiente = actual->siguiente;
	delete actual;
    total--;
}

void ListaClientes::modificarCliente(AnsiString nombre, Cliente &modificado)
{
	Cliente *actual = buscarCliente(nombre);

	if(actual != nullptr)
	{
        actual->genero = modificado.genero;
		actual->nombre = modificado.nombre;
		actual->inicialMedia = modificado.inicialMedia;
		actual->apellido = modificado.apellido;
		actual->direccion = modificado.direccion;
		actual->ciudad = modificado.ciudad;
		actual->estado = modificado.estado;
		actual->zipCode = modificado.zipCode;
		actual->email = modificado.email;
		actual->numeroTelefono = modificado.numeroTelefono;
		actual->cumpleaņos = modificado.cumpleaņos;
		actual->edad = modificado.edad;
		actual->CCtype = modificado.CCtype;
		actual->CCnumber = modificado.CCnumber;
		actual->CVV2 = modificado.CVV2;
		actual->CCexpires = modificado.CCexpires;
		actual->codigo = modificado.codigo;
		actual->plazas = modificado.plazas;

        ShowMessage("Cliente modificado con exito");
	}
	else
	{
        ShowMessage("Cliente no encontrado");
    }
}

Cliente* ListaClientes::buscarCliente(AnsiString nombre)
{
	Cliente *actual = cabeza;
	while(actual != nullptr)  //recorrer la lista hasta encontrar el cliente
	{
		if(actual->nombre == nombre)
			return actual;

        actual = actual->siguiente;
	}
    return nullptr;   //devolver nullptr si no se encontro el cliente
}

//devolver el cliente actual del nodo
Cliente* ListaClientes::getCabeza()
{
    return cabeza;
}

//devolver el numero total de clientes del nodo
int ListaClientes::getTotal()
{
	return total;
}

// Metodos y constructores de la lista de destinos

ListaDestinos::ListaDestinos()
{
	cabeza = nullptr;
    total = 0;
}
ListaDestinos::~ListaDestinos()
{
	Destino *actual = cabeza;
	while(actual != nullptr)
	{
		Destino *temp = actual;
		actual = actual->siguiente;
        delete temp;
	}
    cabeza = nullptr;
}

void ListaDestinos::cargarListaDestinos(string nombreArchivo)
{
	ifstream archivo(nombreArchivo);
	if(!archivo.is_open()) return;

	string linea;
	while(getline(archivo, linea))
	{
		Destino *nuevoDestino = new Destino();
		stringstream ss(linea);
		string campo;

		getline(ss, campo, ','); nuevoDestino->nombrePaquete = campo;
		getline(ss, campo, ','); nuevoDestino->destino = campo;
		getline(ss, campo, ','); nuevoDestino->duracionDias = stoi(campo);
		getline(ss, campo, ','); nuevoDestino->costoUSD = stof(campo);
		getline(ss, campo, ','); nuevoDestino->partida = campo;
		getline(ss, campo, ','); nuevoDestino->codigo = campo;
		getline(ss, campo, ','); nuevoDestino->plazas = stoi(campo);

        agregarDestinoCSV(nuevoDestino);
	}
    archivo.close();
}

void ListaDestinos::agregarDestinoCSV(Destino *nuevo)
{
	if(cabeza == nullptr)
	{
		cabeza = nuevo;
	}
	else
	{
		Destino *temp = cabeza;
		while(temp->siguiente != nullptr)
			temp = temp->siguiente;

		temp->siguiente = nuevo;
	}
	nuevo->siguiente = nullptr;
    total++;
}

void ListaDestinos::ingresarDestino(Destino *nuevo)
{
	if(cabeza == nullptr)
	{
        cabeza = nuevo;
	}
	else
	{
        //si la lista no esta vacia la recorre hasta el ultimo nodo
		Destino *temp = cabeza;
		while(temp->siguiente != nullptr)
			temp = temp->siguiente;

        temp->siguiente = nuevo;
	}
	nuevo->siguiente = nullptr;
	total++;
}

void ListaDestinos::eliminarDestino(AnsiString nombrePaquete)
{
	if(cabeza == nullptr) return;

	Destino *actual = cabeza;
	Destino *anterior = nullptr;

	if(cabeza->nombrePaquete == nombrePaquete)
	{
		cabeza = cabeza->siguiente;
		delete actual;
		total--;
		return;
	}

	while(actual != nullptr && actual->nombrePaquete != nombrePaquete)
	{
		anterior = actual;
        actual = actual->siguiente;
	}

	if(actual == nullptr) return;

	anterior->siguiente = actual->siguiente;
	delete actual;
	total--;
}

Destino* ListaDestinos::buscarDestino(AnsiString nombrePaquete)
{
	Destino *actual = cabeza;
	while(actual != nullptr)
	{
		if(actual->nombrePaquete == nombrePaquete)
			return actual;

		actual = actual->siguiente;
	}
	return nullptr;
}

void ListaDestinos::modificarDestino(AnsiString nombrePaquete, Destino &modificado)
{
	Destino *actual = buscarDestino(nombrePaquete);
	if(actual != nullptr)
	{
		actual->nombrePaquete = modificado.nombrePaquete;
		actual->destino = modificado.destino;
		actual->duracionDias = modificado.duracionDias;
		actual->costoUSD = modificado.costoUSD;
		actual->partida = modificado.partida;
        actual->codigo = modificado.codigo;
		actual->plazas = modificado.plazas;

        ShowMessage("Destino modificado con exito");
	}
	else
	{
		ShowMessage("Destino no encontrado");
    }
}

Destino* ListaDestinos::getCabeza()
{
    return cabeza;
}

//devolver la cantidad de destinos dentro del nodo
int ListaDestinos::getTotal()
{
	return total;
}
