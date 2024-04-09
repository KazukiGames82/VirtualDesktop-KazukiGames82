#SingleInstance, force
#NoTrayIcon
SetWorkingDir %A_ScriptDir%

hVirtualDesktopAccessor := DllCall("LoadLibrary", "Str", A_ScriptDir . "\VirtualDesktopAccessor.dll", "Ptr")
global GoToDesktopNumberProc := DllCall("GetProcAddress", Ptr, hVirtualDesktopAccessor, AStr, "GoToDesktopNumber", "Ptr")

Goto, %1%

;----------

DoNothing:
ExitApp

;----------

MoveToDesktop:
desktop = %2%
DllCall(GoToDesktopNumberProc, Int, desktop-1)
DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp
