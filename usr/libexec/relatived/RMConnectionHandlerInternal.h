//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RMConnectionEndpoint;
@protocol RMConnectionDataDelegate;

@interface RMConnectionHandlerInternal : NSObject
{
    id <RMConnectionDataDelegate> _msgHandler;	// 8 = 0x8
    RMConnectionEndpoint *_endpoint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000ac7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000abd0

@end

