//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TPSAnalyticsEvent;

@protocol TPSAnalyticsXPCServerInterface <NSObject>
- (oneway void)logAnalyticsEvents:(NSArray *)arg1;
- (oneway void)logAnalyticsEvent:(TPSAnalyticsEvent *)arg1;
@end

