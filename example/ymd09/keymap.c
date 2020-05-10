


#include QMK_KEYBOARD_H

#include "action_layer.h"
#include "version.h"

#ifdef STENO_ENABLE
 #include "keymap_steno.h"
#endif

#define LCGS(code) LCTL(LGUI(LSFT(code)))
#define LCS(code) LCTL(LSFT(code))

#define SLT(kc) (QK_LSFT | QK_LALT | (kc))
#define ALT_TAB LALT(KC_TAB)
#define SLT_TAB SLT(KC_TAB)

enum operating_systems {
  OS_MACOS = 1,
  OS_WINDOWS,
} zored_os = OS_WINDOWS;

uint8_t mappingIndex = 0;
uint8_t mappingIndexMax = 3;
uint8_t map_code8_hash (uint8_t keycode) {
  
      switch(mappingIndex) {
        case 0:
          break;
        
      case 1:
        // Mapping "ru":
        switch(keycode) {
          case KC_A: return KC_F;
case KC_B: return KC_COMM;
case KC_C: return KC_D;
case KC_D: return KC_U;
case KC_E: return KC_L;
case KC_F: return KC_T;
case KC_G: return KC_GRV;
case KC_H: return KC_SCOLON;
case KC_I: return KC_P;
case KC_J: return KC_B;
case KC_K: return KC_Q;
case KC_L: return KC_R;
case KC_M: return KC_K;
case KC_N: return KC_V;
case KC_O: return KC_Y;
case KC_P: return KC_J;
case KC_Q: return KC_G;
case KC_R: return KC_H;
case KC_S: return KC_C;
case KC_T: return KC_N;
case KC_U: return KC_E;
case KC_V: return KC_A;
case KC_W: return KC_LBRC;
case KC_X: return KC_W;
case KC_Y: return KC_X;
case KC_Z: return KC_I;
case KC_COMM: return KC_O;
case KC_SCOLON: return KC_RBRC;
case KC_LBRC: return KC_S;
case KC_RBRC: return KC_M;
case KC_QUOT: return KC_QUOT;
case KC_DOT: return KC_DOT;
case KC_GRV: return KC_Z;
        }
        break;
    

      case 2:
        // Mapping "en_fast":
        switch(keycode) {
          case KC_A: return KC_N;
case KC_B: return KC_S;
case KC_C: return KC_H;
case KC_D: return KC_E;
case KC_E: return KC_T;
case KC_F: return KC_A;
case KC_G: return KC_O;
case KC_H: return KC_R;
case KC_I: return KC_I;
case KC_J: return KC_Q;
case KC_K: return KC_M;
case KC_L: return KC_W;
case KC_M: return KC_D;
case KC_N: return KC_L;
case KC_O: return KC_C;
case KC_P: return KC_F;
case KC_Q: return KC_U;
case KC_R: return KC_V;
case KC_S: return KC_X;
case KC_T: return KC_K;
case KC_U: return KC_G;
case KC_V: return KC_Y;
case KC_W: return KC_P;
case KC_X: return KC_J;
case KC_Y: return KC_B;
case KC_Z: return KC_Z;
case KC_COMM: return KC_LBRC;
case KC_SCOLON: return KC_GRV;
case KC_LBRC: return KC_DOT;
case KC_RBRC: return KC_COMM;
case KC_QUOT: return KC_SCOLON;
case KC_DOT: return KC_RBRC;
case KC_GRV: return KC_QUOT;
        }
        break;
    

      case 3:
        // Mapping "ru_fast":
        switch(keycode) {
          case KC_A: return KC_N;
case KC_B: return KC_C;
case KC_C: return KC_H;
case KC_D: return KC_J;
case KC_E: return KC_T;
case KC_F: return KC_F;
case KC_G: return KC_B;
case KC_H: return KC_D;
case KC_I: return KC_Y;
case KC_J: return KC_SCOLON;
case KC_K: return KC_G;
case KC_L: return KC_E;
case KC_M: return KC_K;
case KC_N: return KC_R;
case KC_O: return KC_V;
case KC_P: return KC_Z;
case KC_Q: return KC_L;
case KC_R: return KC_COMM;
case KC_S: return KC_LBRC;
case KC_T: return KC_X;
case KC_U: return KC_S;
case KC_V: return KC_M;
case KC_W: return KC_U;
case KC_X: return KC_Q;
case KC_Y: return KC_P;
case KC_Z: return KC_I;
case KC_COMM: return KC_DOT;
case KC_SCOLON: return KC_RBRC;
case KC_LBRC: return KC_O;
case KC_RBRC: return KC_QUOT;
case KC_QUOT: return KC_A;
case KC_DOT: return KC_W;
case KC_GRV: return KC_GRV;
        }
        break;
    
      }
  
  return keycode;
}
uint8_t map_code16_hash (uint16_t keycode) {
  
      switch(mappingIndex) {
        case 0:
          break;
        
      case 1:
        // Mapping "ru":
        switch(keycode) {
          case KC_A: return KC_F;
case KC_B: return KC_COMM;
case KC_C: return KC_D;
case KC_D: return KC_U;
case KC_E: return KC_L;
case KC_F: return KC_T;
case KC_G: return KC_GRV;
case KC_H: return KC_SCOLON;
case KC_I: return KC_P;
case KC_J: return KC_B;
case KC_K: return KC_Q;
case KC_L: return KC_R;
case KC_M: return KC_K;
case KC_N: return KC_V;
case KC_O: return KC_Y;
case KC_P: return KC_J;
case KC_Q: return KC_G;
case KC_R: return KC_H;
case KC_S: return KC_C;
case KC_T: return KC_N;
case KC_U: return KC_E;
case KC_V: return KC_A;
case KC_W: return KC_LBRC;
case KC_X: return KC_W;
case KC_Y: return KC_X;
case KC_Z: return KC_I;
case KC_COMM: return KC_O;
case KC_SCOLON: return KC_RBRC;
case KC_LBRC: return KC_S;
case KC_RBRC: return KC_M;
case KC_QUOT: return KC_QUOT;
case KC_DOT: return KC_DOT;
case KC_GRV: return KC_Z;
        }
        break;
    

      case 2:
        // Mapping "en_fast":
        switch(keycode) {
          case KC_A: return KC_N;
case KC_B: return KC_S;
case KC_C: return KC_H;
case KC_D: return KC_E;
case KC_E: return KC_T;
case KC_F: return KC_A;
case KC_G: return KC_O;
case KC_H: return KC_R;
case KC_I: return KC_I;
case KC_J: return KC_Q;
case KC_K: return KC_M;
case KC_L: return KC_W;
case KC_M: return KC_D;
case KC_N: return KC_L;
case KC_O: return KC_C;
case KC_P: return KC_F;
case KC_Q: return KC_U;
case KC_R: return KC_V;
case KC_S: return KC_X;
case KC_T: return KC_K;
case KC_U: return KC_G;
case KC_V: return KC_Y;
case KC_W: return KC_P;
case KC_X: return KC_J;
case KC_Y: return KC_B;
case KC_Z: return KC_Z;
case KC_COMM: return KC_LBRC;
case KC_SCOLON: return KC_GRV;
case KC_LBRC: return KC_DOT;
case KC_RBRC: return KC_COMM;
case KC_QUOT: return KC_SCOLON;
case KC_DOT: return KC_RBRC;
case KC_GRV: return KC_QUOT;
        }
        break;
    

      case 3:
        // Mapping "ru_fast":
        switch(keycode) {
          case KC_A: return KC_N;
case KC_B: return KC_C;
case KC_C: return KC_H;
case KC_D: return KC_J;
case KC_E: return KC_T;
case KC_F: return KC_F;
case KC_G: return KC_B;
case KC_H: return KC_D;
case KC_I: return KC_Y;
case KC_J: return KC_SCOLON;
case KC_K: return KC_G;
case KC_L: return KC_E;
case KC_M: return KC_K;
case KC_N: return KC_R;
case KC_O: return KC_V;
case KC_P: return KC_Z;
case KC_Q: return KC_L;
case KC_R: return KC_COMM;
case KC_S: return KC_LBRC;
case KC_T: return KC_X;
case KC_U: return KC_S;
case KC_V: return KC_M;
case KC_W: return KC_U;
case KC_X: return KC_Q;
case KC_Y: return KC_P;
case KC_Z: return KC_I;
case KC_COMM: return KC_DOT;
case KC_SCOLON: return KC_RBRC;
case KC_LBRC: return KC_O;
case KC_RBRC: return KC_QUOT;
case KC_QUOT: return KC_A;
case KC_DOT: return KC_W;
case KC_GRV: return KC_GRV;
        }
        break;
    
      }
  
  return 0;
}

