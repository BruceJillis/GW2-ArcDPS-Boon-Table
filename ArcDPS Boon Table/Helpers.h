#pragma once
#include <stdint.h>
#include "ArcdpsDataStructures.h"

extern uint64_t current_time;

#define PERCENT_STR(x, dura) {							\
		u32 per = (u32)(x / (f32)(dura) * 100.0f);		\
		per = per > 100 ? 100 : per;					\
		if (per>99) ImGui::SameLine(3);					\
		ImGui::Text("%u%%", per);						\
		}

#define __VERSION__ (__DATE__)

uint64_t getCurrentTime();

int32_t getBuffApplyDuration(cbtevent* ev);

enum TableToDisplay
{
	TableToDisplay_uptime,
	TableToDisplay_generation
};

inline float discretize(float a);

bool floatCmp(float a, float b);