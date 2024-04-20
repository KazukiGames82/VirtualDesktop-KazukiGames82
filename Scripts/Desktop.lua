function Initialize()
end

function Update()
end

function GetDesktopCount()
    local DesktopMeasure = SKIN:GetMeasure('VirtualDesktop-KazukiGames82___Registry_Count_Desktop')
    local BinaryIDs = DesktopMeasure:GetStringValue()
    local DesktopCount = 0

    for ID in string.gmatch(BinaryIDs, "(%S+)") do
        DesktopCount = DesktopCount + 1
    end

    return DesktopCount
end

function GetCurrentDesktop()
    local DesktopMeasure = SKIN:GetMeasure('VirtualDesktop-KazukiGames82___Registry_Count_Desktop')
    local BinaryIDs = DesktopMeasure:GetStringValue()
    local DesktopCount = 0

    local DesktopMeasure2 = SKIN:GetMeasure('VirtualDesktop-KazukiGames82___Registry_Current_Desktop')
    local BinaryID = DesktopMeasure2:GetStringValue()

    for ID in string.gmatch(BinaryIDs, "(%S+)") do
        DesktopCount = DesktopCount + 1
        if (BinaryID == ID) then
            return DesktopCount
        end
    end
end
