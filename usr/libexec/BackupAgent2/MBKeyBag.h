//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBKeyBag : NSObject
{
    struct __MKBKeyBagHandle *_handle;	// 8 = 0x8
    _Bool _OTA;	// 16 = 0x10
    _Bool _isUnlocked;	// 17 = 0x11
}

+ (_Bool)validateWrappedKey:(id)arg1 withKeyBag:(id)arg2 error:(id *)arg3;	// IMP=0x000000010006cf48
+ (id)randomSecret;	// IMP=0x000000010006c780
+ (void)stopOTABackup;	// IMP=0x000000010006c654
+ (void)startOTABackup;	// IMP=0x000000010006c528
+ (_Bool)unregisterOTAKeyBagWithError:(id *)arg1;	// IMP=0x000000010006c398
+ (id)sharedOTAKeyBag;	// IMP=0x000000010006c30c
+ (id)OTAKeyBagWithSecret:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006c0a4
+ (id)OTAKeyBagWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006c060
+ (id)keybagWithPassword:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006be30
+ (id)unlockedKeyBagWithData:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x000000010006bdcc
+ (id)keybagWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006bb64
+ (id)errorWithReturnCode:(int)arg1 path:(id)arg2 description:(id)arg3;	// IMP=0x000000010006ba9c
+ (id)errorWithReturnCode:(int)arg1 description:(id)arg2;	// IMP=0x000000010006ba30
+ (int)codeWithReturnCode:(int)arg1;	// IMP=0x000000010006b8e0
+ (_Bool)isDeviceKeyBagLocked;	// IMP=0x000000010006b8c0
+ (_Bool)wasDeviceUnlockedSinceBoot;	// IMP=0x000000010006b8a4
+ (void)releaseLockAssertion:(struct __MKBAssertion *)arg1;	// IMP=0x000000010006b7d4
+ (struct __MKBAssertion *)holdLockAssertion:(id)arg1;	// IMP=0x000000010006b5cc
@property(readonly, nonatomic) _Bool isUnlocked; // @synthesize isUnlocked=_isUnlocked;
@property(nonatomic, getter=isOTA) _Bool OTA; // @synthesize OTA=_OTA;
@property(readonly, nonatomic) struct __MKBKeyBagHandle *handle; // @synthesize handle=_handle;
- (id)UUIDWithError:(id *)arg1;	// IMP=0x000000010006d3a0
- (id)dataWithError:(id *)arg1;	// IMP=0x000000010006d124
- (_Bool)changeSecretFrom:(id)arg1 toSecret:(id)arg2 error:(id *)arg3;	// IMP=0x000000010006cd80
- (_Bool)changePasswordFrom:(id)arg1 toPassword:(id)arg2 error:(id *)arg3;	// IMP=0x000000010006cd08
- (_Bool)unlockWithSecret:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006cb44
- (_Bool)unlockWithPassword:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006cafc
- (_Bool)registerWithPasscode:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006c908
- (void)dealloc;	// IMP=0x000000010006c8c0
- (id)initWithHandle:(struct __MKBKeyBagHandle *)arg1 OTA:(_Bool)arg2;	// IMP=0x000000010006c80c

@end
