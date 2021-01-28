#pragma once

#define AUTO_SHIFT_TIMEOUT 225
// After this period, a pressed key sends the shifted version.

#define NO_AUTO_SHIFT_NUMERIC
// #define NO_AUTO_SHIFT_SPECIAL

// #define RETRO_SHIFT 
// #define RETRO_SHIFT 400  

// Configure the global tapping term (default: 200ms)
// Lower than 250 and I can't tap dance brackets without a run up.
#define TAPPING_TERM 250

#define TAPPING_TERM_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.
// #define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD 
