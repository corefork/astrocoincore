// Copyright (c) 2011-2014 The AstroCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ASTROCOINADDRESSVALIDATOR_H
#define ASTROCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class AstroCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AstroCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** AstroCoin address widget validator, checks for a valid astrocoin address.
 */
class AstroCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AstroCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // ASTROCOINADDRESSVALIDATOR_H
