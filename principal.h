//---------------------------------------------------------------------------
#ifndef principalH
#define principalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "RegistroClientes.h"
#include "EditarCliente.h"
#include "ClientesForm.h"
#include "DestinosForm.h"
#include "Listas.h"
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Titulo;
	TMainMenu *MainMenu1;
	TMenuItem *Ingresar1;
	TMenuItem *Clientes1;
	TMenuItem *Opciones1;
	TMenuItem *Editar1;
	TMenuItem *Eliminar1;
	TMenuItem *Ver1;
	TMenuItem *LeerClientes;
	TMenuItem *PaquetesTuristicos;
	TMenuItem *Inicio1;
	TButton *BotonBuscarEditar;
	TLabel *LabelEditarCliente;
	TEdit *IngresarClienteEditar;
	TLabel *LabelEliminarCliente;
	TEdit *IngresarClienteEliminar;
	TButton *BotonBuscarEliminar;
	void __fastcall Clientes1Click(TObject *Sender);
	void __fastcall Editar1Click(TObject *Sender);
	void __fastcall BotonBuscarEditarClick(TObject *Sender);
	void __fastcall LimpiarEditar();
    void __fastcall LimpiarEliminar();
	void __fastcall Eliminar1Click(TObject *Sender);
	void __fastcall Inicio1Click(TObject *Sender);
	void __fastcall LeerClientesClick(TObject *Sender);
	void __fastcall PaquetesTuristicosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
