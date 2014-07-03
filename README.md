AstroCoin Core integration/staging tree
=====================================

AstroCoin Core based on latest Bitcoin Core (0.9.1).

In AstroCoin Core 0.9.1 fixed several typos of AstroCoin version 0.8.6: 
- incorrect "(out of sync)" message and ticker icon.
- port numbers in translations are changed to AstroCoin ports.
- fixed incorrect checkpoint value in checkpoints.cpp 


~~~~~~~~~~~~~

This version of AstroCoin Core wallet was built without any additional payment to help integrate the latest Qt wallet.

If you love new AstroCoin Core wallet and wish to donate - kindly donate to me:

AstroCoin address: GK6LbFJapHcZmz9XibXqE5hiytwsSG2TUM

Bitcoin address: 17K22BasPBqBzPy1VQsHzkKAUFxKdYJasL

Litecoin address: LQsdcbYB3GAJ57fPEdPgrN2fVJuMJRwret

~~~~~~~~~~~~~

Binaries:

OSX-64: [AstroCoin-Qt-0.9.1.dmg 15.6 MB]
https://mega.co.nz/#!Ix4XnKzJ!8WNic2quUjvbZLOBoIFEuxhHfvI3NcoLHWWdskibboc

Win32: [AstroCoinCore-0.9.1.zip 14.6 MB]
https://mega.co.nz/#!p05C1IzZ!1nJJkjMb3pQBrIPaCmzPKujIaCb_YGt_NOyinCpAby0

Win32 installer: [astrocoin-0.9.1-win32-setup.exe 12.2 MB]
https://mega.co.nz/#!lwR0kBKL!zAxbQsnqYxLtlJ_VK2Dw3agymrJJDKww_cyefxkduY0


~~~~~~~~~~~~~

Note: Latest version of AstroCoin Core should appear on developer website after testing by developers community.
Please check developer website/github for latest confirmed updates: 
http://astrocoin.biz
https://github.com/astrocoin-project/astrocoin

~~~~~~~~~~~~~




Astrocoin integration/staging tree
=====================================

http://astrocoin.biz

Copyright (c) 2009-2013 Bitcoin Developers
Copyright (c) 2011-2013 Astrocoin Developers
Copyright (c) 2013-2014 Astrocoin Core Developers

What is Astrocoin?
----------------

Astrocoin is a lite version of Bitcoin using scrypt as a proof-of-work algorithm.
 - 3 min. Block Time - 
 - subsidy halves in 840k blocks (~4 years)
 - Scheduled to Produce 210,000 Total Astrocoins

The rest is the same as Bitcoin.
 - 1 Coin Reward Per Block, halves every 70K Blocks
 - Difficulty Retarget Every Day

For more information, as well as an immediately useable, binary version of
the Astrocoin client sofware, see http://www.astrocoin.biz.
Source code can be found at https://github.com/astrocoin-project/astrocoin

License
-------

Astrocoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Astrocoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of Astrocoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code. 

Unit tests can be compiled and run (assuming they weren't disabled in configure) with: `make check`

