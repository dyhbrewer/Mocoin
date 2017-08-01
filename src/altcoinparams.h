/*
definitions below is now params for altcoin Mobicoin .
this file will be overwrite through some script to switch to other altcoins
definitions below has replaced params in :
chainparams.cpp,
consensus/consensus.h
main.cpp
util.h
*/
#ifndef BITCOIN_ALTCOINPARAMS_H
#define BITCOIN_ALTCOINPARAMS_H
/*
common
*/
const static char* TIME_STAMP =  "shanghai stock index closed at 2343.57, on 24th Sept., 2014";
const static char* PUBLIC_KEY = "049e02fa9aa3c19a3b112a58bab503c5caf797972f5cfe1006275aa5485a01b48f9f648bc5380ee1e82dc6f474c8e0f7e2f6bbd0de9355f92496e3ea327ccb19cc";

/*
Main Net
*/

/*chainparams.cpp*/
const static int HALVING_INTERVAL =  50000000;
const static int POW_TARGET_TIMESPAWN = 60 * 60 * 2;
const static int POW_TARGET_SPACING = 20;
const static bool POW_ALLOW_MIN_DIFFICULTY_BLOCKS = true;
const static int MESSAGE_START_0 = 0x90;
const static int MESSAGE_START_1 = 0x0d;
const static int MESSAGE_START_2 = 0x23;
const static int MESSAGE_START_3 = 0x33;
const static int DEFAULT_PORT = 10086;
const static int NTIME =  1411666331;
const static int NNOUNCE = 2056985438;
const static int NBITS = 0x1d00ffff;
const static int NREWORD = 100;
const static char* HASH_GENESIS_BLOCK = "0x0000000061b1aca334b059920fed7bace2336ea4d23d63428c7aee04da49e942";
const static char* HASH_MERKLE_ROOT = "0x7bf229f629a6666596c1ce57117c28d1d29299e8a5303347929bd70847c49adb";
/*TODO: DNSSEEDS*/
const static int PUBKEY_ADDRESS = 43;
const static int SCRIPT_ADDRESS = 53;
const static int SECRET_KEY = 65;
const static bool MINING_REQUIRES_PEERS = false;
const static char* POW_LIMIT = "0x0000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff";
/*TODO: CHECKPOINTS*/

/*consensus/consensus.h*/
const static int ALT_COINBASE_MATURITY =3;

/*main.cpp*/
const static int REWORD_OF_MINING = 1000;

/*util.h*/
// directory name  named after the altcoin
const static char* DATA_FILE_NAME =  "Mobicoin";
const static char* DATA_FILE_NAME_UNIX =  ".mobicoin";

/*TODO:qt default data path*/

#endif // BITCOIN_ALTCOINPARAMS_H
