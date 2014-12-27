AMD Catalyst 13.1 for Linux (fglrx-9.012)
=========================================

This is a kernel module for the proprietary AMD driver.

Patched for Linux kernels up to 3.19.

Xserver 1.13 or newer required.

Supports Radeon HD5000, HD6000 and HD7000 series.


AMD Catalyst™ 13.1 Proprietary Linux® Graphics Driver Release Notes
-------------------------------------------------------------------

Article Number: RN-LIN-C13.1

This release note provides information on the latest posting of AMD’s
proprietary Linux® graphics driver. This particular driver updates the
software version to 9.012.

The AMD Catalyst™ Linux® graphics driver release notes provide
information on the following:
 - AMD Product Compatibility
 - Linux Distributions Support
 - System Requirements
 - System Recommendations
 - New Features
 - Resolved Issues
 - Known Issues


AMD Product Compatibility
-------------------------

The AMD Catalyst proprietary Linux graphics driver is designed to be
compatible with the following AMD products. 

AMD Desktop Product Family Compatibility:
 - AMD Radeon™ HD 7900 Series
 - AMD Radeon HD 7800 Series
 - AMD Radeon HD 7700 Series
 - AMD Radeon HD 7600 Series
 - AMD Radeon HD 7500 Series
 - AMD Radeon HD 7400 Series
 - AMD Radeon HD 7300 Series
 - AMD Radeon HD 7000 Series
 - AMD Radeon HD 6900 Series
 - AMD Radeon HD 6800 Series
 - AMD Radeon HD 6700 Series
 - AMD Radeon HD 6600 Series
 - AMD Radeon HD 6500 Series
 - AMD Radeon HD 6400 Series
 - AMD Radeon HD 6300 Series
 - AMD Radeon HD 6200 Series
 - ATI Radeon HD 5900 Series
 - ATI Radeon HD 5800 Series
 - ATI Radeon HD 5700 Series
 - ATI Radeon HD 5600 Series
 - ATI Radeon HD 5500 Series
 - ATI Radeon HD 5400 Series
 - ATI Radeon HD 5000 Series

AMD All-In-One Desktop Product Family Compatibility:
 - AMD Radeon™ HD 7600A Series
 - AMD Radeon HD 7400A Series
 - AMD Radeon HD 6600A Series
 - AMD Radeon HD 6350A Series

AMD Embedded Product Family Compatibility:
 - AMD Radeon™ E6760
 - AMD Radeon E6460

AMD Integrated Product Family Compatibility:
 - AMD Radeon™ HD 7600G Series
 - AMD Radeon HD 7600D Series
 - AMD Radeon HD 7500G Series
 - AMD Radeon HD 7500D Series
 - AMD Radeon HD 7400G Series
 - AMD Radeon HD 7400D Series
 - AMD Radeon HD 7300G Series
 - AMD Radeon HD 6600G Series
 - AMD Radeon HD 6500G Series
 - AMD Radeon HD 6500D Series
 - AMD Radeon HD 6400G Series
 - AMD Radeon HD 6400D Series
 - AMD Radeon HD 6300G Series
 - AMD Radeon HD 6300D Series 
 - AMD Radeon HD 6200G Series

AMD Mobility Product Family Compatibility:
 - AMD Radeon™ HD 7900M Series
 - AMD Radeon HD 7800M Series
 - AMD Radeon HD 7700M Series
 - AMD Radeon HD 7600M Series
 - AMD Radeon HD 7500M Series
 - AMD Radeon HD 7000M Series
 - AMD Radeon HD 6900M Series
 - AMD Radeon HD 6800M Series
 - AMD Radeon HD 6700M Series
 - AMD Radeon HD 6600M Series
 - AMD Radeon HD 6500M Series
 - AMD Radeon HD 6400M Series
 - AMD Radeon HD 6300M Series
 - ATI Mobility Radeon HD 5800 Series
 - ATI Mobility Radeon HD 5700 Series
 - ATI Mobility Radeon HD 5600 Series
 - ATI Mobility Radeon HD 5500 Series
 - ATI Mobility Radeon HD 5400 Series
 - ATI Mobility Radeon HD 5000 Series


Linux Distributions Supported
-----------------------------

The latest version of the AMD Catalyst Linux software suite is designed
to support the following Linux distributions:

 - Red Hat Enterprise Linux suite 5.7, 5.8, 6.2 and 6.3
 - SUSE Linux Enterprise 10 SP4 and 11 SP2
 - OpenSUSE 11.4 and 12.1
 - Ubuntu 12.10


System Requirements
-------------------

Before attempting to install the AMD Catalyst Linux software suite, the
following software must be installed:

 - Xorg/Xserver 6.9 and above (up to 1.13)
 - Linux kernel 2.6 or above (up to 3.5)
 - glibc version 2.2 or 2.3
 - POSIX Shared Memory (/dev/shm) support is required for 3D applications

NOTE: If a Linux 2.6.11 or newer kernel was built with CONFIG_AGP enabled,
the kernel AGP frontend is required to load the fglrx kernel module.
To identify whether your kernel with CONFIG_AGP enabled, look for
CONFIG_AGP=y in the kernel config file, or if the ‘agpgart’ module is loaded


System Recommendations
----------------------

For optimal performance and ease of use, the following are available:
 - Kernel module build environment
 - Kernel source code include either the Kernel Source or Kernel Headers
packages
 - The RPM utility should be installed and configured correctly on your
system, if you intend to install via RPM packages

The following packages must be installed in order for the AMD Catalyst™
Linux graphics driver to install and work optimally:

 - XFree86-Mesa-libGL
 - libstdc++
 - libgcc
 - XFree86-libs
 - fontconfig
 - freetype
 - zlib
 - gcc


New Features
------------

The following section provides a summary of new features in this driver
version.

 - XServer 1.13 support
 - Ubuntu 12.10 Production Support


Resolved Issues
---------------

This section provides information on resolved known issues in this release
of the AMD Catalyst Linux software suite.

[368958]: Driver release version is added to GL_VERSION

[367282]: Bblank VGA display after resume from suspend

[367245]: X crash for AMD PowerXpress™ A+I High-Performance mode on Ubuntu
12.10

[366820]: Performance of Valve Linux games

[366805]: Segmentation fault when exit QtOpenGL applications such as AMD
CodeXL

[366425]: Xserver getting exit upon resume from suspend on RHEL 5.8

[364107]: VariBright not working when change AMD PowerPlay™ settings in AMD
Catalust Control Center:LE

[363638]: VariBright doesn’t work after resume from suspend on "Trinity"
platform

[350759]: Flickering cursor when run some full-screen OpenGL games with
CrossFire enabled

[347895]: OpenGL performance on "Southern Islands" ASICs

[344996]: 16 re-frames doesn’t work for H.264 @Level 5.1

[337240]: Corruption when resize the Konsole window

[304016]: One display goes black after changing from multi-display desktop
from single independent


Known Issues
------------

The following section provides a summary of open issues that may be
experienced with the AMD Catalyst Linux software suite.

[356966]: Tearing appears at the top/left corner with monitor rotation +
Vsync is enabled

[350671]: Corruption may be experienced when running Unigine Tropics 1.3

[341497]: OpenGL Bitmap performance may be impacted in certain situations
