AstroCoin Core version 0.9.1 BETA 
====================

Copyright (c) 2009-2014 Bitcoin Developers
Copyright (c) 2011-2014 Astrocoin Developers

Distributed under the MIT/X11 software license, see the accompanying
file COPYING or http://www.opensource.org/licenses/mit-license.php.
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.


Intro
---------------------
Astrocoin is a free open source peer-to-peer electronic cash system that is
completely decentralized, without the need for a central server or trusted
parties.  Users hold the crypto keys to their own money and transact directly
with each other, with the help of a P2P network to check for double-spending.

Setup
---------------------
You need the Qt5 run-time libraries to run Astrocoin-Qt. On Debian or Ubuntu:
  `sudo apt-get install libqtgui4`

[AstroCoin Core](http://astrocoin.biz) is the original AstroCoin client and it builds the backbone of the network. However, it downloads and stores the entire history of AstroCoin transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once. 
https://bitcointalk.org/index.php?topic=425367.0
Source is now available from https://github.com/astrocoin-project/astrocoin

Running
---------------------
The following are some helpful notes on how to run AstroCoin on your native platform. 

### Unix

You need the Qt4 run-time libraries to run AstroCoin-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/astrocoin-qt (GUI, 32-bit) or bin/32/astrocoind (headless, 32-bit)
- bin/64/astrocoin-qt (GUI, 64-bit) or bin/64/astrocoind (headless, 64-bit)



### Windows

Unpack the files into a directory, and then run astrocoin-qt.exe.

### OSX

Drag AstroCoin-Qt to your applications folder, and then run AstroCoin-Qt.

### Need Help?

* See the documentation at the [AstroCoin Wiki](http://astrocoin.info)
for help and more information.
* Ask for help on the [AstroCoinTalk](https://bitcointalk.org/) forums, in the [Technical Support board](https://bitcointalk.org/index.php?topic=425367.0).

Building
---------------------
The following are developer notes on how to build AstroCoin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-msw.md)

Development
---------------------
The AstroCoin repo's [root README](https://github.com/astrocoin-project/astrocoin/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Coding Guidelines](coding.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)

### Resources
* Discuss on the [AstroCoinTalk](https://bitcointalk.org/) forums, in the [Development & Technical Discussion board](https://bitcointalk.org/index.php?topic=425367.0).


### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
