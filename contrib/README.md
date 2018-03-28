
Debian
====================
This directory contains files used to package sipsd/sips-qt
for Debian-based Linux systems. If you compile sipsd/sips-qt yourself, there are some useful files here.

## sips: URI support ##


sips-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install sips-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your sipsqt binary to `/usr/bin`
and the `../../share/pixmaps/sips128.png` to `/usr/share/pixmaps`

sips-qt.protocol (KDE)

