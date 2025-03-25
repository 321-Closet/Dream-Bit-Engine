#pragma once
#include "Core.h"

namespace DreamBit {
	class DreamBit_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Define in CLIENT
	Application* CreateApplication();
}

