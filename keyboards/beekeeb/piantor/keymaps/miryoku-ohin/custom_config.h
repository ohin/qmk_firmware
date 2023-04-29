#if defined (KEYBOARD_beekeeb_piantor)

#define MIRYOKU_NAV_INVERTEDT


#define MIRYOKU_LAYERMAPPING_BASE( \
L01,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, R01, \
L02,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, R02, \
L03,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, R03, \
                  K32,  K33,  K34,         K35,  K36,  K37 \
) \
LAYOUT_split_3x6_3( \
L01,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  R01, \
L02,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  R02, \
L03,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  R03, \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)


#define MIRYOKU_LAYER_BASE \
KC_TAB,  KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,              KC_BSPC, \
KC_LSFT, LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),         KC_RSFT, \
KC_LCTL, LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH), KC_RCTL, \
                                               LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL)

#endif
