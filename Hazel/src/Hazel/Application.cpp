#include "hzpch.h"
#include "Application.h"
#include <iostream>
#include "Hazel/Logger.h"
#include "Hazel/Events/ApplicationEvent.h"

namespace Hazel {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1200, 700);
		HZ_CORE_TRACE(e);
		while (true) {
			
		}
	}
}
