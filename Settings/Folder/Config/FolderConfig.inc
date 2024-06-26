;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=500

[Variables]
CustomAppPosition=5

FolderNumber=1

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

FlatTopShape=

DropdownMenuWidth=#DropdownSubMenuWidth#

WebViewHeight=0

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#
MouseOverAction=[!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
MouseLeaveAction=[!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]

[NoActionStyle0]

[NoActionStyle1]
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[IconStyle]
Y=[[##CURRENTSECTION#]:Y]
ImageName=#SKINSPATH#Droptop\@Resources\Icons\Fixed\medium\checkmark.png

[IconStyle2]
X=r

[ArrowStyleB]
Hidden=1

;-----------------------------------------

[1]
MeterStyle=InfoStyle

[2]
MeterStyle=InfoStyle

[3]
MeterStyle=InfoStyle

[4]
MeterStyle=InfoStyle

[5]
MeterStyle=InfoStyle | NoActionStyle#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#

[6]
MeterStyle=InfoStyle | NoActionStyle#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#

[7]
MeterStyle=InfoStyle | NoActionStyle#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#

[8]
MeterStyle=InfoStyle | NoActionStyle#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#

[9]
MeterStyle=InfoStyle | NoActionStyle#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#

[10]
MeterStyle=InfoStyle | NoActionStyle#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#

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

[2Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[3Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[4Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[5Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[6Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[7Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[8Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[9Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2

[10Arrow]
Meter=Image
MeterStyle=IconStyle | IconStyle2