uint8_t map_mod (uint8_t mod) {
  switch (zored_os) {
    case OS_MACOS:
      switch (mod) {
        case MOD_LCTL:
          return MOD_LGUI;
        case MOD_LGUI:
          return MOD_LCTL;
      }
    case OS_WINDOWS:
      break;
  }

  return mod;
}

void do_one_shot (uint8_t keycode) {
  set_oneshot_mods(map_mod(keycode));
}

uint8_t map_code (uint8_t keycode) {
  switch (zored_os) {
    case OS_MACOS:
      switch (keycode) {
        case KC_LCTRL:
          return KC_LGUI;
        case KC_RCTRL:
          return KC_RGUI;
        case KC_LGUI:
          return KC_LCTRL;
        case KC_RGUI:
          return KC_RCTRL;
        case KC_MEDIA_PREV_TRACK:
          return KC_MEDIA_REWIND;
        case KC_MEDIA_NEXT_TRACK:
          return KC_MEDIA_FAST_FORWARD;
      }
    case OS_WINDOWS:
      break;
  }

  keycode = map_code8_hash(keycode);

  return keycode;
}

void code_down(uint8_t code) {
  register_code(map_code(code));
}

void code_up(uint8_t code) {
  unregister_code(map_code(code));
}

// Helper functions:


