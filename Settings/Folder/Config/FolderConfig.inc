;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
DefaultUpdateDivider=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=7

FolderNumber=5

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

FlatTopShape=

IconW=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
IconH=((16*#DroptopSize#)-((16*#DroptopSize#)%1))

KazukiGames82-IconWidth=0

DividerExists0=0
DividerY0=0

CurrentSubFolder=1

VirtualDesktop-KazukiGames82____Option_Hover=2Icon

HLSelectedShapeCustom1=0,0,[[#*VirtualDesktop-KazukiGames82___Settings_Style*]Icon:W],[[#*VirtualDesktop-KazukiGames82___Settings_Style*]Icon:H],[#*DropdownHighlightCorner*] | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
HLSelectedShapeCustom2=(0.5*#DroptopSize#),(0.5*#DroptopSize#),([[#*VirtualDesktop-KazukiGames82___Settings_Style*]Icon:W]-(1*#DroptopSize#)),([[#*VirtualDesktop-KazukiGames82___Settings_Style*]Icon:H]-(1*#DroptopSize#)),[#*DropdownHighlightCorner*] | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

;----------------------------------------------------

ItemIsToggle0=0
ItemIsCheckmark0=0
ItemCheckmarkGroup0=
ItemCheckmarkValue0=
ItemToggleKey0=
ItemText0=
ItemIconFileName0=blank
ItemAction0=

ItemIsToggle1=0
ItemIsCheckmark1=0
ItemCheckmarkGroup1=
ItemCheckmarkValue1=
ItemToggleKey1=
ItemText1=
ItemIconFileName1=blank
ItemAction1=

ItemIsToggle2=0
ItemIsCheckmark2=0
ItemCheckmarkGroup2=
ItemCheckmarkValue2=
ItemToggleKey2=
ItemText2=
ItemIconFileName2=blank
ItemAction2=

ItemIsToggle3=0
ItemIsCheckmark3=0
ItemCheckmarkGroup3=
ItemCheckmarkValue3=
ItemToggleKey3=
ItemText3=
ItemIconFileName3=blank
ItemAction3=

ItemIsToggle4=0
ItemIsCheckmark4=0
ItemCheckmarkGroup4=
ItemCheckmarkValue4=
ItemToggleKey4=
ItemText4=
ItemIconFileName4=blank
ItemAction4=

ItemIsToggle5=0
ItemIsCheckmark5=0
ItemCheckmarkGroup5=
ItemCheckmarkValue5=
ItemToggleKey5=
ItemText5=
ItemIconFileName5=blank
ItemAction5=

ItemIsToggle6=0
ItemIsCheckmark6=0
ItemCheckmarkGroup6=
ItemCheckmarkValue6=
ItemToggleKey6=
ItemText6=
ItemIconFileName6=blank
ItemAction6=

ItemIsToggle7=0
ItemIsCheckmark7=0
ItemCheckmarkGroup7=
ItemCheckmarkValue7=
ItemToggleKey7=
ItemText7=
ItemIconFileName7=blank
ItemAction7=

ItemIsToggle8=0
ItemIsCheckmark8=0
ItemCheckmarkGroup8=
ItemCheckmarkValue8=
ItemToggleKey8=
ItemText8=
ItemIconFileName8=blank
ItemAction8=

ItemIsToggle9=0
ItemIsCheckmark9=0
ItemCheckmarkGroup9=
ItemCheckmarkValue9=
ItemToggleKey9=
ItemText9=
ItemIconFileName9=blank
ItemAction9=

ItemIsToggle10=0
ItemIsCheckmark10=0
ItemCheckmarkGroup10=
ItemCheckmarkValue10=
ItemToggleKey10=
ItemText10=0
ItemIconFileName10=blank
ItemAction10=

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#

[IconStyle]

[ArrowStyleB]
Hidden=1

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

[KazukiGames82-IconWidth]
Meter=Image
MeterStyle=IconStyle

[1Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[2Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[3Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[4Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[5Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[6Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[7Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[8Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[9Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

;-----------------------------------------

[DividerStyle]
Shape=#DividerShapeSub#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
Container=AnimationContainer
DynamicVariables=1

[Divider1]
Meter=Shape
MeterStyle=DividerStyle

[Divider2]
Meter=Shape
MeterStyle=DividerStyle

[Divider3]
Meter=Shape
MeterStyle=DividerStyle

[Divider4]
Meter=Shape
MeterStyle=DividerStyle

[Divider5]
Meter=Shape
MeterStyle=DividerStyle

[Divider6]
Meter=Shape
MeterStyle=DividerStyle

[Divider7]
Meter=Shape
MeterStyle=DividerStyle

[Divider8]
Meter=Shape
MeterStyle=DividerStyle

[Divider9]
Meter=Shape
MeterStyle=DividerStyle
