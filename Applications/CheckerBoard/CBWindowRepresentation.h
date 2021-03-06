//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBWindowLike-Protocol.h"
#import "CBWindowLikeInternal-Protocol.h"

@class NSString;
@protocol CBWindowDelegate;

@interface CBWindowRepresentation : NSObject <CBWindowLikeInternal, CBWindowLike>
{
    _Bool _backgroundTunnel;	// 8 = 0x8
    _Bool _hidden;	// 9 = 0x9
    _Bool _presentViewControllerWithStatusBarShown;	// 10 = 0xa
    _Bool _statusBarHidden;	// 11 = 0xb
    double _windowLevel;	// 16 = 0x10
    id <CBWindowDelegate> _windowManager;	// 24 = 0x18
    unsigned long long _windowManagerLayer;	// 32 = 0x20
    double _previousStatusBarWindowLevel;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
}

+ (id)windowRepresentationForIdentifier:(id)arg1;	// IMP=0x000000010002de94
- (void).cxx_destruct;	// IMP=0x000000010002e27c
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) double previousStatusBarWindowLevel; // @synthesize previousStatusBarWindowLevel=_previousStatusBarWindowLevel;
@property(nonatomic) _Bool presentViewControllerWithStatusBarShown; // @synthesize presentViewControllerWithStatusBarShown=_presentViewControllerWithStatusBarShown;
@property(nonatomic) unsigned long long windowManagerLayer; // @synthesize windowManagerLayer=_windowManagerLayer;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <CBWindowDelegate> windowManager; // @synthesize windowManager=_windowManager;
@property(nonatomic) _Bool backgroundTunnel; // @synthesize backgroundTunnel=_backgroundTunnel;
@property(nonatomic) double windowLevel; // @synthesize windowLevel=_windowLevel;
- (void)didLaunchApp;	// IMP=0x000000010002e1a0
- (void)willLaunchApp;	// IMP=0x000000010002e158
- (void)viewControllerDidDismiss;	// IMP=0x000000010002e0d4
- (void)dismissViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010002e050
- (void)resignKeyWindow;	// IMP=0x000000010002dff0
- (void)makeKeyWindow;	// IMP=0x000000010002dfec
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010002dee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

