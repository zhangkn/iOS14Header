//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSObject, NSURLAuthenticationChallenge;
@protocol FMDURLSession;

@protocol FMDURLSessionDelegate <NSObject>

@optional
- (void)URLSession:(NSObject<FMDURLSession> *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(NSObject<FMDURLSession> *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end
