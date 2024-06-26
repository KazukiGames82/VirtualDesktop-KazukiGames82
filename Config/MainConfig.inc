;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=5

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

WebViewHeight=0

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

HLSelectedGroup1B1=[[#*VirtualDesktop-KazukiGames___Selected_Box*]:X],[[#*VirtualDesktop-KazukiGames___Selected_Box*]:Y],[[#*VirtualDesktop-KazukiGames___Selected_Box*]:W],[[#*VirtualDesktop-KazukiGames___Selected_Box*]:H],(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],([#*HighlightShapeOpacity*]/[#*HighlightShapeOpacityDivisor2B*]) | StrokeWidth 0
HLSelectedGroup1B2=([[#*VirtualDesktop-KazukiGames___Selected_Box*]:X]+(0.5*#DroptopSize#)),([[#*VirtualDesktop-KazukiGames___Selected_Box*]:Y]+(0.5*#DroptopSize#)),([[#*VirtualDesktop-KazukiGames___Selected_Box*]:W]-(0.5*#DroptopSize#)*2),([[#*VirtualDesktop-KazukiGames___Selected_Box*]:H]-(0.5*#DroptopSize#)*2),(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

VirtualDesktop-KazukiGames___Hovered_Box=DesktopBox0
VirtualDesktop-KazukiGames___Selected_Box=DesktopBox[&VirtualDesktop-KazukiGames82-FailSafe]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]

[IconStyle]
Y=[[##CURRENTSECTION#]:Y]

[ArrowStyleB]
Hidden=1

[BoxStyle]

[TextStyle]

[DesktopBoxStyle]
Shape=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-((10*#DroptopSize#)-(10*#DroptopSize#)%1+#DropdownStrokeWidth#-#DropdownStrokeWidth#%1)*((#VirtualDesktop-KazukiGames82___Desktop_Count#%2)=1?([##CURRENTSECTION#]=#VirtualDesktop-KazukiGames82___Desktop_Count#?2:3):3))/((#VirtualDesktop-KazukiGames82___Desktop_Count#%2)=1?([##CURRENTSECTION#]=#VirtualDesktop-KazukiGames82___Desktop_Count#?1:2):2)),(50*#DroptopSize#),(#DropdownBGCorner#/2) | Extend FillColor | StrokeWidth 0
FillColor=FillColor #DropdownFontColor1#,18
X=(((10*#DroptopSize#)-(10*#DroptopSize#)%1+#DropdownStrokeWidth#-#DropdownStrokeWidth#%1)+[DesktopBox[##CURRENTSECTION#_Return]:XW]*(([##CURRENTSECTION#]%2)=0?1:0))
Y=(([DesktopBox[##CURRENTSECTION#_Return]:YH]+(([##CURRENTSECTION#]%2)=0?(-[DesktopBox1:H]):((10*#DroptopSize#)-(10*#DroptopSize#)%1)))*(#VirtualDesktop-KazukiGames82___Desktop_Count#>([##CURRENTSECTION#]-1)?1:0))
DynamicVariables=1
Hidden=(#VirtualDesktop-KazukiGames82___Desktop_Count#>([##CURRENTSECTION#]-1)?(10>=[##CURRENTSECTION#]?0:1):1)
Group=VirtualDesktop-KazukiGames82

[NoActionStyle]
RightMouseUpAction=
RightMouseDownAction=
LeftMouseUpAction=
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=

[HighlightStyle]
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
Group=Highlight | HL
DynamicVariables=1

[DesktopBoxStringStyle]
StringAlign=CenterCenter
FontSize=(10*#DroptopSize#)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/([#[#VirtualDesktop-KazukiGames___Selected_Box]]=[##CURRENTSECTION#]?1:2))
FontWeight=600
Padding=((10*#DroptopSize#)-(10*#DroptopSize#)%1),0,((10*#DroptopSize#)-(10*#DroptopSize#)%1),0
X=([DesktopBox[##CURRENTSECTION#]:X]+[DesktopBox[##CURRENTSECTION#]:W]/2)
Y=([DesktopBox[##CURRENTSECTION#]:Y]+[DesktopBox[##CURRENTSECTION#]:H]/2)
W=([DesktopBox[##CURRENTSECTION#]:W]-((10*#DroptopSize#)-(10*#DroptopSize#)%1)*2)
H=([DesktopBox[##CURRENTSECTION#]:H])
Text=Desktop [##CURRENTSECTION#]
MouseOverAction=[!SetVariable VirtualDesktop-KazukiGames___Hovered_Box #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeterGroup Group1][!UpdateMeterGroup Highlight][!Redraw]
MouseLeaveAction=[!SetVariable VirtualDesktop-KazukiGames___Hovered_Box DesktopBox0][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/([#[#*VirtualDesktop-KazukiGames___Selected_Box*]]=[##*CURRENTSECTION*#]?1:2))"][!UpdateMeterGroup Group1][!UpdateMeterGroup Highlight][!Redraw]
LeftMouseDownAction=["#VirtualDesktop-KazukiGames82___Scripts_Path#\VirtualDesktop.#AHKType#" "MoveToDesktop" "[##CURRENTSECTION#]"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Current "[##CURRENTSECTION#]"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Current "[##CURRENTSECTION#]" "Droptop\Dropdownbar"][!UpdateMeasure VirtualDesktop-KazukiGames82-FailSafe][!UpdateMeasureGroup VirtualDesktop-KazukiGames82 "Droptop\Dropdownbar"][!UpdateMeterGroup VirtualDesktop-KazukiGames82 "Droptop\Dropdownbar"][!Redraw "Droptop\Dropdownbar"][!UpdateMeter *][!Redraw]
Hidden=(#VirtualDesktop-KazukiGames82___Desktop_Count#>([##CURRENTSECTION#]-1)?(10>=[##CURRENTSECTION#]?0:1):1)
Group=Group1

;-----------------------------------------

[DesktopBox0]
Meter=Shape

[DesktopBox1]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox2]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox3]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox4]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox5]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox6]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox7]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox8]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox9]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox10]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

[DesktopBox11]
Meter=Shape
MeterStyle=DesktopBoxStyle | NoActionStyle

;----------------------------------------------------

[Group1_HighlightBackground]
Meter=Shape
MeterStyle=HighlightStyle

[Group1_HighlightSelected]
Meter=Shape
MeterStyle=HighlightStyle

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[DesktopString1]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString2]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString3]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString4]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString5]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString6]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString7]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString8]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString9]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString10]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

[DesktopString11]
Meter=String
MeterStyle=InfoStyle | DesktopBoxStringStyle

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

;----------------------------------------------------
