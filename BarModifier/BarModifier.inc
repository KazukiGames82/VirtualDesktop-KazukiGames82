;----------------------------------------------------
; Styles
;----------------------------------------------------

[VirtualDesktop-KazukiGames82.Style]
ImageAlpha=0
W=((((#TopHeight#+#TopBarIconHOffset#)*(#VirtualDesktop-KazukiGames82___Style_ShowNumbers#=0?1:0.5))-((#TopHeight#+#TopBarIconHOffset#)*(#VirtualDesktop-KazukiGames82___Style_ShowNumbers#=0?1:0.5))%1)+[VirtualDesktop-KazukiGames82_Icon_1:W]+([VirtualDesktop-KazukiGames82_Icon_2:W]+[VirtualDesktop-KazukiGames82_Icon_3:W]+[VirtualDesktop-KazukiGames82_Icon_4:W]+[VirtualDesktop-KazukiGames82_Icon_5:W]+[VirtualDesktop-KazukiGames82_Icon_6:W]+[VirtualDesktop-KazukiGames82_Icon_7:W]+[VirtualDesktop-KazukiGames82_Icon_8:W]+[VirtualDesktop-KazukiGames82_Icon_9:W]+[VirtualDesktop-KazukiGames82_Icon_10:W]+[VirtualDesktop-KazukiGames82_Icon_11:W])*((#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#-1)*-1))

[VirtualDesktop-KazukiGames82_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#VirtualDesktop-KazukiGames82]]]
MouseOverAction=[]
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
Container=SystemTrayContainer
Group=CustomApp[#VirtualDesktop-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#VirtualDesktop-KazukiGames82]] | CustomAppButton | VirtualDesktop-KazukiGames82
DynamicVariables=1

[VirtualDesktop-KazukiGames82_Icon]
ImageName="#VirtualDesktop-KazukiGames82___Buttons_Path#\#VirtualDesktop-KazukiGames82___Settings_Style#\Button[##CURRENTSECTION#][#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#=1?0:([##CURRENTSECTION#]>#VirtualDesktop-KazukiGames82___Desktop_Count#?0:(#TopBarTitleOpacity#/([##CURRENTSECTION#]<>#VirtualDesktop-KazukiGames82___Desktop_Current#?2:1))))
Padding=#SysIconPadding#
X=R
Y=0
H=(#TopHeight#+#TopBarIconHOffset#)
PreserveAspectRatio=1
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#TopBarTitleOpacity#"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Delay 10][!CommandMeasure MeasureActionTimer "Stop 3"]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=["#VirtualDesktop-KazukiGames82___Scripts_Path#\VirtualDesktop.#AHKType#" "MoveToDesktop" "[##CURRENTSECTION#]"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Current "[##CURRENTSECTION#]"][!UpdateMeasureGroup VirtualDesktop-KazukiGames82][!UpdateMeterGroup VirtualDesktop-KazukiGames82][!Redraw]
RightMouseDownAction=#ResetActiveFolders#[!Zpos 1 "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!Zpos 0 "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable ButtonSection ""][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#VirtualDesktop-KazukiGames82]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#VirtualDesktop-KazukiGames82]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#VirtualDesktop-KazukiGames82]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#VirtualDesktop-KazukiGames82]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings\Folder\Config\FolderConfig.inc"][!SetVariableGroup CurrentMeter "CustomApp[#VirtualDesktop-KazukiGames82]" "PrimaryConfig"][!SetVariable CurrentTray "CustomApp[#VirtualDesktop-KazukiGames82]" "Droptop\Other\BackgroundProcesses"][!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction CustomApp[#VirtualDesktop-KazukiGames82] "MouseOverAction"][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings" "Settings.ini"][!WriteKeyValue Variables CustomApp[#VirtualDesktop-KazukiGames82]X ([CustomApp[#VirtualDesktop-KazukiGames82]:X]+[CustomApp[#VirtualDesktop-KazukiGames82]:W]) "#@#GlobalVar\Control.inc"][!SetVariable CustomApp[#VirtualDesktop-KazukiGames82]X ([CustomApp[#VirtualDesktop-KazukiGames82]:X]+[CustomApp[#VirtualDesktop-KazukiGames82]:W]) "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!HideGroup Folders][!HideGroup T[#CustomApp[#VirtualDesktop-KazukiGames82]]][!#Hide# "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Folder"][!Hide "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!Hide "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings\Folder"][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=[#CustomApp[#VirtualDesktop-KazukiGames82]]?0:1)][!SetVariable ActiveTray (#ActiveTray#=[#CustomApp[#VirtualDesktop-KazukiGames82]]?0:[#CustomApp[#VirtualDesktop-KazukiGames82]])][!SetVariable ActiveTray (#ActiveTray#=[#CustomApp[#VirtualDesktop-KazukiGames82]]?0:[#CustomApp[#VirtualDesktop-KazukiGames82]]) "Droptop\Other\BackgroundProcesses"][!SetOption HighlightSelected Hidden (#ActiveTray#=[#CustomApp[#VirtualDesktop-KazukiGames82]]?1:0)][!SetOptionGroup CustomApp[#VirtualDesktop-KazukiGames82]Sys ImageTint ""][!SetOptionGroup CustomApp[#VirtualDesktop-KazukiGames82]Sys FontColor ""][!HideMeterGroup Highlight][#PowerMenuActionTimer[#PowerMenuLoadState]][!HideMeter HighlightSelected "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!HideGroup ContextBox][!HideGroup SettingsMenu][!SetWindowPosition ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+(([#CURRENTCONFIGX]+[#CURRENTSECTION#:X])<([#CURRENTCONFIGWIDTH]/2)?(([#CURRENTCONFIGWIDTH]-[#CURRENTSECTION#:X])<((#SCREENAREAWIDTH#/2)+(100*#DroptopSize#))?[#CURRENTSECTION#:W]:0):[#CURRENTSECTION#:W])-1) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "(([#CURRENTCONFIGX]+[#CURRENTSECTION#:X])<([#CURRENTCONFIGWIDTH]/2)?(([#CURRENTCONFIGWIDTH]-[#CURRENTSECTION#:X])<((#SCREENAREAWIDTH#/2)+(100*#DroptopSize#))?100:0):100)%" "0" "Droptop Community Apps\Apps\VirtualDesktop-KazukiGames82\Settings"][!UpdateMeasure CurrentAppX "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!Redraw "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!UpdateMeter *][!Redraw][!Log "#ErrorMessage#" Notice][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!#Toggle# "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#VirtualDesktop-KazukiGames82]Num]]\Settings"][!#Hide# "Droptop\Other\Folders\Folder#ActiveFolder#"][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]

;----------------------------------------------------

[VirtualDesktop-KazukiGames82_Style_Icon_0]

[VirtualDesktop-KazukiGames82_Style_Icon_1]
MaskImageName="#VirtualDesktop-KazukiGames82___Buttons_Path#\Mask\1\#VirtualDesktop-KazukiGames82___Desktop_Current#.png"
ImageAlpha=#TopBarTitleOpacity#
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
MouseScrollUpAction=["#VirtualDesktop-KazukiGames82___Scripts_Path#\VirtualDesktop.#AHKType#" "NextDesktop"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Current "([#VirtualDesktop-KazukiGames82___Desktop_Current]>=[#VirtualDesktop-KazukiGames82___Desktop_Count]?1:([#VirtualDesktop-KazukiGames82___Desktop_Current]+1))"][!UpdateMeasureGroup VirtualDesktop-KazukiGames82][!UpdateMeterGroup VirtualDesktop-KazukiGames82][!Redraw]
MouseScrollDownAction=["#VirtualDesktop-KazukiGames82___Scripts_Path#\VirtualDesktop.#AHKType#" "PreviousDesktop"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Current "([#VirtualDesktop-KazukiGames82___Desktop_Current]=1?[#VirtualDesktop-KazukiGames82___Desktop_Count]:([#VirtualDesktop-KazukiGames82___Desktop_Current]-1))"][!UpdateMeasureGroup VirtualDesktop-KazukiGames82][!UpdateMeterGroup VirtualDesktop-KazukiGames82][!Redraw]
MouseOverAction=[!Delay 10][!CommandMeasure MeasureActionTimer "Stop 3"]
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=

;----------------------------------------------------

[VirtualDesktop-KazukiGames82_Style_Mask_0]
MaskImageName="#SKINSPATH#Droptop Community Apps\Apps\VirtualDesktop-KazukiGames82\Button\Medium\Boxs\Mask\0\0.png"
W=(((((#TopHeight#+#TopBarIconHOffset#)*([##CURRENTSECTION#]<>(#VirtualDesktop-KazukiGames82___Desktop_Current#>=11?11:#VirtualDesktop-KazukiGames82___Desktop_Current#)?1:(#VirtualDesktop-KazukiGames82___Style_Large#=1?1.25:1)))-((#TopHeight#+#TopBarIconHOffset#)*([##CURRENTSECTION#]<>(#VirtualDesktop-KazukiGames82___Desktop_Current#>=11?11:#VirtualDesktop-KazukiGames82___Desktop_Current#)?1:(#VirtualDesktop-KazukiGames82___Style_Large#=1?1.25:1)))%1)*(#VirtualDesktop-KazukiGames82___Desktop_Count#>=[##CURRENTSECTION#]?1:0))*((#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#-1)*-1))

[VirtualDesktop-KazukiGames82_Style_Mask_1]
ImageName="#VirtualDesktop-KazukiGames82___Buttons_Path#\#VirtualDesktop-KazukiGames82___Settings_Style#\Button0[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
MaskImageName="#SKINSPATH#Droptop Community Apps\Apps\VirtualDesktop-KazukiGames82\Button\Medium\Boxs\Mask\1\[##CURRENTSECTION#].png"
W=(((((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*(#VirtualDesktop-KazukiGames82___Desktop_Count#>=[##CURRENTSECTION#]?1:0))*((#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#-1)*-1))

;----------------------------------------------------

[VirtualDesktop-KazukiGames82_Style_Last_0]

[VirtualDesktop-KazukiGames82_Style_Last_1]
MaskImageName="#SKINSPATH#Droptop Community Apps\Apps\VirtualDesktop-KazukiGames82\Button\Medium\Boxs\Mask\1\More.png"

;----------------------------------------------------
; Measures
;----------------------------------------------------

[VirtualDesktop-KazukiGames82_Measure_Set_Focus]
Measure=Calc
Formula=(#VirtualDesktop-KazukiGames82___Desktop_Current#>=11?11:#VirtualDesktop-KazukiGames82___Desktop_Current#)
OnUpdateAction=[!SetOptionGroup VirtualDesktop-KazukiGames82 ImageName ""][!SetOption VirtualDesktop-KazukiGames82_Icon_[&VirtualDesktop-KazukiGames82_Measure_Set_Focus] ImageName "#*VirtualDesktop-KazukiGames82___Buttons_Path*#\#*VirtualDesktop-KazukiGames82___Settings_Style*#\Button0[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png"]
DynamicVariables=1
Group=VirtualDesktop-KazukiGames82
Disabled=#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

;----------------------------------------------------
; Meters
;----------------------------------------------------

[VirtualDesktop-KazukiGames82_Icon_0]
Meter=Image 
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon
ImageAlpha=0
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#VirtualDesktop-KazukiGames82]]]
W=(((((#TopHeight#+#TopBarIconHOffset#)*(#VirtualDesktop-KazukiGames82___Style_ShowNumbers#=0?1:0.5))-((#TopHeight#+#TopBarIconHOffset#)*(#VirtualDesktop-KazukiGames82___Style_ShowNumbers#=0?1:0.5))%1)+[VirtualDesktop-KazukiGames82_Icon_1:W]+[VirtualDesktop-KazukiGames82_Icon_2:W]+[VirtualDesktop-KazukiGames82_Icon_3:W]+[VirtualDesktop-KazukiGames82_Icon_4:W]+[VirtualDesktop-KazukiGames82_Icon_5:W]+[VirtualDesktop-KazukiGames82_Icon_6:W]+[VirtualDesktop-KazukiGames82_Icon_7:W]+[VirtualDesktop-KazukiGames82_Icon_8:W]+[VirtualDesktop-KazukiGames82_Icon_9:W]+[VirtualDesktop-KazukiGames82_Icon_10:W]+[VirtualDesktop-KazukiGames82_Icon_11:W])*((#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#-1)*-1))
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=[]

[VirtualDesktop-KazukiGames82_Icon_1]
Meter=Image 
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers# | VirtualDesktop-KazukiGames82_Style_Icon_#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#VirtualDesktop-KazukiGames82]]]+(((#TopHeight#+#TopBarIconHOffset#)*(#VirtualDesktop-KazukiGames82___Style_ShowNumbers#=0?0.5:0.25))-((#TopHeight#+#TopBarIconHOffset#)*(#VirtualDesktop-KazukiGames82___Style_ShowNumbers#=0?0.5:0.25))%1))

[VirtualDesktop-KazukiGames82_Icon_2]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_3]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_4]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_5]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_6]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_7]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_8]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_9]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_10]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#

[VirtualDesktop-KazukiGames82_Icon_11]
Meter=Image
MeterStyle=InfoStyle | VirtualDesktop-KazukiGames82_Style | VirtualDesktop-KazukiGames82_Icon | VirtualDesktop-KazukiGames82_Style_Mask_#VirtualDesktop-KazukiGames82___Style_ShowNumbers# | VirtualDesktop-KazukiGames82_Style_Last_#VirtualDesktop-KazukiGames82___Style_ShowNumbers#
LeftMouseDownAction=["#@#\Scripts\DroptopAHK.#AHKType#" "TaskView"]
ImageAlpha=(#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop#=1?0:(#TopBarTitleOpacity#/(#VirtualDesktop-KazukiGames82___Desktop_Current#>=11?1:2)))
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha "(#*VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop*#=1?0:(#*TopBarTitleOpacity*#/(#*VirtualDesktop-KazukiGames82___Desktop_Current*#>=11?1:2)))"][!UpdateMeter #CURRENTSECTION#][!Redraw]