[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

[VirtualDesktop-KazukiGames82___Desktop_Script]
Measure=Script
ScriptFile=#VirtualDesktop-KazukiGames82___Scripts_Path_2#\Desktop.lua
UpdateDivider=-1

;----------------------------------------------------------------------
; Virtual Desktop - Count

[VirtualDesktop-KazukiGames82___Registry_Count_Desktop]
Measure=Registry
RegHKey=HKEY_CURRENT_USER 
RegKey=Software\Microsoft\Windows\CurrentVersion\Explorer\VirtualDesktops
RegValue=VirtualDesktopIDs
OnUpdateAction=[!UpdateMeasureGroup VirtualDesktop-KazukiGames82___Measures_Count][!WriteKeyValue Variables VirtualDesktop-KazukiGames82___Desktop_Count "[VirtualDesktop-KazukiGames82___Count_Desktop]" "#VirtualDesktop-KazukiGames82___Variables_Path#"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Count "[VirtualDesktop-KazukiGames82___Count_Desktop]" "Droptop\Dropdownbar"][#VirtualDesktop-KazukiGames82___TopBar_Update_[#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop]][!SetOption VirtualDesktop-KazukiGames82___Registry_Count_Desktop OnUpdateAction ""]
OnChangeAction=[!UpdateMeasureGroup VirtualDesktop-KazukiGames82___Measures_Count][!WriteKeyValue Variables VirtualDesktop-KazukiGames82___Desktop_Count "[VirtualDesktop-KazukiGames82___Count_Desktop]" "#VirtualDesktop-KazukiGames82___Variables_Path#"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Count "[VirtualDesktop-KazukiGames82___Count_Desktop]" "Droptop\Dropdownbar"][#VirtualDesktop-KazukiGames82___TopBar_Update_[#VirtualDesktop-KazukiGames82___Settings_ShowCurrentDesktop]]
RegExpSubstitute=1
Substitute="(.{32})":"\1 "
UpdateDivider=1
Group=VirtualDesktop-KazukiGames82

[VirtualDesktop-KazukiGames82___Count_Desktop_Raw]
Measure=String
String=[VirtualDesktop-KazukiGames82___Registry_Count_Desktop]
RegExpSubstitute=1
Substitute="\s":"",".{32}":"+1"
DynamicVariables=1
UpdateDivider=-1
Group=VirtualDesktop-KazukiGames82___Measures_Count

[VirtualDesktop-KazukiGames82___Count_Desktop]
Measure=Calc
Formula=([VirtualDesktop-KazukiGames82___Count_Desktop_Raw])
DynamicVariables=1
UpdateDivider=-1
Group=VirtualDesktop-KazukiGames82___Measures_Count

;----------------------------------------------------------------------
; Virtual Desktop - Current

[VirtualDesktop-KazukiGames82___Registry_SessionInfo_Desktop]
Measure=Registry
RegHKey=HKEY_CURRENT_USER 
RegKey=Software\Microsoft\Windows\CurrentVersion\Explorer\SessionInfo
OutputType=SubKeyList
UpdateDivider=-1

[VirtualDesktop-KazukiGames82___Registry_Current_Desktop]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=[#VirtualDesktop-KazukiGames82___Registry_RegKey_Current_[#Win10Apps]]
RegValue=CurrentVirtualDesktop
OnUpdateAction=[!SetVariable VirtualDesktop-KazukiGames82___Temp_Desktop_Current "[&VirtualDesktop-KazukiGames82___Desktop_Script:GetCurrentDesktop()]"][!WriteKeyValue Variables VirtualDesktop-KazukiGames82___Desktop_Current "[#VirtualDesktop-KazukiGames82___Temp_Desktop_Current]" "#VirtualDesktop-KazukiGames82___Variables_Path#"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Current "[#VirtualDesktop-KazukiGames82___Temp_Desktop_Current]" "Droptop\Dropdownbar"]#VirtualDesktop-KazukiGames82___TopBar_Update_1#[!SetOption VirtualDesktop-KazukiGames82___Registry_Current_Desktop OnUpdateAction ""]
OnChangeAction=[!SetVariable VirtualDesktop-KazukiGames82___Temp_Desktop_Current "[&VirtualDesktop-KazukiGames82___Desktop_Script:GetCurrentDesktop()]"][!WriteKeyValue Variables VirtualDesktop-KazukiGames82___Desktop_Current "[#VirtualDesktop-KazukiGames82___Temp_Desktop_Current]" "#VirtualDesktop-KazukiGames82___Variables_Path#"][!SetVariable VirtualDesktop-KazukiGames82___Desktop_Current "[#VirtualDesktop-KazukiGames82___Temp_Desktop_Current]" "Droptop\Dropdownbar"]#VirtualDesktop-KazukiGames82___TopBar_Update_1#
UpdateDivider=1
Group=VirtualDesktop-KazukiGames82
