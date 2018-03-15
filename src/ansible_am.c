#include "string.h"

#include "print_funcs.h"
#include "flashc.h"
#include "gpio.h"

#include "monome.h"
#include "i2c.h"
#include "dac.h"
#include "util.h" // rnd
#include "music.h"
#include "init_common.h"
#include "ii.h"

#include "main.h"

#include "ansible_grid.h"
#include "ansible_am.h"


void amGridKey(s32 data) {
	u8 x, y, z, index;//, i1, found;
	monome_grid_key_parse_event_data(data, &x, &y, &z);
	index = y*16 + x;
	
	// amLongPress(x,y,z);
}
void amRefresh(s32 data) {

}
void amKey(s32 data) {

}
void amTr(s32 data) {

}
void amTrNormal(s32 data) {

}
void amLongPress(u8 x, u8 y, u8 z) {
	// u8 index, i1, found;

	// index = y*16 + x;

	// if ( z ) {	// if the button is down
	// 	held_keys[key_count] = index;
	// 	key_count++;
	// 	key_times[index] = GRID_KEY_HOLD_TIME;		//// THRESHOLD key hold time
	// } else {
	// 	found = 0; // "found"
	// 	for(i1 = 0; i1<key_count; i1++) {
	// 		if(held_keys[i1] == index)
	// 			found++;
	// 		if(found)
	// 			held_keys[i1] = held_keys[i1+1];
	// 	}
	// 	key_count--;

	// 	// FAST PRESS
	// 	if(key_times[index] > 0) {
	// 		// PRESET MODE FAST PRESS DETECT
	// 		if(grid_preset_mode == 1) {
	// 			if(x == 0) {
	// 				if(y != preset) {
	// 					preset = y;

	// 					for(i1=0;i1<8;i1++)
	// 						am.glyph[i1] = f.am_state.am[preset].glyph[i1];

	// 					// print_dbg("\r\npreset select:");
	// 					// print_dbg_ulong(preset);
	// 				}
 // 					else if(y == preset) {
 // 						// flash read
	// 					flashc_memset8((void*)&(f.am_state.preset), preset, 1, true);
	// 					amInit();
	// 					amResume();

	// 					grid_preset_mode = false;
	// 					grid_refresh = &amRefresh;

	// 					// print_dbg("\r\npreset RECALL:");
	// 					// print_dbg_ulong(preset);
	// 				}
	// 			}
	// 		}
	// 		else if(k_mode == mPattern) {
	// 			if(y == 0) {
	// 				if(!meta) {
	// 					if(cue) {
	// 						cue_pat_next = x+1;
	// 					}
	// 					else {
	// 						change_pattern(x);
	// 					}
	// 				}
	// 				else {
	// 					k.meta_pat[meta_edit] = x;
	// 				}
	// 			}
	// 		}
	// 	}
	// }
}

// clock_kria();
void amClock(uint8_t phase) {

}
void amII(uint8_t *d, uint8_t l) {

}

// resume_kria();
void amResume(void) {

}

// refresh_kria();
void amDraw(void) {

}

// init_kria();
void amInit() {

}

// default_kria();
void amDefault() {

}