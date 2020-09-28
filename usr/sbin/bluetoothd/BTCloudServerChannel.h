//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSHTTPCookieStorage, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface BTCloudServerChannel : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_session;	// 8 = 0x8
    NSURLSessionConfiguration *_sessionConfig;	// 16 = 0x10
    NSURLSession *_sourceApplicationSession;	// 24 = 0x18
    NSURLSessionConfiguration *_sourceApplicationSessionConfig;	// 32 = 0x20
    NSOperationQueue *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    NSHTTPCookieStorage *_cookieStorage;	// 56 = 0x38
    NSMutableDictionary *_requests;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010000e90c
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSURLSessionConfiguration *sourceApplicationSessionConfig; // @synthesize sourceApplicationSessionConfig=_sourceApplicationSessionConfig;
@property(retain, nonatomic) NSURLSession *sourceApplicationSession; // @synthesize sourceApplicationSession=_sourceApplicationSession;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e870
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000010000e86c
- (void)enqueueRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000db38
- (void)dealloc;	// IMP=0x000000010000dacc
- (id)init;	// IMP=0x000000010000d70c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
