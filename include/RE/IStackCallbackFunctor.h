#pragma once

#include "RE/BSIntrusiveRefCounted.h"  // BSIntrusiveRefCounted


namespace RE
{
	namespace BSScript
	{
		class IStackCallbackFunctor : public BSIntrusiveRefCounted
		{
		public:
			virtual ~IStackCallbackFunctor();	// 00

			// add
			virtual void	Unk_01(void) = 0;	// 01
			virtual bool	Unk_02(void);		// 02 - { return false; }
			virtual void	Unk_03(void) = 0;	// 03
		};
		STATIC_ASSERT(sizeof(IStackCallbackFunctor) == 0x10);
	}
}