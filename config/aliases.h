// aliases.h
#pragma once
#include <dt-bindings/zmk/keys.h>

#define DK_plus MINUS
#define DK_minus FSLH
#define DK_astrk PIPE
#define DK_qmark UNDER
#define DK_caret RBRC
#define DK_equal RPAR
#define DK_lpar ASTRK
#define DK_rpar LPAR
#define DK_flsh AMPS
#define DK_sqt BACKSLASH
#define DK_dqt AT
#define DK_dllr GRAVE

#define DK_SECT LS(DK_PIPE) // §
#define DK_PIPE RA(EQUAL)   // |
#define DK_EXLM LS(N1)      // !
#define DK_DQUO LS(N2)      // "
#define DK_HASH LS(N3)      // #
#define DK_CURR LS(N4)      // ¤
#define DK_PERC LS(N5)      // %
#define DK_AMPR LS(N6)      // &
#define DK_SLSH LS(N7)      // /
#define DK_LPRN LS(N8)      // (
#define DK_RPRN LS(N9)      // )
#define DK_EQL LS(N0)       // =
#define DK_QUES LS(DK_PLUS) // ?
#define DK_GRV LS(DK_BSLS)  // ` (dead)
#define DK_CIRC LS(DK_DIAE) // ^ (dead)
#define DK_ASTR LS(DK_QUOT) // *
#define DK_RABK LS(DK_LABK) // >
#define DK_SCLN LS(DK_COMM) // ;
#define DK_COLN LS(DK_DOT)  // :
#define DK_UNDS LS(DK_MINS) // _
#define DK_MINS KC_SLSH     // -
#define DK_AT ALGR(DK_2)    // @
#define DK_PND ALGR(DK_3)   // £
#define DK_DLR ALGR(DK_4)   // $
#define DK_EURO ALGR(DK_5)  // €
#define DK_LCBR ALGR(DK_7)  // {
#define DK_LBRC ALGR(DK_8)  // [
#define DK_RBRC ALGR(DK_9)  // ]
#define DK_RCBR ALGR(DK_0)  // }
#define DK_LABK KC_NUBS     // <
#define DK_PLUS KC_MINS     // +

#define DK_ARNG KC_LBRC // Å
#define DK_OSTR KC_SCLN // Ø
#define DK_AE KC_QUOT   // Æ
