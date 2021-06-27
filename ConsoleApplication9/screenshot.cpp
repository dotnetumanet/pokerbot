#include "screenshot.h"

screenshot::screenshot()
{
	std::string path;
}
//std::string screenshot::GetPath()
//{
//	if (this->path!="")
//	{
//		return path;
//	}
//	else
//	{
//		return "";
//	}
//}
void screenshot::TakeScreenShot()
{
	keybd_event(VK_MENU, 0, 0, 0); //Alt Press
	keybd_event(VK_NUMPAD9, 0, 0, 0); //PrntScrn Press

	keybd_event(VK_NUMPAD9, 0, KEYEVENTF_KEYUP, 0); //PrntScrn Release
	keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0); //Alt Release
}
//void screenshot::SetPath(std::string& path)
//{
//	if (path!="")
//	{
//		this->path = path;
//	}
//}

