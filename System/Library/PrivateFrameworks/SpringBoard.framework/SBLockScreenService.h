/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSLockScreenServiceServerInterface.h>

@protocol SBFAuthenticationAssertionProviding;
@class SBLockScreenManager, SBMainWorkspace, SBRemoteTransientOverlaySessionManager, FBServiceClientAuthenticator, BSServiceConnectionListener, NSMutableSet, SBFAuthenticationAssertion, SBSpuriousScreenUndimmingAssertion, NSString;

@interface SBLockScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSLockScreenServiceServerInterface> {

	SBLockScreenManager* _lockScreenManager;
	SBMainWorkspace* _mainWorkspace;
	id<SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
	SBRemoteTransientOverlaySessionManager* _remoteTransientOverlaySessionManager;
	FBServiceClientAuthenticator* _requestDeviceUnlockAuthenticator;
	BSServiceConnectionListener* _listener;
	NSMutableSet* _connections;
	NSMutableSet* _connectionsPreventingPasscodeLock;
	SBFAuthenticationAssertion* _preventPasscodeLockAssertion;
	NSMutableSet* _connectionsPreventingSpuriousScreenUndim;
	SBSpuriousScreenUndimmingAssertion* _preventSpuriousScreenUndimAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(oneway void)setPreventSpuriousScreenUndim:(id)arg1 ;
-(oneway void)setPreventPasscodeLock:(id)arg1 ;
-(oneway void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithLockScreenManager:(id)arg1 workspace:(id)arg2 authenticationAssertionProvider:(id)arg3 remoteTransientOverlaySessionManager:(id)arg4 ;
-(void)requestPasscodeUnlockUIForClient:(id)arg1 options:(id)arg2 description:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

