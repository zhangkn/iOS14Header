//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SOSCircleStorageTransport.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SOSKVSCircleStorageTransport : SOSCircleStorageTransport
{
    NSMutableDictionary *pending_changes;	// 16 = 0x10
    NSString *circleName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001cdcb4
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName;
@property(retain, nonatomic) NSMutableDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001cdbb8
- (_Bool)kvsSendOfficialDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001cdb20
- (_Bool)kvsRingFlushChanges:(struct __CFError **)arg1;	// IMP=0x00000001001cdb14
- (_Bool)kvsRingPostRing:(struct __CFString *)arg1 ring:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001cdab4
- (_Bool)kvsSendAccountChangedWithDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001cda1c
- (_Bool)kvssendDebugInfo:(struct __CFString *)arg1 debug:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001cd970
- (_Bool)kvsAppendDebugKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001cd928
- (_Bool)kvsAppendRingKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001cd788
- (_Bool)kvsAppendKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001cd620
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001cd588
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001cd34c
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001cd2ec
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x00000001001cd2e0
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001cd22c
- (void)kvsAddToPendingChanges:(struct __CFString *)arg1 data:(struct __CFData *)arg2;	// IMP=0x00000001001cd11c
- (_Bool)kvsSendPendingChanges:(struct __CFError **)arg1;	// IMP=0x00000001001ccfdc
- (long long)getTransportType;	// IMP=0x00000001001ccfd4
- (id)getCircleName;	// IMP=0x00000001001ccfc8
- (id)initWithAccount:(id)arg1 andCircleName:(id)arg2;	// IMP=0x00000001001cceb4
- (id)init;	// IMP=0x00000001001cce80

@end
