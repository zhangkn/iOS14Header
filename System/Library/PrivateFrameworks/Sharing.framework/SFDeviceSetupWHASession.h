/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFSession, TRSession, NSMutableArray, TROperationQueue, NSSet, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, NSObject, SFDevice, UIViewController;

@interface SFDeviceSetupWHASession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFSession* _sfSession;
	int _sfSessionState;
	BOOL _sessionSecured;
	int _pairVerifyState;
	int _pairSetupState;
	int _infoExchangeState;
	unsigned long long _peerFeatureFlags;
	unsigned long long _peerProblemsFlags;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	BOOL _trSetupConfigurationEnabled;
	int _trSetupConfigurationState;
	NSSet* _trUnauthServices;
	BOOL _trAuthenticationEnabled;
	int _trAuthenticationState;
	BOOL _cdpEnabled;
	SFDeviceOperationCDPSetup* _cdpSetupOperation;
	double _cdpSetupSecs;
	int _cdpState;
	SFDeviceOperationHomeKitSetup* _homeKitSetup;
	int _homeKitState;
	BOOL _homeKitDoFullSetup;
	int _finishState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	UIViewController* _presentingViewController;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForHomeHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _promptForRoomHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForHomeHandler;                                    //@synthesize promptForHomeHandler=_promptForHomeHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                     //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id promptForRoomHandler;                                    //@synthesize promptForRoomHandler=_promptForRoomHandler - In the implementation block
-(void)_run;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_cleanup;
-(void)invalidate;
-(void)setProgressHandler:(id)arg1 ;
-(id)promptForHomeHandler;
-(void)setPromptForHomeHandler:(id)arg1 ;
-(id)promptForRoomHandler;
-(void)setPromptForRoomHandler:(id)arg1 ;
-(void)dealloc;
-(id)progressHandler;
-(int)_runCDPSetup;
-(int)_runHomeKitSetup;
-(int)_runTRSetupConfiguration;
-(BOOL)_verifyiCloudMatch:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)homeKitSelectHome:(id)arg1 ;
-(void)homeKitSelectRoom:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(UIViewController *)presentingViewController;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_runFinish;
-(int)_runSFSessionStart;
-(int)_runPairVerify;
-(int)_runPairSetup;
-(int)_runInfoExchange;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(void)_runInfoExchangeRequest;
-(void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2 ;
-(SFDevice *)peerDevice;
-(void)activate;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)pairSetupTryPIN:(id)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
@end