enum do_command {
  DO_FIND_BEGIN = 1,
  DO_FIND_END,
  DO_ENPASS,
  DO_MAIL,
  DO_LOGIN,
  DO_TERMINAL,
  DO_SCREENSHOT,
  DO_BOOTLOADER,
  DO_CLOSE,
  DO_NEXT_LANGUAGE,
  DO_UNDERSCORE,
  DO_ARROW,
  DO_FAT_ARROW,
  DO_NOT_EQUALS,
  DO_EMOJI_PANEL,
  DO_AMPERSAND,
  DO_NEXT_MAPPING,
  DO_ONE_SHOT_CTRL,
  DO_ONE_SHOT_ALT,
  DO_ONE_SHOT_GUI,
  DO_ONE_SHOT_SHIFT,
};

// Advanced commands.
void run_advanced (uint8_t command) {
  switch (command) {
    case DO_FIND_BEGIN:
      switch (zored_os) {
        case OS_WINDOWS:
          tap_code(KC_LGUI);
          break;
        case OS_MACOS:
          tap_code16(G(KC_SPC));
          break;
      }
      break;
    case DO_FIND_END:
      tap_code(KC_ENTER);
      break;
    case DO_ONE_SHOT_CTRL:
      do_one_shot(MOD_LCTL);
      break;
    case DO_ONE_SHOT_ALT:
      do_one_shot(MOD_LALT);
      break;
    case DO_ONE_SHOT_GUI:
      do_one_shot(MOD_LGUI);
      break;
    case DO_ONE_SHOT_SHIFT:
      do_one_shot(MOD_LSFT);
      break;
    case DO_NEXT_MAPPING:
      run_advanced(DO_NEXT_LANGUAGE);  
      mappingIndex++;
      if (mappingIndex > mappingIndexMax) {
        mappingIndex = 0;
      }
      break;
    case DO_NEXT_LANGUAGE:
      ; // empty statement.
      uint8_t hold = 0;
      uint8_t tap = 0;
      uint32_t timeout = 100;

      switch (zored_os) {
        case OS_WINDOWS:
          hold = KC_LALT;
          tap = KC_LSHIFT;
          break;
        case OS_MACOS:
          hold = KC_LGUI;
          tap = KC_SPC;
          break;
      }
      register_code(hold);
      wait_ms(timeout);
      tap_code(tap);
      wait_ms(timeout);
      unregister_code(hold);
      break;
    case DO_EMOJI_PANEL:
      switch (zored_os) {
        case OS_WINDOWS:
          tap_code16(G(KC_DOT));
          break;
        case OS_MACOS:
          tap_code16(G(C(KC_SPC)));
          break;
      }
      break;
    case DO_AMPERSAND:
      tap_code16(KC_AMPERSAND);
      break;
    case DO_UNDERSCORE:
      SEND_STRING("_");
      break;
    case DO_ARROW:
      SEND_STRING("->");
      break;
    case DO_FAT_ARROW:
      SEND_STRING("=>");
      break;
    case DO_NOT_EQUALS:
      SEND_STRING("!=");
      break;
    case DO_ENPASS:
      run_advanced(DO_FIND_BEGIN);
      SEND_STRING("enpass");
      run_advanced(DO_FIND_END);
      break;
    case DO_TERMINAL:
      run_advanced(DO_FIND_BEGIN);
      switch (zored_os) {
        case OS_WINDOWS:
          SEND_STRING("conemu");
          break;
        case OS_MACOS:
          SEND_STRING("iterm");
          break;
      }
      run_advanced(DO_FIND_END);
      break;
    case DO_MAIL:
      SEND_STRING("zored.box@gmail.com");
      break;
    case DO_LOGIN:
      SEND_STRING("zored");
      break;
    case DO_SCREENSHOT:
      switch (zored_os) {
        case OS_MACOS:
          tap_code16(G(C(S(KC_4))));
          break;
        case OS_WINDOWS:
          tap_code16(G(S(KC_S)));
          break;
      }
      break;
    case DO_BOOTLOADER:
      clear_keyboard();
      bootloader_jump();
      break;
    case DO_CLOSE:
      switch (zored_os) {
        case OS_WINDOWS:
          tap_code16(A(KC_F4));
          break;
        case OS_MACOS:
          tap_code16(G(KC_Q));
          break;
      }
      break;
  }
}




