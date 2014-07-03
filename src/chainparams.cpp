// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The AstroCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"

#include "assert.h"
#include "core.h"
#include "protocol.h"
#include "util.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

//
// Main network
//

unsigned int pnSeed[] =
{
  0x12345678
};

class CMainParams : public CChainParams {
public:
    CMainParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        //unsigned char pchMessageStart[4] = { 0xfb, 0xc0, 0xb6, 0xdb }; // Astrocoin: increase each by adding 2 to bitcoin's value.

        pchMessageStart[0] = 0xfb;
        pchMessageStart[1] = 0xc0;
        pchMessageStart[2] = 0xb6;
        pchMessageStart[3] = 0xdb;
        vAlertPubKey = ParseHex("0445DDD3FF07D4C48499D3FE8C6D65D72FF7E8403F5FC8BC1F7FAC5E001B54DD44B2356C7341173DA4DC228540C60CCE40DF4C7563FA1109A6C7B2E5FBEA1DEEAE");
        nDefaultPort = 14333;
        nRPCPort = 14332;
        // testnet
        //nDefaultPort = 19444;
        //nRPCPort = 19443;

	
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 20);
        //nSubsidyHalvingInterval = 210000;

        // Build the genesis block. Note that the output of the genesis coinbase cannot
        // be spent as it did not originally exist in the database.
        //CBlock(hash=3ca4c37a6a965b484837808b77bf3c0dc21a18c5342032321f2816f78a3a60e0, ver=1, hashPrevBlock=00000000, 
        //hashMerkleRoot=4a324a4688bbf15548815a8b94393a8a5ffdc102a5de0ce9573c79b2d5a32313, nTime=1389066602, nBits=1e0ffff0, nNonce=1501935, vtx=1)
        //CTransaction(hash=4a324a4688, ver=1, vin.size=1, vout.size=1, nLockTime=0)
        //CTxIn(COutPoint(0000000000, 4294967295), 
        //coinbase 04ffff001d0104484e592054696d65732030362f4a616e2f323031342059656c6c656e2057696e7320746865204261636b696e67206f662053656e61746f727320746f204c6561642074686520466564)
        //CTxOut(nValue=1.00000000, scriptPubKey=040184710fa689ad5023690c80f3a4)

        const char* pszTimestamp = "NY Times 06/Jan/2014 Yellen Wins the Backing of Senators to Lead the Fed";
        CTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        
        txNew.vin[0].scriptSig = CScript() << 486604799 << CBigNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 1.0 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("040184710fa689ad5023690c80f3a49c8f13f8d45b8c857fbcbc8bc4a8e4d3eb4b10f4d4604fa08dce601aaf0f470216fe1b51850b4acf21b179c45070ac7b03a9") << OP_CHECKSIG;
        
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime    = 1389066606;
        genesis.nBits    = 0x1e0ffff0;
        genesis.nNonce   = 2024374987;

        hashGenesisBlock = genesis.GetHash();

        assert(hashGenesisBlock == uint256("0x56976ec578752667ee37a6e21b37a944ec5b17b2bfc11e97e0882aedc4e4f3c9"));
        // merkle to change
        assert(genesis.hashMerkleRoot == uint256("0x4a324a4688bbf15548815a8b94393a8a5ffdc102a5de0ce9573c79b2d5a32313"));

        vSeeds.push_back(CDNSSeedData("astrocoin.co seed #1", "seed1.astrocoin.com"));
        vSeeds.push_back(CDNSSeedData("astrocoin.co seed #2", "107.22.238.207"));
        vSeeds.push_back(CDNSSeedData("astrocoin.co seed #3", "24.184.100.134"));
        vSeeds.push_back(CDNSSeedData("astrocoin.co seed #4", "198.245.54.21"));
        vSeeds.push_back(CDNSSeedData("astrocoin.co seed #5", "213.127.238.164"));
        vSeeds.push_back(CDNSSeedData("astrocoin.co seed #5", "23.90.191.58"));
        vSeeds.push_back(CDNSSeedData("astrocoin.co seed #5", "astrocoin.no-ip.biz"));

        base58Prefixes[PUBKEY_ADDRESS] = list_of(38);
        base58Prefixes[SCRIPT_ADDRESS] = list_of(5);
        base58Prefixes[SECRET_KEY]     = list_of(396);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0xC4)(0x88)(0x35)(0xCF);
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x88)(0xE4)(0xE1);

        // Convert the pnSeeds array into usable address objects.
        for (unsigned int i = 0; i < ARRAYLEN(pnSeed); i++)
        {
            // It'll only connect to one or two seed nodes because once it connects,
            // it'll get a pile of addresses with newer timestamps.
            // Seed nodes are given a random 'last seen time' of between one and two
            // weeks ago.
            const int64_t nOneWeek = 7*24*60*60;
            struct in_addr ip;
            memcpy(&ip, &pnSeed[i], sizeof(ip));
            CAddress addr(CService(ip, GetDefaultPort()));
            addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
            vFixedSeeds.push_back(addr);
        }
    }

    virtual const CBlock& GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::MAIN; }

    virtual const vector<CAddress>& FixedSeeds() const {
        return vFixedSeeds;
    }
