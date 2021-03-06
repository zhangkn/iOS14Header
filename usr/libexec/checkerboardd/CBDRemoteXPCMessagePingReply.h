//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBDRemoteMessageReply-Protocol.h"

@class NSError, NSString, NSUUID;

@interface CBDRemoteXPCMessagePingReply : NSObject <CBDRemoteMessageReply>
{
    _Bool _success;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSUUID *_inReplyToUUID;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSString *_ip;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000618c
+ (id)replyToRemoteMessage:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100005e9c
- (void).cxx_destruct;	// IMP=0x00000001000065a4
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) NSUUID *inReplyToUUID; // @synthesize inReplyToUUID=_inReplyToUUID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100006468
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000630c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100006194
- (void)triggerWithRemoteMessage:(id)arg1;	// IMP=0x000000010000611c
@property(readonly, copy) NSString *description;
- (id)initWithRemoteMessage:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100005f18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

