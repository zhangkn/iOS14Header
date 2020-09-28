//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPUIHeaderInteractionDelegate-Protocol.h"
#import "UIWindowSceneDelegate-Protocol.h"
#import "_UISceneSettingsDiffAction-Protocol.h"

@class NSString, SPUISearchBarWindow, SPUISearchHeader, UIWindow;

@interface SPUISearchBarWindowSceneDelegate : NSObject <SPUIHeaderInteractionDelegate, _UISceneSettingsDiffAction, UIWindowSceneDelegate>
{
    SPUISearchBarWindow *_searchBarWindow;	// 8 = 0x8
    double _headerHeight;	// 16 = 0x10
    SPUISearchHeader *_view;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000389c
@property(retain) SPUISearchHeader *view; // @synthesize view=_view;
@property double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain) SPUISearchBarWindow *searchBarWindow; // @synthesize searchBarWindow=_searchBarWindow;
- (void)didFocusHeader;	// IMP=0x0000000100003614
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x00000001000034d8
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00000001000034cc
- (void)didSizeWithHeight:(double)arg1;	// IMP=0x0000000100003384
- (void)sizeBar;	// IMP=0x0000000100003338
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0000000100002fc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
