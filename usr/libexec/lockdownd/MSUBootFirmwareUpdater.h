//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface MSUBootFirmwareUpdater : NSObject
{
    _Bool _isErase;	// 8 = 0x8
    _Bool _shouldCommit;	// 9 = 0x9
    unsigned int _matchedService;	// 12 = 0xc
    NSArray *_bootBlockImages;	// 16 = 0x10
    NSArray *_firmwareImages;	// 24 = 0x18
    NSData *_apNonce;	// 32 = 0x20
    NSData *_daliData;	// 40 = 0x28
    NSData *_ibootData;	// 48 = 0x30
    NSData *_llbData;	// 56 = 0x38
}

+ (unsigned int)_waitForServiceNamed:(id)arg1;	// IMP=0x000000010002c04c
+ (unsigned int)_determineDeviceService;	// IMP=0x000000010002bdd0
+ (Class)_classForMatchedServiceName:(id)arg1;	// IMP=0x000000010002bd14
+ (id)_serviceToClasses;	// IMP=0x000000010002bcb0
+ (id)_orderedClasses;	// IMP=0x000000010002bbe4
+ (id)_orderedServiceNames;	// IMP=0x000000010002bbd8
+ (_Bool)isSingleStageBoot;	// IMP=0x000000010002b25c
+ (_Bool)requiresSEPInFW;	// IMP=0x000000010002b1ec
+ (_Bool)supportsDualSPINAND;	// IMP=0x000000010002b17c
+ (_Bool)supportsDualiBoot;	// IMP=0x000000010002b094
+ (id)updaterForServiceNamed:(id)arg1;	// IMP=0x000000010002af00
+ (id)updaterForDevice;	// IMP=0x000000010002ae54
@property(retain) NSData *llbData; // @synthesize llbData=_llbData;
@property(retain) NSData *ibootData; // @synthesize ibootData=_ibootData;
@property(retain) NSData *daliData; // @synthesize daliData=_daliData;
@property(retain) NSData *apNonce; // @synthesize apNonce=_apNonce;
@property _Bool shouldCommit; // @synthesize shouldCommit=_shouldCommit;
@property _Bool isErase; // @synthesize isErase=_isErase;
@property unsigned int matchedService; // @synthesize matchedService=_matchedService;
@property(retain) NSArray *firmwareImages; // @synthesize firmwareImages=_firmwareImages;
@property(retain) NSArray *bootBlockImages; // @synthesize bootBlockImages=_bootBlockImages;
- (id)_encodeFirmware:(id)arg1 withRestoreInfo:(id)arg2;	// IMP=0x000000010002bb2c
- (int)_encodeAndWriteFirmware:(id)arg1 toWriter:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010002ba60
- (id)_restoreInfoDictionary;	// IMP=0x000000010002b994
- (_Bool)generateFirmwareImagesWithCallback:(struct ramrod_update_callbacks *)arg1 context:(struct firmware_update_context *)arg2;	// IMP=0x000000010002b458
- (id)matchedServiceName;	// IMP=0x000000010002b400
- (_Bool)updateBootFirmwareWithCallback:(struct ramrod_update_callbacks *)arg1 context:(struct firmware_update_context *)arg2 error:(id *)arg3;	// IMP=0x000000010002b3f0
- (_Bool)updateBootFirmwareWithError:(id *)arg1;	// IMP=0x000000010002b3e8
- (void)dealloc;	// IMP=0x000000010002b014
- (id)initWithApNonce:(id)arg1;	// IMP=0x000000010002afb0

@end

