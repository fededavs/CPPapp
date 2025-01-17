	//---------------------------------------------------------------------------
#ifndef ClientesFormH
#define ClientesFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "Listas.h"
#include "principal.h"
//---------------------------------------------------------------------------
class TClientes : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *ClientesGrid;
	TLabel *Label1;
	TButton *Button1;
	void __fastcall ClientesGridClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	ListaClientes listaClientes;
public:		// User declarations
	__fastcall TClientes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TClientes *Clientes;
//---------------------------------------------------------------------------
#endif
