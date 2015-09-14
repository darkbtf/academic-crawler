# Introduction #

  * Following describes a normal instruction on how to build Qt 4.6.2 for **Microsoft Visual C++ 2005** from Qt source codes.

  * **NOTICE 1:** If you want to use a BINARY VERSION of Qt 4.6.2, **SKIP** this document and turn to instructions on HOW TO use Qt 4.6.2 binaries.

  * **NOTICE 2:** This instruction **ONLY** demonstrates how to build **Qt 4.6.2 binaries for msvc2005**, which does not guarantee the same success on other Qt versions or compilers. Check http://doc.qt.nokia.com/latest/installation.html for details with other Qt versions or compilers.

  * **NOTICE 3:** The following process requires a lot of time and space. If you are short of either one, **SKIP** this document and directly use qt-4.6.2 binaries.

  * **NOTICE 4:** If you are not skilled with Qt 4.6.2, carefully following this instruction is **MORE LIKELY** to have binaries successfully built.


# Details #

## Preparations ##

### 1. Microsoft Visual Studio 2005 ###

  * VC++ 2005 is the compiler we use to build Qt 4.6.2 binaries.

  * VC++ 2005 is among **COMMERCIAL PRODUCTS** which may require authentication of use.

### 2. Microsoft Visual Studio 2005 SP1 ###

  * Better get VC++ 2005 patched with SP1 patch.

  * Visit [Microsoft Visual Studio 2005 SP1](http://www.microsoft.com/downloads/zh-cn/details.aspx?FamilyID=bb4a75ab-e2d4-4c96-b39d-37baf6b5b1dc) to acquire it.

### 3. Qt 4.6.2 Source ###

  * The Qt 4.6.2 source needed for compilation.

  * See http://qt.nokia.com to download.

### 4. **`VirtualBox` 4.0.2** ( **NOT NECESSARY, BUT RECOMMENDED** ) ###

  * **`VirtualBox` 4.0.2** is a virtual machine software.

  * The virtual machine may be the best place to build SDKs and test binaries.

  * `VirtualBox` 4.0.2 is a **OPEN-SOURCE** software.

  * Visit http://www.virtualbox.org for more details about `VirtualBox`.

### 5. Make Sure That You Have 6G Space ###

  * Compiling Qt source consumes a lot of space, make sure that you have over 6G spare space.

### 6. Make Sure That You Have Enough Long Time To Go Throug Process Below ###

  * Compiling Qt source consumes a lot of time( **MAYBE OVER 1 HOUR** ), make sure that you are not in hurry.

## Process ##

### 1. Make Directories ###

  * Make directory for compilation and installation. Example : "D:\MySDKs\qt-4.6.2-msvc2005"

  * Make directory for extraction of binaries. Example : "D:\MySDK\qt-4.6.2"

### 2. Setup/Unzip Qt 4.6.2 Source ###

  * Unzip or install qt source codes into "D:\MySDKs\qt-4.6.2-msvc2005".

  * Make sure that "configure.exe" can be found in the root directory of qt source. Example : "D:\MySDKs\qt-4.6.2-msvc2005\configure.exe".

  * Make sure that "bin\", "include\", "lib\", "src\" can be found in the root directory of qt source. Example : "D:\MySDKs\qt-4.6.2-msvc2005\bin".

### 3. Set Environment Variables ###

  * Set envirnment variables to ensure cmd command.

  * Add PATH = "**YOUR QT SOURCE DIR**\bin".

  * Add QMAKESPEC = "win32-msvc2005".

### 4. Configure Qt Source For Compilation ###

  * Open Visual Studio 2005 Command Prompt( **THIS PROCESS IS IMPORTANT** ).

  * Type in command "cd **YOUR QT SOURCE DIR**", make sure that "configure.exe" is in the current path.

  * Type in command "**configure -platform win32-msvc2005 -debug-and-release -no-qt3support -no-dsp -vcproj**".

  * In the command above, "configure" is the program to be executed, the others are options. To know all the options, type "configure /?" to check out.

### 5. Build Qt Binaries Using MSVC2005 ###

  * After type in configure command, wait several minuntes of configuration.

  * Type in "nmake" to compile qt source( **THIS MAY TAKES HOURS, RECOMMAND DISABLING NETWORK AND ANTI-SOFTWARE OR BUILD IN VIRTUAL MACHINE** ).

### 6. Install Qt Binaries ###

  * **If the process of nmake fails**, better type in "nmake clean" to clear temp files generated.

  * After nmake process completes WITHOUT ANY ERRORS, type in "nmake install" to install the binaries into "bin\", "include\", "lib\".

### 7. Extract Necessary SDK Files ###

  * After install process completes, proceed to next, otherwise you need to return to the STEP 6.

  * Move all ".dll" files in "bin\" into "**YOUR BINARIES PATH**\bin\". Example : "D:\MySDK\qt-4.6.2\bin".

  * Move all files in "include\" into "**YOUR BINARIES PATH**\include\". Example : "D:\MySDK\qt-4.6.2\include".

  * Move all ".lib" files in "include\" into "**YOUR BINARIES PATH**\lib\". Example : "D:\MySDK\qt-4.6.2\lib".

### 8. Pack & Clean Up ###

  * Pack all binaries extracted.

  * Type in "nmake clean" to clean all temp files generated.

**AFTER THE PROCESS ABOVE COMPLETES, YOU WILL HAVE BINARIES OF QT-4.6.2 SDK. REFER TO "(To Be Added)" FOR INSTRUCTIONS ON CONFIGURING Qt DEPENDENCIES IN PROJECTS.**