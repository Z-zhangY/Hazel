#include<Hazel.h>

//SandBox¿‡ºÃ≥–Hazel¿‡
class SandBox :public Hazel::Application  
{
public:
	SandBox()
	{

	}
	~SandBox()
	{
		 
	}
};
Hazel::Application* Hazel::CreateApplication()
{
	return new SandBox();
}

