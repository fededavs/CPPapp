//---------------------------------------------------------------------------

#ifndef EditarClienteH
#define EditarClienteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "principal.h"
//---------------------------------------------------------------------------
class TEditarClienteForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TEdit *Edit10;
	TEdit *Edit11;
	TEdit *Edit12;
	TEdit *Edit13;
	TEdit *Edit14;
	TEdit *Edit15;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
	TButton *BotonEditar;
	TButton *BotonSalida;
	void __fastcall BotonEditarClick(TObject *Sender);
	void __fastcall BotonSalidaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEditarClienteForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEditarClienteForm *EditarClienteForm;
//---------------------------------------------------------------------------
#endif
