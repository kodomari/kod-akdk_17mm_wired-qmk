#pragma once

#define MATRIX_ROWS 10
#define MATRIX_COLS 8
#define DIODE_DIRECTION COL2ROW

// 動作実績のある正確なピン設定
#ifdef MASTER_RIGHT
#    define MATRIX_ROW_PINS { GP27, GP2, GP11, GP10, GP5 }
#    define MATRIX_COL_PINS { GP9,  GP8, GP7,  GP6,  GP26, GP15, GP14, GP4 }
#else
#    define MATRIX_ROW_PINS { GP14, GP11, GP10, GP9, GP8 }
#    define MATRIX_COL_PINS { GP5,  GP4,  GP3,  GP2, GP1, GP0, GP6,  GP26 }
#endif

// エンコーダー設定（左手側、GP12/GP13使用）
#define ENCODER_A_PINS { GP12 }
#define ENCODER_B_PINS { GP13 }
#define ENCODER_RESOLUTIONS { 2 }