void process_combo_event(uint8_t combo_index, bool pressed) {
  if (!pressed) {
    return;
  }

  switch(combo_index) {
    
  }
};

enum layers {
LAYER_DEFAULT = 0,
  LAYER_LAYER1A,
  LAYER_LAYER1B,
  LAYER_LAYER2,
  LAYER_LAYER3A,
  LAYER_LAYER3B,
  LAYER_LAYER4,
  LAYER_LAYER5,
  LAYER_LAYER6,
  LAYER_LAYER7,
  LAYER_LAYER8A,
  LAYER_LAYER8B,
  LAYER_LAYER9
};

enum dance_keys {
  DANCE_KC_Y1DANCE = 1,
  DANCE_KC_Y2DANCE,
  DANCE_KC_Y3DANCE,
  DANCE_KC_Y4DANCE,
  DANCE_KC_Y5DANCE,
  DANCE_KC_Y6DANCE,
  DANCE_KC_Y7DANCE,
  DANCE_KC_Y8DANCE,
  DANCE_KC_Y9DANCE
};
enum dance_action_names {
  ACTION_SEQ__A_1 = 1,
  ACTION_SEQ__HOLD_LAYER_LAYER1A_3,
  ACTION_SEQ__HOLD_LAYER_LAYER1B_4,
  ACTION_SEQ__B_6,
  ACTION_SEQ__HOLD_LAYER_LAYER2_8,
  ACTION_SEQ__C_10,
  ACTION_SEQ__HOLD_LAYER_LAYER3A_12,
  ACTION_SEQ__HOLD_LAYER_LAYER3B_13,
  ACTION_SEQ__D_15,
  ACTION_SEQ__HOLD_LAYER_LAYER4_17,
  ACTION_SEQ__LCTRL_18,
  ACTION_SEQ__E_20,
  ACTION_SEQ__HOLD_LAYER_LAYER5_22,
  ACTION_SEQ__LALT_23,
  ACTION_SEQ__F_25,
  ACTION_SEQ__HOLD_LAYER_LAYER6_27,
  ACTION_SEQ__LGUI_28,
  ACTION_SEQ__G_30,
  ACTION_SEQ__HOLD_LAYER_LAYER7_32,
  ACTION_SEQ__LSHIFT_33,
  ACTION_SEQ__H_35,
  ACTION_SEQ__HOLD_LAYER_LAYER8A_37,
  ACTION_SEQ__HOLD_LAYER_LAYER8B_38,
  ACTION_SEQ__I_40,
  ACTION_SEQ__HOLD_LAYER_LAYER9_42,
  ACTION_SEQ__RSHIFT_43
};

