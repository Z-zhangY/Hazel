#pragma once
#include"Core.h"

namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//需要在客户端中定义
	Application* CreateApplication();
}


