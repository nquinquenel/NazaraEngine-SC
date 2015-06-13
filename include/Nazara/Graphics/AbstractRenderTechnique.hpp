// Copyright (C) 2015 Jérôme Leclercq
// This file is part of the "Nazara Engine - Graphics module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#pragma once

#ifndef NAZARA_ABSTRACTRENDERTECHNIQUE_HPP
#define NAZARA_ABSTRACTRENDERTECHNIQUE_HPP

#include <Nazara/Prerequesites.hpp>
#include <Nazara/Core/Color.hpp>
#include <Nazara/Core/NonCopyable.hpp>
#include <Nazara/Core/String.hpp>
#include <Nazara/Graphics/AbstractRenderQueue.hpp>
#include <Nazara/Graphics/Enums.hpp>
#include <Nazara/Graphics/SceneData.hpp>

class NzAbstractViewer;
class NzBackground;
struct SceneData;

class NAZARA_API NzAbstractRenderTechnique : NzNonCopyable
{
	public:
		NzAbstractRenderTechnique();
		virtual ~NzAbstractRenderTechnique();

		virtual bool Draw(const NzSceneData& sceneData) const = 0;

		virtual void EnableInstancing(bool instancing);

		virtual NzString GetName() const;
		virtual NzAbstractRenderQueue* GetRenderQueue() = 0;
		virtual nzRenderTechniqueType GetType() const = 0;

		virtual bool IsInstancingEnabled() const;

	protected:
		bool m_instancingEnabled;
};

#endif // NAZARA_ABSTRACTRENDERTECHNIQUE_HPP