static int dance_key_states[26] = {0};

void dance_flush_on_many_taps(qk_tap_dance_state_t *state) {
  if (state->count == 0) {
    return;
  }
  uint16_t dance_key = state->keycode - QK_TAP_DANCE;

  switch (dance_key) {
    
    case DANCE_KC_Y1DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 

    case DANCE_KC_Y2DANCE:
      if (state->count <= 1) {
        return;
      }
      break;
 

    case DANCE_KC_Y3DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 

    case DANCE_KC_Y4DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 

    case DANCE_KC_Y5DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 

    case DANCE_KC_Y6DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 

    case DANCE_KC_Y7DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 

    case DANCE_KC_Y8DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 

    case DANCE_KC_Y9DANCE:
      if (state->count <= 2) {
        return;
      }
      break;
 
    default:
      return;
  }

  state->timer = 0;
  state->pressed = false;
}

void dance_tap_on_enemy_hold(qk_tap_dance_state_t *state) {
  if (state->count == 0) {
    return;
  }

  uint16_t dance_key = state->keycode - QK_TAP_DANCE;

  switch(dance_key) {
    
    default:
      return;
  }

  state->timer = 0;
  state->pressed = false;
}

void on_dance_each_tap(qk_tap_dance_state_t *state, void *user_data) {
  dance_tap_on_enemy_hold(state);
  dance_flush_on_many_taps(state);
}

