#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Hazel{
	class HAZEL_API Logger
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		
	};
}


//Core logging macros
#define HZ_CORE_ERROR(...)     ::Hazel::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_WARN(...)      ::Hazel::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_INFO(...)      ::Hazel::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_TRACE(...)     ::Hazel::Logger::GetCoreLogger()->trace(__VA_ARGS__)



//Client logging macros
#define HZ_CLIENT_ERROR(...)     ::Hazel::Logger::GetClientLogger()->error(__VA_ARGS__)
#define HZ_CLIENT_WARN(...)      ::Hazel::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_CLIENT_INFO(...)      ::Hazel::Logger::GetClientLogger()->info(__VA_ARGS__)
#define HZ_CLIENT_TRACE(...)     ::Hazel::Logger::GetClientLogger()->trace(__VA_ARGS__)


