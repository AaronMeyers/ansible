#pragma once

void amGridKey(s32 data);
void amRefresh(s32 data);
void amKey(s32 data);
void amTr(s32 data);
void amTrNormal(s32 data);
void amClock(uint8_t phase);
void amII(uint8_t *d, uint8_t l);
void amResume(void);
void amDraw(void);
void amInit(void);

void amDefault(void);

void amLongPress(u8 x, u8 y, u8 z);

typedef struct {
	uint8_t pattern;
	uint8_t glyph[8];
} amDataType;
amDataType am;

typedef struct {
	uint32_t clock_period;
	uint8_t preset;
	amDataType am[GRID_PRESETS];
} amStateType;