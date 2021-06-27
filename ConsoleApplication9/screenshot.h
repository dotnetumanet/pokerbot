#pragma once
#include<fstream>
#include <exception>
#include <vector>
#include <windows.h>
#include"packages.config"
class screenshot
{protected:
	std::string path;
	
public:
	screenshot();
	/*std::string GetPath();*/
	void TakeScreenShot ();
	/*void SetPath(std::string& path);*/
};

