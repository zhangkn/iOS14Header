//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKNetworkRequest-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKScoreNetworkRequest : NSObject <GKNetworkRequest>
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    NSString *bundleID;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSURLSessionTask *nsurlTask;	// 32 = 0x20
    NSString *playerID;	// 40 = 0x28
    NSMutableDictionary *requestData;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
    NSArray *challengeIDs;	// 64 = 0x40
}

+ (id)bagKey;	// IMP=0x00000001001ba8c0
- (void).cxx_destruct;	// IMP=0x00000001001bb3b4
@property(retain, nonatomic) NSArray *challengeIDs; // @synthesize challengeIDs;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(readonly, copy) NSString *description;
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x00000001001bafec
- (id)taskInfo;	// IMP=0x00000001001badec
- (void)removeFromStore:(id)arg1;	// IMP=0x00000001001bade8
- (id)postBody;	// IMP=0x00000001001bacdc
- (id)initWithScores:(id)arg1 bundleID:(id)arg2 eligibleChallenges:(id)arg3;	// IMP=0x00000001001ba9e4
- (id)initWithTask:(id)arg1;	// IMP=0x00000001001ba928
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001001ba8cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

