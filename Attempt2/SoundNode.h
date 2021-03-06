#include "SceneNode.h"
#include "ResourceIdentifiers.h"
#pragma once
namespace GEX {
	class SoundPlayer;
	class SoundNode : public SceneNode
	{
	public:
		explicit			SoundNode(SoundPlayer& player);

		void				playSound(SoundEffectID sound, sf::Vector2f position);
		unsigned int		getCategory() const override;

	private:
		SoundPlayer &		_sounds;

	};
}

