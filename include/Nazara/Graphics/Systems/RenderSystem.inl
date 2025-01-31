// Copyright (C) 2023 Jérôme "Lynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - Graphics module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Core/Error.hpp>
#include <Nazara/Graphics/Debug.hpp>

namespace Nz
{
	inline void RenderSystem::AttachExternalSwapchain(WindowSwapchain& swapchain)
	{
		m_externalSwapchains.emplace_back(swapchain);
	}

	inline void RenderSystem::DetachExternalSwapchain(WindowSwapchain& swapchain)
	{
		auto it = std::find_if(m_externalSwapchains.begin(), m_externalSwapchains.end(), [&](WindowSwapchain& externalSwapchain) { return &externalSwapchain == &swapchain; });
		NazaraAssert(it != m_externalSwapchains.end(), "external swapchain is not part of this render system");
		m_externalSwapchains.erase(it);
	}

	inline FramePipeline& RenderSystem::GetFramePipeline()
	{
		return *m_pipeline;
	}

	inline const FramePipeline& RenderSystem::GetFramePipeline() const
	{
		return *m_pipeline;
	}
}

#include <Nazara/Graphics/DebugOff.hpp>

