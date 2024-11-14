object Destinos: TDestinos
  Left = 0
  Top = 0
  Caption = 'Destinos'
  ClientHeight = 671
  ClientWidth = 883
  Color = clActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 304
    Top = 74
    Width = 226
    Height = 37
    Caption = 'Paquetes turisticos:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object DestinosGrid: TStringGrid
    Left = 72
    Top = 152
    Width = 737
    Height = 489
    TabOrder = 0
    OnClick = DestinosGridClick
  end
  object BotonVolver: TButton
    Left = 56
    Top = 32
    Width = 81
    Height = 33
    Caption = 'Volver'
    TabOrder = 1
    OnClick = BotonVolverClick
  end
end
