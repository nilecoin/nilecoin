// Copyright (c) 2014-2017 Coin Sciences Ltd
// MultiChain code distributed under the GPLv3 license, see COPYING file.

#ifndef MULTICHAINPARAMLIST_H
#define MULTICHAINPARAMLIST_H

static const mc_OneMultichainParam MultichainParamArray[] =
{
    { "chainprotocol"                          , "chain-protocol"                          ,
                   MC_PRM_STRING  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_SPECIAL , 16,         0,          0,         0, 0.0, 10001, 0, "-mc-chainprotocol",
                   "chaindescription","Basic chain parameters",
                   "Chain protocol: multichain (permissions, native assets) or bitcoin"},
    { "chaindescription"                       , "chain-description"                       ,
                   MC_PRM_STRING  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_SPECIAL ,256,         0,          0,         0, 0.0, 10001, 0, "-mc-chaindescription",
                   "rootstreamname","",
                   "Chain description, embedded in genesis block coinbase, max 256 chars."},
    { "rootstreamname"                       , "root-stream-name"                       ,
                   MC_PRM_STRING  | MC_PRM_USER | MC_PRM_CLONE  | MC_PRM_SPECIAL,256,         0,          0,         0, 0.0, 10006, 0, "-mc-rootstreamname",
                   "rootstreamopen","",
                   "Root stream name, blank means no root stream."},
    { "rootstreamopen"                       , "root-stream-open"                       ,
                   MC_PRM_BOOLEAN  | MC_PRM_USER | MC_PRM_CLONE                 , -1  ,       1,          0,         0, 0.0, 10006, 0, "-mc-rootstreamopen",
                   "chainistestnet","",
                   "Allow anyone to publish in root stream"},
    { "chainistestnet"                         , "chain-is-testnet"                   ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-chainistestnet",
                   "targetblocktime","",
                   "Content of the 'testnet' field of API responses, for compatibility."},
    { "targetblocktime"                        , "target-block-time"                    ,
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,        15,         2,     86400, 0.0, 10001, 0, "-mc-targetblocktime",
                   "maximumblocksize","",
                   "Target time between blocks (transaction confirmation delay), seconds."},
    { "maximumblocksize"                       , "maximum-block-size"               , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,   8388608,       1000,1000000000, 0.0, 10001, 0, "-mc-maximumblocksize",
                   "defaultnetworkport","",
                   "Maximum block size in bytes."},
    { "defaultnetworkport"                , "default-network-port"              ,
                   MC_PRM_UINT32  | MC_PRM_GENERATED | MC_PRM_CLONE                  , -1, MC_DEFAULT_NETWORK_PORT,       1024,     65535, 0.0, 10001, 0, "-mc-defaultnetworkport",
                   "defaultrpcport","",
                   "Default TCP/IP port for peer-to-peer connection with other nodes."},
    { "defaultrpcport"                    , "default-rpc-port"                  ,
                   MC_PRM_UINT32  | MC_PRM_GENERATED | MC_PRM_CLONE | MC_PRM_MINIMAL , -1, MC_DEFAULT_RPC_PORT,       1024,     65535, 0.0, 10001, 0, "-mc-defaultrpcport",
                   "anyonecanconnect","",
                   "Default TCP/IP port for incoming JSON-RPC API requests."},
                   
    { "anyonecanconnect"                  , "anyone-can-connect"                ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-anyonecanconnect",
                   "anyonecansend","Global permissions",
                   "Anyone can connect, i.e. a publicly readable blockchain."},
    { "anyonecansend"                     , "anyone-can-send"                   ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-anyonecansend",
                   "anyonecanreceive","",
                   "Anyone can send, i.e. transaction signing not restricted by address."},
    { "anyonecanreceive"                  , "anyone-can-receive"                ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-anyonecanreceive",
                   "anyonecanreceiveempty","",
                   "Anyone can receive, i.e. transaction outputs not restricted by address."},
    { "anyonecanreceiveempty"                  , "anyone-can-receive-empty"                ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         1,          0,         0, 0.0, 10007, 0, "-mc-anyonecanreceiveempty",
                   "anyonecancreate","",
                   "Anyone can receive empty output, i.e. without permission grants, asset transfers and zero native currency."},
    { "anyonecancreate"                  , "anyone-can-create"                ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10006, 0, "-mc-anyonecancreate",
                   "anyonecanissue","",
                   "Anyone can create new streams."},
    { "anyonecanissue"                    , "anyone-can-issue"                  ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-anyonecanissue",
                   "anyonecanmine","",
                   "Anyone can issue new native assets."},
    { "anyonecanmine"                     , "anyone-can-mine"                   ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-anyonecanmine",
                   "anyonecanactivate","",
                   "Anyone can mine blocks (confirm transactions)."},
    { "anyonecanactivate"                 , "anyone-can-activate"                   ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10003, 0, "-mc-anyonecanactivate",
                   "anyonecanadmin","",
                   "Anyone can grant or revoke connect, send and receive permissions."},
    { "anyonecanadmin"                     , "anyone-can-admin"                   ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-anyonecanadmin",
                   "supportminerprecheck","",
                   "Anyone can grant or revoke all permissions."},
    { "supportminerprecheck"                         , "support-miner-precheck"                         ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         1,          0,         0, 0.0, 10007, 0, "-mc-supportminerprecheck",
                   "allowp2shoutputs","",
                   "Require special metadata output with cached scriptPubKey for input, to support advanced miner checks."},
    { "allowp2shoutputs"                         , "allow-p2sh-outputs"                         ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         1,          0,         0, 0.0, 10001, 0, "-mc-allowp2shoutputs",
                   "allowmultisigoutputs","",
                   "Allow pay-to-scripthash (P2SH) scripts, often used for multisig."},
    { "allowmultisigoutputs"                     , "allow-multisig-outputs"                     , 
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         1,          0,         0, 0.0, 10001, 0, "-mc-allowmultisigoutputs",
                   "setupfirstblocks","",
                   "Allow bare multisignature scripts, rarely used but still supported."},
                   
    { "setupfirstblocks"                       , "setup-first-blocks"                       , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,         60,         1,  31536000, 0.0, 10001, 0, "-mc-setupfirstblocks",
                   "miningdiversity","Consensus requirements",
                   "Length of initial setup phase in blocks, in which mining-diversity,\nadmin-consensus-* and mining-requires-peers are not applied."},    
    { "miningdiversity"                   , "mining-diversity"                   , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL , -1,    300000,          0,   1000000, 0.0, 10001, 0, "-mc-miningdiversity",
                   "adminconsensusupgrade","",
                   "Miners must wait <mining-diversity>*<active miners> between blocks."},
    { "adminconsensusupgrade"               , "admin-consensus-upgrade"               , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL , -1,    500000,          0,   1000000, 0.0, 10008, 0, "-mc-adminconsensusupgrade",
                   "adminconsensusadmin","",
                   "<admin-consensus-upgrade>*<active admins> needed to upgrade the chain."},
    { "adminconsensusadmin"               , "admin-consensus-admin"               , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL , -1,    500000,          0,   1000000, 0.0, 10001, 0, "-mc-adminconsensusadmin",
                   "adminconsensusactivate","",
                   "<admin-consensus-admin>*<active admins> needed to change admin perms."},
    { "adminconsensusactivate"                , "admin-consensus-activate"              , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL , -1,    500000,          0,   1000000, 0.0, 10003, 0, "-mc-adminconsensusactivate",            
                   "adminconsensusmine","",
                   "<admin-consensus-activate>*<active admins> to change activate perms."},
    { "adminconsensusmine"                , "admin-consensus-mine"              , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL , -1,    500000,          0,   1000000, 0.0, 10001, 0, "-mc-adminconsensusmine",            
                   "adminconsensuscreate","",
                   "<admin-consensus-mine>*<active admins> to change mining permissions."},
    { "adminconsensuscreate"                , "admin-consensus-create"              , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL , -1,         0,          0,   1000000, 0.0, 10006, 0, "-mc-adminconsensuscreate",            
                   "adminconsensusissue","",
                   "<admin-consensus-issue>*<active admins> to change create permissions."},
    { "adminconsensusissue"                , "admin-consensus-issue"              , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL , -1,         0,          0,   1000000, 0.0, 10003, 0, "-mc-adminconsensusissue",            
                   "lockadminminerounds","",
                   "<admin-consensus-issue>*<active admins> to change issue permissions."},
    { "lockadminminerounds"                       , "lock-admin-mine-rounds"                       , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_NOHASH  , -1,         10,         0,     10000, 0.0, 10007, 0, "-mc-setupfirstblocks",
                   "miningrequirespeers","Defaults for node runtime parameters",
                   "Ignore forks that reverse changes in admin or mine permissions after this many mining rounds have passed. Integer only."},    
    { "miningrequirespeers"               , "mining-requires-peers"             ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_NOHASH  , -1,         1,          0,         0, 0.0, 10001, 0, "-mc-miningrequirespeers",
                   "mineemptyrounds","",
                   "Nodes only mine blocks if connected to other nodes (ignored if only one permitted miner)."},                   
    { "mineemptyrounds"                   , "mine-empty-rounds"             ,
                   MC_PRM_INT32   | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL | MC_PRM_NOHASH, -1,  10000000,    -1000000,  1000000000, 0.0, 10007, 0, "-mc-mineemptyrounds",
                   "miningturnover","",
                   "Mine this many rounds of empty blocks before pausing to wait for new transactions. If negative, continue indefinitely (ignored if target-adjust-freq>0). Non-integer allowed."},                   
    { "miningturnover"                    , "mining-turnover"             ,
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE | MC_PRM_DECIMAL | MC_PRM_NOHASH, -1,    500000,          0,   1000000, 0.0, 10007, 0, "-mc-miningturnover",
                   "initialblockreward","",
                   "Prefer pure round robin between a subset of active miners to minimize forks (0.0) or random equal participation for all permitted miners (1.0)."},                   
/*                   
    { "minimumblocktxs"                   , "minimum-block-txs"             ,
                   MC_PRM_UINT32 | MC_PRM_USER | MC_PRM_CLONE  | MC_PRM_NOHASH  , -1,          0,          0,     1000, 0.0, 10007, 0, "-mc-minimumblocktxs",
                   "initialblockreward","",
                   "Recommended minimal number of transactions in block."},
*/                   
    { "firstblockreward"                 , "first-block-reward"             ,
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,        -1,         -1,1000000000000000000, 0.0, 10002, 0, "-mc-genesisblockreward",
                   "rewardhalvinginterval","",
                   "Different mining reward for first block only, ignored if negative."},
    { "initialblockreward"                 , "initial-block-reward"             ,
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,1000000000000000000, 0.0, 10001, 0, "-mc-initialblockreward",
                   "firstblockreward","Native blockchain currency (likely not required)",
                   "Initial block mining reward in raw native currency units."},
    { "rewardhalvinginterval"            , "reward-halving-interval"          ,
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,  52560000,         60,4294967295U, 0.0, 10001, 0, "-mc-rewardhalvinginterval",
                   "rewardspendabledelay","",
                   "Interval for halving of mining rewards, in blocks."},
    { "rewardspendabledelay"                  , "reward-spendable-delay"                  , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                , -1,          1,          1,    100000, 0.0, 10001, 0, "-mc-rewardspendabledelay",
                   "minimumperoutput","",
                   "Delay before mining reward can be spent, in blocks."},
    { "minimumperoutput"                     , "minimum-per-output"                     , 
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,         -1,1000000000, 0.0, 10001, 0, "-mc-minimumperoutput",
                   "maximumperoutput","",
                   "Minimum native currency per output (anti-dust), in raw units.\nIf set to -1, this is calculated from minimum-relay-fee."},
    { "maximumperoutput"                     , "maximum-per-output"                     , 
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,         100000000000000,         0,1000000000000000000, 0.0, 10001, 0, "-mc-maximumperoutput",
                   "minimumrelayfee","",
                   "Maximum native currency per output, in raw units."},
    { "minimumrelayfee"                     , "minimum-relay-fee"                     ,
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,1000000000, 0.0, 10001, 0, "-mc-minimumrelayfee",
                   "nativecurrencymultiple","",
                   "Minimum transaction fee, in raw units of native currency."},
    { "nativecurrencymultiple"            , "native-currency-multiple"                     ,
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,         100000000,          0,1000000000, 0.0, 10001, 0, "-mc-nativecurrencymultiple",
                   "skippowcheck","",
                   "Number of raw units of native currency per display unit."},
                   
                   
    { "skippowcheck"              , "skip-pow-check"              ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-skippowcheck",
                   "powminimumbits","Advanced mining parameters",
                   "Skip checking whether block hashes demonstrate proof of work."},
    { "powminimumbits"                      , "pow-minimum-bits"                    ,
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,         8,          1,        32, 0.0, 10001, 0, "-mc-powminimumbits",
                   "targetadjustfreq","",
                   "Initial and minimum proof of work difficulty, in leading zero bits."},
    { "targetadjustfreq"                    , "target-adjust-freq"                  , 
                   MC_PRM_INT32  | MC_PRM_USER | MC_PRM_CLONE                   , -1,        -1,         -1,4294967295U, 0.0, 10001, 0, "-mc-targetadjustfreq",
                   "allowmindifficultyblocks","",
                   "Interval between proof of work difficulty adjustments, in seconds, if negative - never adjusted."},
    { "allowmindifficultyblocks"          , "allow-min-difficulty-blocks"       ,
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         0,          0,         0, 0.0, 10001, 0, "-mc-allowmindifficultyblocks",
                   "onlyacceptstdtxs","",
                   "Allow lower difficulty blocks if none after 2*<target-block-time>."},
                                      
    { "onlyacceptstdtxs"                   , "only-accept-std-txs"                  , 
                   MC_PRM_BOOLEAN | MC_PRM_USER | MC_PRM_CLONE                  , -1,         1,          0,         0, 0.0, 10001, 0, "-mc-onlyacceptstdtxs",
                   "maxstdtxsize","Standard transaction definitions",
                   "Only accept and relay transactions which qualify as 'standard'."},
    { "maxstdtxsize"                 , "max-std-tx-size"                 , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,   4194304,       1024,  100000000, 0.0, 10001, 0, "-mc-maxstdtxsize",
                   "maxstdopreturnscount","",
                   "Maximum size of standard transactions, in bytes."},
    { "maxstdopreturnscount"                  , "max-std-op-returns-count"                  , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,        10,          0,      1024, 0.0, 10006, 0, "-mc-maxstdopreturnscount",
                   "maxstdopreturnsize","",
                   "Maximum number of OP_RETURN metadata outputs in standard transactions."},                   
    { "maxstdopreturnsize"                  , "max-std-op-return-size"                  , 
                   MC_PRM_UINT32  | MC_PRM_USER | MC_PRM_CLONE                  , -1,   2097152,          0,   67108864, 0.0, 10001, 0, "-mc-maxstdopreturnsize",
                   "maxstdopdropscount","",
                   "Maximum size of OP_RETURN metadata in standard transactions, in bytes."},                   
    { "maxstdopdropscount"                        , "max-std-op-drops-count"                        ,
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,         5,          0,       100, 0.0, 10001, 0, "-mc-maxstdopdropscount",
                   "maxstdelementsize","",
                   "Maximum number of OP_DROPs per output in standard transactions."},
    { "maxstdelementsize"                    , "max-std-element-size"                    ,
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,      8192,        128,     32768, 0.0, 10003, 0, "-mc-maxscriptelementsize",
                   "maxstdopdropsize","",
                   "Maximum size of data elements in standard transactions, in bytes."},
 
    { "maxstdopdropsize"                    , "max-std-op-drop-size"                    ,
                   MC_PRM_INT64   | MC_PRM_USER | MC_PRM_CLONE                  , -1,        64,          0,     32768, 0.0, 10001, 10003, "-mc-maxstdopdropsize",
                   "chainname","",
                   "Obsolete. Maximum size of OP_DROP metadata in standard transactions, in bytes."},
                   
    { "chainname"                              , "chain-name"                              ,
                   MC_PRM_STRING  | MC_PRM_GENERATED | MC_PRM_MINIMAL           , MC_PRM_NETWORK_NAME_MAX_SIZE,         0,          0,         0, 0.0, 10001, 0, "",
                   "protocolversion","",
                   "Chain name, used as first argument for multichaind and multichain-cli."},                   
    { "protocolversion"                   , "protocol-version"                  ,
                   MC_PRM_UINT32  | MC_PRM_GENERATED                            , -1,         0,          0,         0, 0.0, 10001, 0, "",
                   "networkmessagestart","",
                   "Protocol version at the moment of blockchain genesis."},
    { "networkmessagestart"                      , "network-message-start"                      ,
                   MC_PRM_BINARY  | MC_PRM_GENERATED  | MC_PRM_MINIMAL          ,  4,         0,          0,         0, 0.0, 10001, 0, "",
                   "addresspubkeyhashversion","",
                   "Magic value sent as the first 4 bytes of every peer-to-peer message."},
    { "addresspubkeyhashversion"                    , "address-pubkeyhash-version"                    ,
                   MC_PRM_BINARY  | MC_PRM_GENERATED | MC_PRM_MINIMAL           ,  4,         0,          0,         0, 0.0, 10001, 0, "",
                   "addressscripthashversion","",
                   "Version bytes used for pay-to-pubkeyhash addresses."},
    { "addressscripthashversion"              , "address-scripthash-version"              ,
                   MC_PRM_BINARY  | MC_PRM_GENERATED                             ,  4,         0,          0,         0, 0.0, 10001, 0, "",
                   "privatekeyversion","",
                   "Version bytes used for pay-to-scripthash addresses."},
    { "privatekeyversion"              , "private-key-version"              ,
                   MC_PRM_BINARY  | MC_PRM_GENERATED                             ,  4,         0,          0,         0, 0.0, 10001, 0, "",
                   "addresschecksumvalue","",
                   "Version bytes used for exporting private keys."},
    { "addresschecksumvalue"              , "address-checksum-value"              ,
                   MC_PRM_BINARY  | MC_PRM_GENERATED | MC_PRM_MINIMAL            ,  4,         0,          0,         0, 0.0, 10001, 0, "",
                   "genesispubkey","",
                   "Bytes used for XOR in address checksum calculation."},

                   
    { "genesispubkey"                     , "genesis-pubkey"                     ,
                   MC_PRM_BINARY  | MC_PRM_CALCULATED                           , 65,         0,          0,         0, 0.0, 10001, 0, "",
                   "genesisversion","",
                   "Genesis block coinbase output public key."},
    { "genesisversion"                    , "genesis-version"                    ,
                   MC_PRM_UINT32  | MC_PRM_CALCULATED                           , -1,         1,          0,        -1, 0.0, 10001, 0, "",
                   "genesistimestamp","",
                   "Genesis block version."},
    { "genesistimestamp"                   , "genesis-timestamp"                   ,
                   MC_PRM_UINT32  | MC_PRM_CALCULATED                           , -1,         0,          0,         0, 0.0, 10001, 0, "",
                   "genesisnbits","",
                   "Genesis block timestamp."},
    { "genesisnbits"                      , "genesis-nbits"                      ,
                   MC_PRM_UINT32  | MC_PRM_CALCULATED                           , -1,         0,          0,         0, 0.0, 10001, 0, "",
                   "genesisnonce","",
                   "Genesis block difficulty (nBits)."},
    { "genesisnonce"                      , "genesis-nonce"                      ,
                   MC_PRM_UINT32   | MC_PRM_CALCULATED                          , -1,         0,          0,         0, 0.0, 10001, 0, "",
                   "genesispubkeyhash","",
                   "Genesis block nonce."},
    { "genesispubkeyhash"                 , "genesis-pubkey-hash"                 ,
                   MC_PRM_BINARY  | MC_PRM_CALCULATED                           , 20,         0,          0,         0, 0.0, 10001, 0, "",
                   "genesisopreturnscript","",
                   "Genesis block coinbase output public key hash."},
    { "genesisopreturnscript"             , "genesis-op-return-script"             ,
                   MC_PRM_BINARY  | MC_PRM_CALCULATED                           ,300,         0,          0,         0, 0.0, 10001, 10006, "",
                   "genesishash","",
                   "Genesis block coinbase OP_RETURN script."},
    { "genesishash"                       , "genesis-hash"                       ,
                   MC_PRM_BINARY  | MC_PRM_CALCULATED                           , 32,         0,          0,         0, 0.0, 10001, 0, "",
                   "chainparamshash","",
                   "Genesis block hash."},
                    
                    
    { "chainparamshash"                      , "chain-params-hash"                      ,
                   MC_PRM_BINARY  | MC_PRM_CALCULATED | MC_PRM_NOHASH           , 32,         0,          0,         0, 0.0, 10001, 0, "",
                   "","",
                   "Hash of blockchain parameters, to prevent accidental changes."},
};


#endif  /* MULTICHAINPARAMLIST_H */

