#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/astrocoin.png
ICON_DST=../../src/qt/res/icons/astrocoin.ico
convert ${ICON_SRC} -resize 16x16 astrocoin-16.png
convert ${ICON_SRC} -resize 32x32 astrocoin-32.png
convert ${ICON_SRC} -resize 48x48 astrocoin-48.png
convert astrocoin-16.png astrocoin-32.png astrocoin-48.png ${ICON_DST}