protected:
    CBlock genesis;
    vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;


//
// Testnet (v3) 
//
class CTestNetParams : public CMainParams {
public:
    CTestNetParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0xfc;
        pchMessageStart[1] = 0xc1;
        pchMessageStart[2] = 0xb7;
        pchMessageStart[3] = 0xdc;
        nSubsidyHalvingInterval = 150;
        vAlertPubKey = ParseHex("04BB76D6105BC42C2B290425E75A3586478364B1D2FD7938E48989FE21504B06FD0936C23A483482B8B912C2A7C7BB6665DB90C7194EB29D0A6A6E6DFDF9FB6608");
        nDefaultPort = 19444;
        nRPCPort = 19443;
        strDataDir = "testnet3";

        // Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1389066602;
        genesis.nNonce = 1501935;
        
        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x3ca4c37a6a965b484837808b77bf3c0dc21a18c5342032321f2816f78a3a60e0"));
        assert(genesis.hashMerkleRoot == uint256("0x4a324a4688bbf15548815a8b94393a8a5ffdc102a5de0ce9573c79b2d5a32313"));



        vFixedSeeds.clear();
        vSeeds.clear();
        //vSeeds.push_back(CDNSSeedData("testnet.astrocoin.org", "testnet-seed.astrocoin.org"));

        base58Prefixes[PUBKEY_ADDRESS] = list_of(111);
        base58Prefixes[SCRIPT_ADDRESS] = list_of(196);
        base58Prefixes[SECRET_KEY]     = list_of(239);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0xC8)(0xE4)(0xCF)(0xF4);
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x44)(0xD5)(0x35)(0xE1);
    }
    virtual Network NetworkID() const { return CChainParams::TESTNET; }
};
static CTestNetParams testNetParams;


//
// Regression test
//
class CRegTestParams : public CTestNetParams {
public:
    CRegTestParams() {
        pchMessageStart[0] = 0xfa;
        pchMessageStart[1] = 0xb3;
        pchMessageStart[2] = 0xb2;
        pchMessageStart[3] = 0xdb;
        //nSubsidyHalvingInterval = 150;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 1);
        genesis.nTime = 1392796564;
        genesis.nBits = 0x207fffff;
        genesis.nNonce = 961533;
        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 18444;
        strDataDir = "regtest";
        //assert(hashGenesisBlock == uint256("0x0f9188f13cb7b2c71f2a335e3a4fc328bf5beb436012afca590b1a11466e2206"));

        vSeeds.clear();  // Regtest mode doesn't have any DNS seeds.
    }

    virtual bool RequireRPCPassword() const { return false; }
    virtual Network NetworkID() const { return CChainParams::REGTEST; }
};
static CRegTestParams regTestParams;

static CChainParams *pCurrentParams = &mainParams;

const CChainParams &Params() {
    return *pCurrentParams;
}

void SelectParams(CChainParams::Network network) {
    switch (network) {
        case CChainParams::MAIN:
            pCurrentParams = &mainParams;
            break;
        case CChainParams::TESTNET:
            pCurrentParams = &testNetParams;
            break;
        case CChainParams::REGTEST:
            pCurrentParams = &regTestParams;
            break;
        default:
            assert(false && "Unimplemented network");
            return;
    }
}

bool SelectParamsFromCommandLine() {
    bool fRegTest = GetBoolArg("-regtest", false);
    bool fTestNet = GetBoolArg("-testnet", false);

    if (fTestNet && fRegTest) {
        return false;
    }

    if (fRegTest) {
        SelectParams(CChainParams::REGTEST);
    } else if (fTestNet) {
        SelectParams(CChainParams::TESTNET);
    } else {
        SelectParams(CChainParams::MAIN);
    }
    return true;
}
