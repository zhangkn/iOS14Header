//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKFairPlaySAPSession : NSObject
{
    _Bool _complete;	// 8 = 0x8
    struct FairPlayHWInfo_ _hardwareInfo;	// 12 = 0xc
    struct FPSAPContextOpaque_ *_session;	// 40 = 0x28
    NSString *_SAPVersion;	// 48 = 0x30
}

@property(retain) NSString *SAPVersion; // @synthesize SAPVersion=_SAPVersion;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (_Bool)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg1;	// IMP=0x00000001000eaad0
- (id)signatureStringForData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000eaa64
- (id)signatureForData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ea878
- (id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000ea548
- (id)exchangeData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ea29c
- (void)dealloc;	// IMP=0x00000001000ea248
- (id)init;	// IMP=0x00000001000ea0b8

@end

