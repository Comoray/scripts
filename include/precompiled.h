/* Copyright (C) 2006 - 2012 ScriptDev2 <http://www.scriptdev2.com/>
* This program is free software licensed under GPL version 2
* Please see the included DOCS/LICENSE.TXT for more information */

#ifndef SC_PRECOMPILED_H
#define SC_PRECOMPILED_H

#include "../ScriptMgr.h"
#include "Object.h"
#include "Unit.h"
#include "Creature.h"
#include "CreatureAI.h"
#include "GameObject.h"
#include "sc_creature.h"
#include "sc_gossip.h"
#include "sc_grid_searchers.h"
#include "sc_instance.h"
#include "SpellAuras.h"

#ifdef WIN32
#  include <windows.h>
BOOL APIENTRY DllMain(HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    return true;
}
#endif

// Backport helpers
#define UNIT_BYTE1_FLAG_UNK_2   0
#define AREA_FLAG_LOWLEVEL      0

// only used with remove mode, hence ok this way
#define AURA_STATE_HEALTHLESS_35_PERCENT  AURA_STATE_HEALTHLESS_20_PERCENT

// sc_gossip.h:             ADD_GOSSIP_ITEM_EXTENDED outcommented box-money (Required until professions are fixed)
// sc_creature.cpp:         Used in ScriptedAI::SelectSpell, outcommented SchoolMask

#endif
