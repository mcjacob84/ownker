// ##################### Documentation creation page ########################
/**
@page docpage Documentation creation
@short Guidlines for creating and maintaining this documentation

@par Main script \c make.sh
When first downloading the KerMor software you need to adjust the following paths in \c make.sh :
@code
# Source directory
SourceDir="<kermor source path>"
# Documentation output directory
OutDir="<documentation output directory>"
# The doxygen binary to use
doxybin="doxygen"
# Custom binary:
# doxybin="<some absolute path>/doxygen"
@endcode
Next, you can compile the documentation via
@verbatim ./make.sh @endverbatim
and the html output will be placed in a html subfolder of \c OutDir.

Optionally a parameter \c uml can be passed and
@verbatim ./make.sh uml @endverbatim
generates graphical class visualizations that are UML-Style. This feature actually corresponds to the setting \c UMLSWITCH i.e. \c UML_LOOK in the Doxyfile.m4

@par Complete file list of documentation creation related files
Usually, one should not have to do anything more than the above procedure, but the following complete list of files gives a short overview about their purpose:
@li \c make.sh - Main documentation creation script.
@li \c Commands.tex - Place any custom commands you want to use within your in-code latex environment inside this file.
@li \c DocumentationGuide - This is an example class showing how to document matlab classes in order to have them displayed most sensibly using doxygen.
@li \c Doxyfile.m4 - The configuration file for doxygen. Is parsed using the m4 preprocessor to insert correct paths.
@li \c doxygen_todo.m - A matlab file containing some tasks yet to investigate regarding the doxygen documentation creation.
@li \c groups.c - Documentation of Modules
@li \c handle_substitute.c - A C file that contains a fake handle class description as the native matlab handle class is not found/parsed by doxygen.
@li \c kermor.jpg - The logo of KerMor
@li \c kermorlatex.m4 - The style file included into the _formulas.tex file when latex is run. Add any additional package declarations here (or in Commands.tex)
Will be processed by m4 for correct path substitution.
@li \c mainpage.c - The main page source documentation file
@li \c relatedpages.c - The source file for all related pages except the changelog
@li \c changelogs.c - The manual source files for the changelog pages
@li \c mtoc - M to C preprocessing binary (Thanks to M. Drohmann, Univ. of M�nster!)
@li \c mtoc.conf - M to C configuration file mtoc.conf
@li \c packages.c - The package documentation C file
@li \c postprocess - Binary for postprocessing any generated html files (removes matlabtypesubstitute etc)
For more details on some files see the following paragraphs.

@par Groups documentation groups.c

@par M to C configuration file mtoc.conf
*/

// ##################### MUnit testing page ########################
/**
@page unittesting The KerMor testing framework MUnit
@short Guidlines on how to test MatLab-Code using MUnit

@par MUnit class file documentation
For all details @ref testing.MUnit !

@copydoc testing::MUnit
*/