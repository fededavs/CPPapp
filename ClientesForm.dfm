object Clientes: TClientes
  Left = 0
  Top = 0
  Caption = 'Clientes'
  ClientHeight = 706
  ClientWidth = 1022
  Color = clActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 328
    Top = 56
    Width = 292
    Height = 32
    Caption = 'Clientes totales registrados:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object ClientesGrid: TStringGrid
    Left = 30
    Top = 112
    Width = 960
    Height = 561
    ColCount = 19
    RowCount = 10
    TabOrder = 0
    OnClick = ClientesGridClick
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24)
  end
  object Button1: TButton
    Left = 56
    Top = 32
    Width = 81
    Height = 33
    Caption = 'Volver'
    TabOrder = 1
    OnClick = Button1Click
  end
end
