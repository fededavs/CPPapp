object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'APP'
  ClientHeight = 547
  ClientWidth = 925
  Color = clGradientActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Titulo: TLabel
    Left = 280
    Top = 32
    Width = 355
    Height = 65
    Caption = 'Agencia de viajes'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -48
    Font.Name = 'Segoe UI'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object LabelEditarCliente: TLabel
    Left = 345
    Top = 168
    Width = 205
    Height = 50
    Caption = 'Ingrese el  nombre del '#13#10'cliente que desea editar:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object LabelEliminarCliente: TLabel
    Left = 345
    Top = 168
    Width = 225
    Height = 50
    Caption = 'Ingrese el  nombre del '#13#10'cliente que desea eliminar:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object BotonBuscarEditar: TButton
    Left = 376
    Top = 287
    Width = 121
    Height = 41
    Cursor = crHandPoint
    Caption = 'Buscar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = BotonBuscarEditarClick
  end
  object IngresarClienteEditar: TEdit
    Left = 360
    Top = 239
    Width = 153
    Height = 23
    TabOrder = 1
  end
  object IngresarClienteEliminar: TEdit
    Left = 360
    Top = 239
    Width = 153
    Height = 23
    TabOrder = 2
  end
  object BotonBuscarEliminar: TButton
    Left = 376
    Top = 287
    Width = 121
    Height = 41
    Cursor = crHandPoint
    Caption = 'Buscar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = BotonBuscarEditarClick
  end
  object MainMenu1: TMainMenu
    BiDiMode = bdLeftToRight
    ParentBiDiMode = False
    Left = 56
    Top = 16
    object Ingresar1: TMenuItem
      Caption = 'Ingresar'
      object Clientes1: TMenuItem
        Caption = 'Cliente'
        OnClick = Clientes1Click
      end
    end
    object Opciones1: TMenuItem
      Caption = 'Opciones'
      object Editar1: TMenuItem
        Caption = 'Editar'
        OnClick = Editar1Click
      end
      object Eliminar1: TMenuItem
        Caption = 'Eliminar'
        OnClick = Eliminar1Click
      end
    end
    object Ver1: TMenuItem
      Caption = 'Leer'
      object LeerClientes: TMenuItem
        Caption = 'Clientes'
        OnClick = LeerClientesClick
      end
      object PaquetesTuristicos: TMenuItem
        Caption = 'Paquetes turisticos'
        OnClick = PaquetesTuristicosClick
      end
    end
    object Inicio1: TMenuItem
      Caption = 'Inicio'
      OnClick = Inicio1Click
    end
  end
end
