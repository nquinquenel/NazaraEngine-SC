// Copyright (C) 2023 Jérôme "Lynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - OpenGL renderer"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/OpenGLRenderer/Debug.hpp>

namespace Nz
{
	inline Vector2ui OpenGLFboFramebuffer::GetAttachmentSize(std::size_t i) const
	{
		return Vector2ui(m_attachments[i]->GetSize());
	}
}

#include <Nazara/OpenGLRenderer/DebugOff.hpp>
