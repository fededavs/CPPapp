//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("principal.cpp", Form1);
USEFORM("RegistroClientes.cpp", FormRegistroClientes);
USEFORM("ClientesForm.cpp", Clientes);
USEFORM("EditarCliente.cpp", EditarClienteForm);
USEFORM("DestinosForm.cpp", Destinos);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TFormRegistroClientes), &FormRegistroClientes);
		Application->CreateForm(__classid(TEditarClienteForm), &EditarClienteForm);
		Application->CreateForm(__classid(TClientes), &Clientes);
		Application->CreateForm(__classid(TDestinos), &Destinos);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