void on_dance_finished(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 0) {
    return;
  }
  uint16_t dance_key = state->keycode - QK_TAP_DANCE;

  switch (dance_key) {
    
    case DANCE_KC_Y1DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER1A);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER1A_3;
            return;
      
          case 2:
            layer_on(LAYER_LAYER1B);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER1B_4;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_A);
            dance_key_states[dance_key] = ACTION_SEQ__A_1;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_A);
            dance_key_states[dance_key] = ACTION_SEQ__A_1;
              code_up(KC_A);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y2DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER2);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER2_8;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_B);
            dance_key_states[dance_key] = ACTION_SEQ__B_6;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_B);
            dance_key_states[dance_key] = ACTION_SEQ__B_6;
              code_up(KC_B);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y3DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER3A);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER3A_12;
            return;
      
          case 2:
            layer_on(LAYER_LAYER3B);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER3B_13;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_C);
            dance_key_states[dance_key] = ACTION_SEQ__C_10;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_C);
            dance_key_states[dance_key] = ACTION_SEQ__C_10;
              code_up(KC_C);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y4DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER4);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER4_17;
            return;
      
          case 2:
            code_down(KC_LCTRL);
            dance_key_states[dance_key] = ACTION_SEQ__LCTRL_18;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_D);
            dance_key_states[dance_key] = ACTION_SEQ__D_15;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_D);
            dance_key_states[dance_key] = ACTION_SEQ__D_15;
              code_up(KC_D);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y5DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER5);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER5_22;
            return;
      
          case 2:
            code_down(KC_LALT);
            dance_key_states[dance_key] = ACTION_SEQ__LALT_23;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_E);
            dance_key_states[dance_key] = ACTION_SEQ__E_20;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_E);
            dance_key_states[dance_key] = ACTION_SEQ__E_20;
              code_up(KC_E);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y6DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER6);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER6_27;
            return;
      
          case 2:
            code_down(KC_LGUI);
            dance_key_states[dance_key] = ACTION_SEQ__LGUI_28;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_F);
            dance_key_states[dance_key] = ACTION_SEQ__F_25;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_F);
            dance_key_states[dance_key] = ACTION_SEQ__F_25;
              code_up(KC_F);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y7DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER7);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER7_32;
            return;
      
          case 2:
            code_down(KC_LSHIFT);
            dance_key_states[dance_key] = ACTION_SEQ__LSHIFT_33;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_G);
            dance_key_states[dance_key] = ACTION_SEQ__G_30;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_G);
            dance_key_states[dance_key] = ACTION_SEQ__G_30;
              code_up(KC_G);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y8DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER8A);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER8A_37;
            return;
      
          case 2:
            layer_on(LAYER_LAYER8B);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER8B_38;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_H);
            dance_key_states[dance_key] = ACTION_SEQ__H_35;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_H);
            dance_key_states[dance_key] = ACTION_SEQ__H_35;
              code_up(KC_H);
            }
            return;
        }
      }
      break;
    
    case DANCE_KC_Y9DANCE:
      if (state->pressed) {
        // Hold actions:
        switch (state->count) {
          case 1:
            layer_on(LAYER_LAYER9);
    
            dance_key_states[dance_key] = ACTION_SEQ__HOLD_LAYER_LAYER9_42;
            return;
      
          case 2:
            code_down(KC_RSHIFT);
            dance_key_states[dance_key] = ACTION_SEQ__RSHIFT_43;
            return;
      
          default:
            
            return;
        }
      }
      else {
        // Tap actions:
        switch (state->count) {
          case 1:
            code_down(KC_I);
            dance_key_states[dance_key] = ACTION_SEQ__I_40;
            return;
      
          default:
            for (int i=0; i < state->count; i++) {
              code_down(KC_I);
            dance_key_states[dance_key] = ACTION_SEQ__I_40;
              code_up(KC_I);
            }
            return;
        }
      }
      break;
    
  }
}

void on_dance_reset(qk_tap_dance_state_t *state, void *user_data) {
  uint16_t dance_key = state->keycode - QK_TAP_DANCE;
  switch (dance_key_states[dance_key]) {
    case ACTION_SEQ__HOLD_LAYER_LAYER1A_3:
            layer_off(LAYER_LAYER1A);
            break;
    
          case ACTION_SEQ__HOLD_LAYER_LAYER1B_4:
            layer_off(LAYER_LAYER1B);
            break;
        case ACTION_SEQ__A_1:
            code_up(KC_A);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER2_8:
            layer_off(LAYER_LAYER2);
            break;
        case ACTION_SEQ__B_6:
            code_up(KC_B);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER3A_12:
            layer_off(LAYER_LAYER3A);
            break;
    
          case ACTION_SEQ__HOLD_LAYER_LAYER3B_13:
            layer_off(LAYER_LAYER3B);
            break;
        case ACTION_SEQ__C_10:
            code_up(KC_C);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER4_17:
            layer_off(LAYER_LAYER4);
            break;
    
          case ACTION_SEQ__LCTRL_18:
            code_up(KC_LCTRL);
            break;
        case ACTION_SEQ__D_15:
            code_up(KC_D);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER5_22:
            layer_off(LAYER_LAYER5);
            break;
    
          case ACTION_SEQ__LALT_23:
            code_up(KC_LALT);
            break;
        case ACTION_SEQ__E_20:
            code_up(KC_E);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER6_27:
            layer_off(LAYER_LAYER6);
            break;
    
          case ACTION_SEQ__LGUI_28:
            code_up(KC_LGUI);
            break;
        case ACTION_SEQ__F_25:
            code_up(KC_F);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER7_32:
            layer_off(LAYER_LAYER7);
            break;
    
          case ACTION_SEQ__LSHIFT_33:
            code_up(KC_LSHIFT);
            break;
        case ACTION_SEQ__G_30:
            code_up(KC_G);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER8A_37:
            layer_off(LAYER_LAYER8A);
            break;
    
          case ACTION_SEQ__HOLD_LAYER_LAYER8B_38:
            layer_off(LAYER_LAYER8B);
            break;
        case ACTION_SEQ__H_35:
            code_up(KC_H);
            break;
    
        case ACTION_SEQ__HOLD_LAYER_LAYER9_42:
            layer_off(LAYER_LAYER9);
            break;
    
          case ACTION_SEQ__RSHIFT_43:
            code_up(KC_RSHIFT);
            break;
        case ACTION_SEQ__I_40:
            code_up(KC_I);
            break;
    
  }

  dance_key_states[dance_key] = 0;
}


