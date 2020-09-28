//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKUpdateGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
    NSMutableArray *_notifiers;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
}

+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;	// IMP=0x0000000100126a3c
+ (id)updateGroupForTargetQueue:(id)arg1;	// IMP=0x0000000100126a04
+ (id)updateGroupWithName:(id)arg1;	// IMP=0x00000001001269c8
+ (id)updateGroup;	// IMP=0x0000000100126998
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *notifiers; // @synthesize notifiers=_notifiers;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long updateCount;
- (void)cancelUpdates;	// IMP=0x0000000100127080
- (void)applyUpdates;	// IMP=0x0000000100126e0c
- (void)wait;	// IMP=0x0000000100126e00
- (void)joinAndApplyUpdates;	// IMP=0x0000000100126de8
- (void)joinApplyUpdatesAndDo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100126d48
- (void)join:(CDUnknownBlockType)arg1;	// IMP=0x0000000100126cac
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x0000000100126c94
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100126ba0
- (void)dealloc;	// IMP=0x0000000100126b30
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;	// IMP=0x0000000100126a78

@end
