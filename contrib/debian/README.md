
Debian
====================
This directory contains files used to package astrocoind/astrocoin-qt
for Debian-based Linux systems. If you compile astrocoind/astrocoin-qt yourself, there are some useful files here.

## astrocoin: URI support ##


astrocoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install astrocoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your astrocoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/astrocoin128.png` to `/usr/share/pixmaps`

astrocoin-qt.protocol (KDE)