#define ACTION_TAP_DANCE_DOUBLE_TIME(kc1, kc2, tap_specific_tapping_term) { \
    .fn = { qk_tap_dance_pair_on_each_tap, qk_tap_dance_pair_finished, qk_tap_dance_pair_reset }, \
    .user_data = (void *)&((qk_tap_dance_pair_t) { kc1, kc2 }),  \
    .custom_tapping_term = tap_specific_tapping_term, \
  }
#define DANCE_MODIFIER() ACTION_TAP_DANCE_FN_ADVANCED_TIME(on_dance_each_tap, on_dance_finished, on_dance_reset, TAPPING_TERM_TAP_DANCE)
#define DANCE_TWO(k1,k11) ACTION_TAP_DANCE_DOUBLE_TIME(k1, k11, TAPPING_TERM_TAP_DANCE)

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_KC_Y1DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y2DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y3DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y4DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y5DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y6DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y7DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y8DANCE] = DANCE_MODIFIER(),
  [DANCE_KC_Y9DANCE] = DANCE_MODIFIER()
};

enum custom_keycodes {
  ZKC_BTL = SAFE_RANGE,
  KC_DO_NEXT_MAPPING,
KC_DO_NEXT_LANGUAGE,
KC_DO_BOOTLOADER,
KC_DO_ONE_SHOT_CTRL,
KC_DO_ONE_SHOT_ALT,
KC_DO_ONE_SHOT_GUI,
KC_DO_ONE_SHOT_SHIFT,


