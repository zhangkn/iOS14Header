//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SDUnlockSecurityManager : NSObject
{
    NSData *_localLongTermKey;	// 8 = 0x8
    NSData *_remoteLongTermKey;	// 16 = 0x10
    NSString *_keybagUUID;	// 24 = 0x18
    NSString *_keyDeviceID;	// 32 = 0x20
    NSString *_pairingID;	// 40 = 0x28
    NSString *_pairingStorePath;	// 48 = 0x30
    NSString *_deviceName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001aff98
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSString *pairingStorePath; // @synthesize pairingStorePath=_pairingStorePath;
@property(copy) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain) NSString *keyDeviceID; // @synthesize keyDeviceID=_keyDeviceID;
@property(retain, nonatomic) NSString *keybagUUID; // @synthesize keybagUUID=_keybagUUID;
@property(retain, nonatomic) NSData *remoteLongTermKey; // @synthesize remoteLongTermKey=_remoteLongTermKey;
@property(retain, nonatomic) NSData *localLongTermKey; // @synthesize localLongTermKey=_localLongTermKey;
- (void)deleteLegacyEscrowData;	// IMP=0x00000001001afe20
- (void)migrateEscrowDataIfNeeded;	// IMP=0x00000001001afd28
- (_Bool)checkForLegacyEscrowData;	// IMP=0x00000001001afb44
- (id)legacyEscrowData;	// IMP=0x00000001001afa48
- (id)baseDictionary;	// IMP=0x00000001001af94c
- (id)allKeychainItems;	// IMP=0x00000001001af800
- (void)deleteEscrowData;	// IMP=0x00000001001af768
- (_Bool)checkForEscrowData;	// IMP=0x00000001001af4d8
- (id)escrowData;	// IMP=0x00000001001af3f4
- (_Bool)storeEscrowData:(id)arg1;	// IMP=0x00000001001af10c
- (void)resetEscrowRecord;	// IMP=0x00000001001aeed8
- (void)clearStateForSession:(long long)arg1;	// IMP=0x00000001001aed94
- (_Bool)confirmUnlockWithAuthSession:(long long)arg1;	// IMP=0x00000001001aed6c
- (id)escrowSecretWithAuthSession:(long long)arg1;	// IMP=0x00000001001aecb0
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3 errorCode:(long long *)arg4;	// IMP=0x00000001001aeb58
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3;	// IMP=0x00000001001aeb48
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2;	// IMP=0x00000001001aeb38
- (_Bool)setupWithAuthSession:(long long)arg1 passcode:(id)arg2;	// IMP=0x00000001001ae9e8
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2 errorCode:(int *)arg3;	// IMP=0x00000001001ae398
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2;	// IMP=0x00000001001ae388
- (long long)stashBagSessionAsOriginator:(_Bool)arg1 escrowSecret:(id)arg2 manifest:(id)arg3;	// IMP=0x00000001001ae1ac
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3 errorCode:(int *)arg4;	// IMP=0x00000001001ae178
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3;	// IMP=0x00000001001ae168
- (long long)escrowCreationSessionAsOriginator:(_Bool)arg1 errorCode:(int *)arg2;	// IMP=0x00000001001ae144
- (void)migrateOldKeysIfNeeded;	// IMP=0x00000001001adf60
- (id)legacyLocalLongTermKey;	// IMP=0x00000001001adefc
- (id)legacyRemoteLongTermKey;	// IMP=0x00000001001ade98
@property(readonly) _Bool ltkFileExists;
- (id)longTermKeyStorageFilePath;	// IMP=0x00000001001adc1c
- (void)deletePersistedLongTermKeys;	// IMP=0x00000001001ada48
- (void)loadLongTermKeys;	// IMP=0x00000001001ad798
- (void)saveLongTermKeys;	// IMP=0x00000001001ad3c8
- (void)checkForBackupExclusion:(id)arg1;	// IMP=0x00000001001ad2ec
- (void)validateKeybagUUID;	// IMP=0x00000001001ad1e0
- (void)deleteLongTermKeys;	// IMP=0x00000001001acfc4
- (void)updateLocalLongTermKey:(id)arg1 remoteLongTermKey:(id)arg2;	// IMP=0x00000001001ace50
- (id)signRemoteKey:(id)arg1 withLocalKey:(id)arg2 localKeyClass:(long long)arg3 remoteKeyClass:(long long)arg4;	// IMP=0x00000001001acc38
- (id)generateLocalLongTermKey:(long long)arg1;	// IMP=0x00000001001acb20
@property(readonly) _Bool ltksExist;
- (unsigned int)lockState;	// IMP=0x00000001001aca2c
- (id)initWithPairingID:(id)arg1 pairingStorePath:(id)arg2 deviceName:(id)arg3;	// IMP=0x00000001001ac8d4

@end
