//---------------------------------------------------------------------------
#ifndef DestinosFormH
#define DestinosFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "Listas.h"
#include "principal.h"
//---------------------------------------------------------------------------
class TDestinos : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *DestinosGrid;
	TButton *BotonVolver;
	TLabel *Label1;
	void __fastcall BotonVolverClick(TObject *Sender);
	void __fastcall DestinosGridClick(TObject *Sender);
private:	// User declarations
    ListaDestinos listaDestinos;
public:		// User declarations
	__fastcall TDestinos(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDestinos *Destinos;
//---------------------------------------------------------------------------
#endif
