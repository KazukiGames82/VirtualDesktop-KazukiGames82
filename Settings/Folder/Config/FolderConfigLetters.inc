[Rainmeter]
Group=DroptopSuite | Tray | Folders | Submenus
LeftMouseDownAction=[]

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=0
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1

[Variables]

; 1Letter=A
; 2Letter=B
; 3Letter=C
; 4Letter=D
; 5Letter=E
; 6Letter=F
; 7Letter=G
; 8Letter=H
; 9Letter=I
; 10Letter=J
; 11Letter=K
; 12Letter=L
; 13Letter=M
; 14Letter=N
; 15Letter=O
; 16Letter=P
; 17Letter=Q
; 18Letter=R
; 19Letter=S
; 20Letter=T
; 21Letter=U
; 22Letter=V
; 23Letter=W
; 24Letter=X
; 25Letter=Y
; 26Letter=Z

; AIndex=1
; BIndex=2
; CIndex=3
; DIndex=4
; EIndex=5
; FIndex=6
; GIndex=7
; HIndex=8
; IIndex=9
; JIndex=10
; KIndex=11
; LIndex=12
; MIndex=13
; NIndex=14
; OIndex=15
; PIndex=16
; QIndex=17
; RIndex=18
; SIndex=19
; TIndex=20
; UIndex=21
; VIndex=22
; WIndex=23
; XIndex=24
; YIndex=25
; ZIndex=26

; ;-----------------------------------------

; [Test]
; Measure=String
; String=[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]
; DynamicVariables=1

; [MeasureLetterZ]
; Measure=Calc
; IfCondition=1=1
; IfTrueAction=[!SetVariable [#[#Disk[#DiskNumber]]Index]Letter "Z"][!Update]
; UpdateDivider=-1

; [InfoStyle]
; Text=[#ItemText[##CURRENTSECTION#]]
; LeftMouseDownAction=#Action0#
; Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

; [IconStyle]
; ImageName=#CURRENTPATH#Icons\#FolderNumber#\[##CURRENTSECTION#]Icon.png
; W=#IconW#
; H=#IconW#
; Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

; [LetterStyle]
; StringAlign=CenterCenter
; X=R
; Y=r
; W=((#DropdownMenuWidth#/5)-((#DropdownMenuWidth#/5)%1))
; H=#DropdownItemHeight#
; Padding=0,0,0,0
; Text=[##CURRENTSECTION#Letter]
; LeftMouseDownAction=[!MoveMeter ([#CurrentSubFolder#:X]+#DropdownMenuCutout#+#DropdownHLOffsetX#) [#CurrentSubFolder#:Y] HighlightSelected][!ShowMeter HighlightSelected][!SetVariable disk#DiskNumber# "[#[#CURRENTSECTION]Letter]"][!SetVariable disk#DiskNumber# "[#[#CURRENTSECTION]Letter]" "Droptop Community Apps\Apps\Disks-Phan\Settings"][!WriteKeyValue Variables disk#DiskNumber# "[#[#CURRENTSECTION]Letter]" "#SKINSPATH#Droptop Community Apps\Apps\Disks-Phan\Variables\Variables.inc"][!UpdateMeter * "Droptop Community Apps\Apps\Disks-Phan\Settings"][!Redraw "Droptop Community Apps\Apps\Disks-Phan\Settings"][!UpdateMeter *][!Redraw]
; Hidden=0

; [HighlightBackground]
; Meter=Shape
; Shape=Rectangle ([#CurrentSubFolder#:X]+#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],([#CurrentSubFolder#:W]-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color #DropdownItemHL#,(#HighlightShapeOpacity#/#HighlightShapeOpacityDivisor1B#) | StrokeWidth 0
; Shape2=Rectangle ([#CurrentSubFolder#:X]+#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],([#CurrentSubFolder#:W]-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
; Shape3=Rectangle ([#CurrentSubFolder#:X]+#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],([#CurrentSubFolder#:W]-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
; X=1
; Group=Highlight | HL
; DynamicVariables=1
; Hidden=1

; [HighlightSelected]
; Meter=Shape
; Shape=Rectangle 0,0,([#CurrentSubFolder#:W]-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color #DropdownItemHL#,(#HighlightShapeOpacity#/#HighlightShapeOpacityDivisor2B#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
; Shape2=Rectangle 0,0,([#CurrentSubFolder#:W]-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
; Shape3=Rectangle 0,0,([#CurrentSubFolder#:W]-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
; X=1
; Group=HighlightSelected
; DynamicVariables=1
; UpdateDivider=-1
; Hidden=1

; ;-----------------------------------------

; [1]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle
; X=([#CURRENTSECTION#:W]/2)
; Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

; [2]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [3]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [4]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [5]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [6]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle
; X=([#CURRENTSECTION#:W]/2)
; Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*1))

; [7]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [8]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [9]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [10]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [11]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle
; X=([#CURRENTSECTION#:W]/2)
; Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*2))

; [12]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [13]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [14]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [15]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [16]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle
; X=([#CURRENTSECTION#:W]/2)
; Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*3))

; [17]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [18]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [19]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [20]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [21]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle
; X=([#CURRENTSECTION#:W]/2)
; Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*4))

; [22]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [23]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [24]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle

; [25]
; Meter=String
; MeterStyle=InfoStyle | LetterStyle