
Debian
====================
This directory contains files used to package mokend/moken-qt
for Debian-based Linux systems. If you compile mokend/moken-qt yourself, there are some useful files here.

## moken: URI support ##


moken-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install moken-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mokenqt binary to `/usr/bin`
and the `../../share/pixmaps/moken128.png` to `/usr/share/pixmaps`

moken-qt.protocol (KDE)