  // At the end:
  DYNAMIC_MACRO_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[LAYER_DEFAULT] = LAYOUT(
  
/* 0 */ TD(DANCE_KC_Y1DANCE),TD(DANCE_KC_Y2DANCE),TD(DANCE_KC_Y3DANCE),
/* 1 */ TD(DANCE_KC_Y4DANCE),TD(DANCE_KC_Y5DANCE),TD(DANCE_KC_Y6DANCE),
/* 2 */ TD(DANCE_KC_Y7DANCE),TD(DANCE_KC_Y8DANCE),TD(DANCE_KC_Y9DANCE)
)
  ,

[LAYER_LAYER1A] = LAYOUT(
  
/* 0 */ _______,KC_1,KC_2,
/* 1 */ KC_3,KC_4,KC_5,
/* 2 */ KC_6,KC_7,KC_8
)
  ,

[LAYER_LAYER1B] = LAYOUT(
  
/* 0 */ TG(LAYER_LAYER1B),KC_PGDN,KC_PGUP,
/* 1 */ KC_BTN1,KC_MS_U,KC_BTN2,
/* 2 */ KC_MS_L,KC_MS_D,KC_MS_R
)
  ,

[LAYER_LAYER2] = LAYOUT(
  
/* 0 */ KC_MINS,_______,KC_PPLS,
/* 1 */ KC_9,KC_ENT,KC_0,
/* 2 */ KC_SLSH,KC_EQL,KC_PAST
)
  ,

[LAYER_LAYER3A] = LAYOUT(
  
/* 0 */ UC_M_WC,UC_M_OS,_______,
/* 1 */ KC_DO_NEXT_MAPPING,KC_DO_NEXT_LANGUAGE,_______,
/* 2 */ KC_DO_BOOTLOADER,_______,_______
)
  ,

[LAYER_LAYER3B] = LAYOUT(
  
/* 0 */ KC_ESC,KC_ENT,TG(LAYER_LAYER3B),
/* 1 */ KC_PGDN,KC_UP,KC_PGUP,
/* 2 */ KC_LEFT,KC_DOWN,KC_RGHT
)
  ,

[LAYER_LAYER4] = LAYOUT(
  
/* 0 */ KC_J,KC_K,KC_L,
/* 1 */ _______,KC_M,KC_N,
/* 2 */ KC_O,KC_P,KC_Q
)
  ,

[LAYER_LAYER5] = LAYOUT(
  
/* 0 */ KC_R,KC_S,KC_T,
/* 1 */ KC_U,_______,KC_V,
/* 2 */ KC_W,KC_X,KC_Y
)
  ,

[LAYER_LAYER6] = LAYOUT(
  
/* 0 */ KC_Z,KC_COMM,KC_SCOLON,
/* 1 */ KC_LBRC,KC_RBRC,_______,
/* 2 */ KC_QUOT,KC_DOT,KC_GRV
)
  ,

[LAYER_LAYER7] = LAYOUT(
  
/* 0 */ KC_BSPC,KC_SPC,KC_ENT,
/* 1 */ KC_DO_ONE_SHOT_CTRL,KC_DO_ONE_SHOT_ALT,KC_DO_ONE_SHOT_GUI,
/* 2 */ _______,KC_PGDN,KC_DO_ONE_SHOT_SHIFT
)
  ,

[LAYER_LAYER8A] = LAYOUT(
  
/* 0 */ RGB_VAD,RGB_TOG,RGB_VAI,
/* 1 */ RGB_HUD,RGB_MOD,RGB_HUI,
/* 2 */ RGB_SAD,_______,RGB_SAI
)
  ,

[LAYER_LAYER8B] = LAYOUT(
  
/* 0 */ TG(LAYER_LAYER1B),_______,TG(LAYER_LAYER3B),
/* 1 */ _______,_______,_______,
/* 2 */ _______,_______,_______
)
  ,

[LAYER_LAYER9] = LAYOUT(
  
/* 0 */ KC_QUOT,KC_DOT,KC_GRV,
/* 1 */ KC_SLSH,KC_BSLS,KC_DELETE,
/* 2 */ KC_ESC,KC_TAB,_______
)
  
};



void matrix_init_user(void) {
  #ifdef STENO_ENABLE
    steno_set_mode(STENO_MODE_GEMINI);
  #endif

}



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool pressed = record->event.pressed;

  uint16_t newKeycode = map_code16_hash(keycode);
  if (newKeycode > 0) {
    if (pressed) {
      register_code(newKeycode);
    } else {
      unregister_code(newKeycode);
    }
    return false;
  }

  if (!pressed) {
    return true;
  }

  switch (keycode) {
    case UC_M_OS:
      zored_os = OS_MACOS;
      break;

    case UC_M_WC:
      zored_os = OS_WINDOWS;
      break;

    // Do keys:

      case KC_DO_NEXT_MAPPING:
        run_advanced(DO_NEXT_MAPPING);
        break;
  
      case KC_DO_NEXT_LANGUAGE:
        run_advanced(DO_NEXT_LANGUAGE);
        break;
  
      case KC_DO_BOOTLOADER:
        run_advanced(DO_BOOTLOADER);
        break;
  
      case KC_DO_ONE_SHOT_CTRL:
        run_advanced(DO_ONE_SHOT_CTRL);
        break;
  
      case KC_DO_ONE_SHOT_ALT:
        run_advanced(DO_ONE_SHOT_ALT);
        break;
  
      case KC_DO_ONE_SHOT_GUI:
        run_advanced(DO_ONE_SHOT_GUI);
        break;
  
      case KC_DO_ONE_SHOT_SHIFT:
        run_advanced(DO_ONE_SHOT_SHIFT);
        break;
  

    default:
      return true;
  }

  return false;
}


