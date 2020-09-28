//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;
@protocol BSInvalidatable;

@interface HSAppDelegate : UIResponder <UIApplicationDelegate>
{
    unsigned long long _backgroundTaskIdentifier;	// 8 = 0x8
    id <BSInvalidatable> _idleTimerAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003d51c
@property(retain, nonatomic) id <BSInvalidatable> idleTimerAssertion; // @synthesize idleTimerAssertion=_idleTimerAssertion;
@property unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
- (void)releaseIdleTimerAssertion;	// IMP=0x000000010003d3f8
- (void)makeIdleTimerAssertion;	// IMP=0x000000010003d2c0
- (void)startBackgroundTask;	// IMP=0x000000010003d010
- (void)dealloc;	// IMP=0x000000010003cfc4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000010003cfb8
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x000000010003cfac
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010003cfa0
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010003cf94
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x000000010003cf88
- (id)init;	// IMP=0x000000010003cedc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
