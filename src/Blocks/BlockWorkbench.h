
#pragma once

#include "BlockHandler.h"
#include "../UI/CraftingWindow.h"
#include "../Entities/Player.h"





class cBlockWorkbenchHandler:
	public cBlockHandler
{
public:
	cBlockWorkbenchHandler(BLOCKTYPE a_BlockType)
		: cBlockHandler(a_BlockType)
	{
	}

	virtual bool OnUse(cChunkInterface & a_ChunkInterface, cWorldInterface & a_WorldInterface, cPlayer & a_Player, int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_BlockFace, int a_CursorX, int a_CursorY, int a_CursorZ) override
	{
		cWindow * Window = new cCraftingWindow(a_BlockX, a_BlockY, a_BlockZ);
		a_Player.OpenWindow(*Window);
		return true;
	}

	virtual bool IsUseable(void) override
	{
		return true;
	}

	virtual ColourID GetMapBaseColourID(NIBBLETYPE a_Meta) override
	{
		UNUSED(a_Meta);
		return 13;
	}
} ;




