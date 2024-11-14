//---------------------------------------------------------------------------
#ifndef RegistroClientesH
#define RegistroClientesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include "principal.h"
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFormRegistroClientes : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TLabel *Label1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TLabel *Label2;
	TEdit *Edit9;
	TLabel *Label3;
	TEdit *Edit10;
	TEdit *Edit11;
	TEdit *Edit12;
	TEdit *Edit13;
	TEdit *Edit14;
	TEdit *Edit15;
	TLabel *Label4;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
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
	TButton *BotonRegistro;
	TButton *BotonSalida;
	void __fastcall BotonRegistroClick(TObject *Sender);
	void __fastcall BotonSalidaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormRegistroClientes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormRegistroClientes *FormRegistroClientes;
//---------------------------------------------------------------------------
#endif
