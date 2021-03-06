// File: gui_defs.h

// Declarations of some commonly used types in the gui driver module.

#ifndef _gui_defs_h_
#define _gui_defs_h_

////////////////////////////////////////////////////////////////////////////////
// Header file inclusions.                                                    //
////////////////////////////////////////////////////////////////////////////////

#include "gui_types.h"
#include "OSA.h"

////////////////////////////////////////////////////////////////////////////////
// Global variable declarations.                                              //
////////////////////////////////////////////////////////////////////////////////

extern guiDisplay_t guiDriver_display;

extern msg_queue_handler_t GuiDriver_queueHnd;
extern msg_queue_handler_t GuiDriverFlash_queueHnd;

#endif