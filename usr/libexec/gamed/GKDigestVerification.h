//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKDigestVerification : NSObject
{
}

+ (_Bool)digest:(id)arg1 matchesHash:(id)arg2;	// IMP=0x00000001000c11c8
+ (id)computeVerificationHashForDigest:(id)arg1;	// IMP=0x00000001000c106c
+ (id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00000001000c1474
+ (id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00000001000c1340
+ (_Bool)verifyHash:(id)arg1 forDigest:(id)arg2 withSugar:(id)arg3;	// IMP=0x00000001000c182c
+ (id)computeHashForDigest:(id)arg1 withSugar:(id)arg2;	// IMP=0x00000001000c16b4

@end

