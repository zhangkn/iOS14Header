/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Eyedropper.framework/Eyedropper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Eyedropper/Eyedropper-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/EDLensViewDelegate.h>
#import <libobjc.A.dylib/FBSSceneDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/EDWindowTrackingDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol BSInvalidatable;
@class UIWindow, NSXPCListener, EDWindow, NSMutableArray, BKSTouchStream, PSPointerClientController, NSString;

@interface EDAppDelegate : UIResponder <EDLensViewDelegate, FBSSceneDelegate, NSXPCListenerDelegate, EDWindowTrackingDelegate, UIApplicationDelegate> {

	NSXPCListener* _serviceListener;
	EDWindow* _window;
	NSMutableArray* _liveConnections;
	int _notifyTokenLocked;
	BKSTouchStream* _touchStream;
	id<BSInvalidatable> _mousePointerServiceAssertion;
	BOOL _isFloating;
	CGPoint _lastPresentationLocation;
	double _lastDismissedTime;
	PSPointerClientController* _pointerClientController;
	id<BSInvalidatable> _hidePointerAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)lensView;
-(void)lockStateChanged;
-(void)cancelShowingEyeDropper;
-(void)beginShowingEyeDropper;
-(void)floatEyeDropper;
-(void)hideSystemPointer:(BOOL)arg1 ;
-(void)_enumerateRemoteClientsUsingBlock:(/*^block*/id)arg1 ;
-(void)lensView:(id)arg1 didSelectColor:(id)arg2 ;
-(void)lensViewDidDismiss:(id)arg1 ;
-(void)trackedTouchesBegan:(id)arg1 ;
-(void)trackedTouchesMoved:(id)arg1 ;
-(void)trackedTouchesCancelled:(id)arg1 ;
-(void)trackedTouchesEnded:(id)arg1 ;
@end
