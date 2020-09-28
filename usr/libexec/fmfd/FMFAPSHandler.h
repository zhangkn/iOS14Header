//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSMutableArray, NSString;

@interface FMFAPSHandler : NSObject <APSConnectionDelegate>
{
    APSConnection *_apsConnection;	// 8 = 0x8
    NSMutableArray *_registeredDelegates;	// 16 = 0x10
    NSMutableArray *_pendingPushes;	// 24 = 0x18
    NSString *_environmentName;	// 32 = 0x20
}

+ (void)startupComplete;	// IMP=0x000000010003c92c
+ (id)instanceForEnvironment:(id)arg1;	// IMP=0x000000010003baa8
- (void).cxx_destruct;	// IMP=0x000000010003d6d4
@property(retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(retain, nonatomic) NSMutableArray *pendingPushes; // @synthesize pendingPushes=_pendingPushes;
@property(retain, nonatomic) NSMutableArray *registeredDelegates; // @synthesize registeredDelegates=_registeredDelegates;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010003d584
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010003d1d4
- (void)handleMessage:(id)arg1 onTopic:(id)arg2;	// IMP=0x000000010003cd64
@property(readonly, nonatomic) NSString *apsToken;
- (void)deregisterDelegate:(id)arg1;	// IMP=0x000000010003c3b0
- (void)registerDelegate:(id)arg1 forTopic:(id)arg2;	// IMP=0x000000010003be30
- (id)initWithEnvironmentName:(id)arg1;	// IMP=0x000000010003bcb8
- (id)init;	// IMP=0x000000010003bc60
- (void)dealloc;	// IMP=0x000000010003bbf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
