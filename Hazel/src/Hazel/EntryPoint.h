#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	printf("Hazel engine start\n");

	Hazel::Logger::Init();
	HZ_CORE_INFO("Core Info message");
	HZ_CORE_TRACE("Core Trace message");
	HZ_CORE_WARN("Core Warning message");
	HZ_CORE_ERROR("Core Error message");

	HZ_CLIENT_INFO("Client info message, variable = {}", "100");
	HZ_CLIENT_TRACE("Client trace message");
	HZ_CLIENT_WARN("Client warning message");
	HZ_CLIENT_ERROR("Client error message");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif