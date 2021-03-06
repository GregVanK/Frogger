/*
*@author: Greg VanKampen
*@file: Category.h
*@description: Stores entity Categories
*/
#pragma once

namespace Category {
	enum Type
	{
		None			=0,
		Scene			=1 << 0,
		PlayerAircraft	=1 << 1,
		AlliedAircraft	=1 << 2,
		EnemyAircraft	=1 << 3,
		EnemeyProjectile =1 << 4,
		AlliedProjectile =1 << 5,
		AirSceneLayer	=1 << 6,
		Pickup			=1 << 7,
		ParticleSystem  =1 << 8,
		Boss			=1 << 9,
		SoundEffect		=1 << 10,

		Aircraft = PlayerAircraft | AlliedAircraft | EnemyAircraft | Boss,
		Projectile = AlliedProjectile | EnemeyProjectile
	};
}