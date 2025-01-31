// Copyright (C) 2023 Jérôme "Lynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - Core module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Core/Debug.hpp>

namespace Nz
{
	template<typename T, typename... Args>
	T& AppEntitySystemComponent::AddWorld(Args&&... args)
	{
		return static_cast<T&>(*m_worlds.emplace_back(std::make_unique<T>(std::forward<Args>(args)...)));
	}
}

#include <Nazara/Core/DebugOff.hpp>
