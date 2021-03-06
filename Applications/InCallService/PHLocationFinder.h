//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString, PCPersistentTimer;

@interface PHLocationFinder : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    PCPersistentTimer *_timer;	// 24 = 0x18
}

+ (void)findLocationWithBundle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005ce98
- (void).cxx_destruct;	// IMP=0x000000010005d120
- (void)_timerFired;	// IMP=0x000000010005ce28
- (void)stop;	// IMP=0x000000010005cde4
- (void)start;	// IMP=0x000000010005ccb4
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005cc54
- (void)dealloc;	// IMP=0x000000010005cbf0
- (id)initWithBundle:(id)arg1;	// IMP=0x000000010005cb34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

