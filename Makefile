#############################################################################
# Makefile for building: MusicDowland
# Generated by qmake (3.1) (Qt 5.9.0)
# Project:  MusicDowland\MusicDowland.pro
# Template: app
# Command: D:\Qt\Qt5.9.0\5.9\mingw53_32\bin\qmake.exe -o Makefile MusicDowland\MusicDowland.pro -spec win32-g++
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = D:\Qt\Qt5.9.0\5.9\mingw53_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL_FILE = D:\Qt\Qt5.9.0\5.9\mingw53_32\bin\qmake.exe -install qinstall file
QINSTALL_PROGRAM = D:\Qt\Qt5.9.0\5.9\mingw53_32\bin\qmake.exe -install qinstall program
QINSTALL_DIR  = D:\Qt\Qt5.9.0\5.9\mingw53_32\bin\qmake.exe -install qinstall directory
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: MusicDowland/MusicDowland.pro ../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/spec_pre.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/qdevice.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/device_config.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/g++-base.conf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/angle.conf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/sanitize.conf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/gcc-base.conf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/qconfig.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_core.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_core_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_designer.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gui.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_help.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_help_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_location.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_location_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_network.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_network_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qml.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quick.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sql.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_svg.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xml.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qt_functions.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qt_config.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/win32-g++/qmake.conf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/spec_post.prf \
		.qmake.stash \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/exclusive_builds.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/toolchain.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/default_pre.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/win32/default_pre.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/resolve_config.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/exclusive_builds_post.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/default_post.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/precompile_header.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/warn_on.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qt.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/resources.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/moc.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/win32/opengl.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/uic.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qmake_use.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/file_copies.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/win32/windows.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/testcase_targets.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/exceptions.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/yacc.prf \
		../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/lex.prf \
		MusicDowland/MusicDowland.pro \
		../../Qt/Qt5.9.0/5.9/mingw53_32/lib/qtmain.prl \
		../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Multimedia.prl \
		../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Widgets.prl \
		../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Gui.prl \
		../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Network.prl \
		../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Core.prl
	$(QMAKE) -o Makefile MusicDowland\MusicDowland.pro -spec win32-g++
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/spec_pre.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/qdevice.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/device_config.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/g++-base.conf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/angle.conf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/sanitize.conf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/common/gcc-base.conf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/qconfig.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_core.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_core_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_designer.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gui.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_help.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_help_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_location.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_location_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_network.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_network_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qml.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quick.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sql.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_svg.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xml.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qt_functions.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qt_config.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/win32-g++/qmake.conf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/spec_post.prf:
.qmake.stash:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/exclusive_builds.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/toolchain.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/default_pre.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/win32/default_pre.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/resolve_config.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/exclusive_builds_post.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/default_post.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/precompile_header.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/warn_on.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qt.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/resources.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/moc.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/win32/opengl.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/uic.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/qmake_use.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/file_copies.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/win32/windows.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/testcase_targets.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/exceptions.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/yacc.prf:
../../Qt/Qt5.9.0/5.9/mingw53_32/mkspecs/features/lex.prf:
MusicDowland/MusicDowland.pro:
../../Qt/Qt5.9.0/5.9/mingw53_32/lib/qtmain.prl:
../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Multimedia.prl:
../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Widgets.prl:
../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Gui.prl:
../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Network.prl:
../../Qt/Qt5.9.0/5.9/mingw53_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile MusicDowland\MusicDowland.pro -spec win32-g++

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
