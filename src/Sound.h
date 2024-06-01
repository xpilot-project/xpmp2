/// @file       Sound.h
/// @brief      Sound for aircraft, based on the FMOD library
///
/// @note       Audio Engine is FMOD Core API by Firelight Technologies Pty Ltd.
///             Understand FMOD [licensing](https://www.fmod.com/licensing) and
///             [attribution requirements](https://www.fmod.com/attribution) first!\n
///             Sound support is only included if built with CMake cache entry `INCLUDE_FMOD_SOUND`.\n
///
/// @author     Birger Hoppe
/// @copyright  (c) 2022 Birger Hoppe
/// @copyright  Permission is hereby granted, free of charge, to any person obtaining a
///             copy of this software and associated documentation files (the "Software"),
///             to deal in the Software without restriction, including without limitation
///             the rights to use, copy, modify, merge, publish, distribute, sublicense,
///             and/or sell copies of the Software, and to permit persons to whom the
///             Software is furnished to do so, subject to the following conditions:\n
///             The above copyright notice and this permission notice shall be included in
///             all copies or substantial portions of the Software.\n
///             THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
///             IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
///             FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
///             AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
///             LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
///             OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
///             THE SOFTWARE.

#pragma once

// Only included if specified. Understand FMOD licensing and attribution first!
#ifdef INCLUDE_FMOD_SOUND

// FMOD header files only here in this module!
// This one includes everything
#include "fmod_errors.h"

namespace XPMP2 {

extern FMOD_SYSTEM* gpFmodSystem;

//
// MARK: Global Functions
//

/// Initialize the sound module and load the sounds
bool SoundInit ();

/// Prepare for this frame's updates, which are about to start
void SoundUpdatesBegin();

/// Tell FMOD that all updates are done
void SoundUpdatesDone ();

/// Graceful shoutdown
void SoundCleanup ();

}

#endif // INCLUDE_FMOD_SOUND
