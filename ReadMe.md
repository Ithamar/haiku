Cosmoe
------

This branch represents a continuation of the old [cosmoe](http://web.archive.org/web/20110602144005/http://www.cosmoe.com/) project, which was an effort to get the Haiku userland running on a MacOS X / BSD / Linux base system, using X-Windows, framebuffer or SDL as displaying surface.

This last code released by the original project can be found on the URL above, and a version made building again on Ubuntu @ [Ithamar/cosmoe](https://github.com/Ithamar/cosmoe).

Cosmoe-ng
---------

Although the old project used their own source tree, their own build system, etc, this time around I am branching a normal Haiku tree and making as little modifications to the core code as possble. This to prevent (as the original Cosmoe did) to get stuck at an old code drop for too long. Luckily, the Haiku code has improved a lot, is mostly 64-bit clean, and very portable (given a couple of GCC-isms being used).

Plese note that nothing from the cosmoe branch will go upstream as-is. It is meant as an experiment, and will need major surgery before being able to be upstreamed, if at all.

Build setup
-----------

As mainline Haiku already builds a very minimal Haiku API for the host, to be able to build some Haiku-specific build tools, I have decided this time to reuse that setup and build more of the Haiku components this way. This means I have very little build system hacking to do. However, looking at what I have done so far, I suspect I will move to making the 'host' build a proper target, reducing the amount of Jamfile changes I would need to make even further, and allowing a cleaner way of handling required libraries on the host.

For now, this is roughly the procedure I use to build:

    ./configure --host-only --target=host
    jam -q <build>app_server

This ofcourse assumes you have the Haiku version of jam already installed on your host. The buildtools repository from Haiku is not needed in this setup.

Please note that at the time of this writing, the following libraries should be installed on the host (with the appropriate -dev packages ofcourse!):

    icu4c freetype z

More will be required further along the line, for now this is enough.

Stubs
-----

In the initial state, all of the OS.h functions and kernel syscall functions are stubbed out. The trick will be to get as many of these implemented properly, borrowing from the original Cosmoe code, the fsh Haiku code, and ofcourse writing new code for them as well. Again, patches welcome!

Stubs are mostly located in [syscalls.cpp](https://github.com/Ithamar/haiku/blob/cosmoe/src/build/libhaikucompat/syscalls.cpp) and [libroot](https://github.com/Ithamar/haiku/tree/cosmoe/src/build/libroot).

