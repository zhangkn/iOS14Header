//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol AbstractTimer <NSObject>
+ (id)new;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
@property(readonly, nonatomic) CDUnknownBlockType handlerBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property(readonly, nonatomic, getter=isWaking) _Bool waking;
@property(readonly, nonatomic) double gracePeriod;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) NSString *identifier;
- (void)invalidate;
- (id)init;
@end
