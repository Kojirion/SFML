////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2015 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_SYSTEMHANDLE_HPP
#define SFML_SYSTEMHANDLE_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Config.hpp>
#include <SFML/System/Export.hpp>

////////////////////////////////////////////////////////////
// Platform specific forward declarations
////////////////////////////////////////////////////////////
#if defined(SFML_SYSTEM_ANDROID)
struct ANativeActivity;
#endif

namespace sf
{
#if defined(SFML_SYSTEM_WINDOWS)

    // System handle is HANDLE (void*) on Windows
    typedef void* SystemHandle;

#elif defined(SFML_SYSTEM_LINUX) || defined(SFML_SYSTEM_FREEBSD)

    // System handle is ??? on Unix - X11
    typedef void* SystemHandle;

#elif defined(SFML_SYSTEM_MACOS)

    // System handle is ??? on Mac OS X - Cocoa
    typedef void* SystemHandle;

#elif defined(SFML_SYSTEM_IOS)

    // System handle is ??? on iOS - UIKit
    typedef void* SystemHandle;

#elif defined(SFML_SYSTEM_ANDROID)

    // System handle is ANativeActivity* on Android
    typedef ANativeActivity* SystemHandle;

#elif defined(SFML_DOXYGEN)

    // Define typedef symbol so that Doxygen can attach some documentation to it
    typedef "platform–specific" SystemHandle;

#endif

////////////////////////////////////////////////////////////
/// \ingroup system
/// \brief Return the system specific handle to the current process or activity
///
/// The type of the returned handle is sf::SystemHandle, which is a typedef to
/// the handle type defined by the OS. You shouldn't need to use this function,
/// unless you have very specific stuff to implement that SFML doesn't support,
/// or implement a temporary workaround until a bug is fixed
///
/// \return System specific handle to the current process or activity
///
////////////////////////////////////////////////////////////
SystemHandle SFML_SYSTEM_API getSystemHandle();

} // namespace sf

////////////////////////////////////////////////////////////  
/// \typedef sf::SystemHandle
/// \ingroup system
///
/// Define a low-level system/process handle type, specific
/// to each platform.
///
/// Platform        | Type
/// ----------------|------------------------------------------------------------
/// Windows         | Process handle of the current program (\p HANDLE)
/// Linux/FreeBSD   | \p ???
/// Mac OS X        | \p ???
/// iOS             | \p ???
/// Android         | Native Activity Handle (\p ANativeActivity*)
///
////////////////////////////////////////////////////////////

#endif // SFML_SYSTEMHANDLE_HPP
