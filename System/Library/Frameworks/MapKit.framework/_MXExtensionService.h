/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MXExtensionURLHandling;
@class _MXSerialQueue, NSUUID, NSExtension, _MXExtension, UIViewController;

@interface _MXExtensionService : NSObject {

	_MXSerialQueue* _serialQueue;
	BOOL _didSendConnectionTerminationNotifcation;
	NSUUID* _connectionIdentifier;
	NSExtension* _realExtension;
	_MXExtension* _extensionProxy;
	unsigned long long _state;
	id<_MXExtensionURLHandling> _URLHandlingDelegate;
	UIViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSUUID * serviceIdentifier; 
@property (nonatomic,retain) NSUUID * connectionIdentifier;                                       //@synthesize connectionIdentifier=_connectionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIViewController * remoteViewController;                             //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSExtension * realExtension;                                         //@synthesize realExtension=_realExtension - In the implementation block
@property (assign,nonatomic,__weak) id<_MXExtensionURLHandling> URLHandlingDelegate;              //@synthesize URLHandlingDelegate=_URLHandlingDelegate - In the implementation block
@property (nonatomic,readonly) _MXExtension * extensionProxy;                                     //@synthesize extensionProxy=_extensionProxy - In the implementation block
+(id)extensionCompletionQueue;
-(void)cancel;
-(id)extension;
-(UIViewController *)remoteViewController;
-(void)dealloc;
-(NSUUID *)connectionIdentifier;
-(void)setState:(unsigned long long)arg1 ;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(id)context;
-(void)setConnectionIdentifier:(NSUUID *)arg1 ;
-(id)_errorForIntent:(id)arg1 ;
-(id)_errorForIntentVendorContext:(id)arg1 ;
-(NSExtension *)realExtension;
-(id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(void)stopSendingUpdatesForIntent:(id)arg1 ;
-(id)_handleOrConfirmIntent:(id)arg1 expectResponseClass:(Class)arg2 isHandle:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_errorForIntentResponse:(id)arg1 withExpectResponseClass:(Class)arg2 ;
-(id)intentResponseObserverProxy;
-(id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_completeOrCancelTransaction:(BOOL)arg1 withIntentIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(int)processIdentifier;
-(void)setIntentResponseObserverProxy:(id)arg1 ;
-(void)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 completion:(/*^block*/id)arg3 ;
-(id<_MXExtensionURLHandling>)URLHandlingDelegate;
-(void)setURLHandlingDelegate:(id<_MXExtensionURLHandling>)arg1 ;
-(void)connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(/*^block*/id)arg2 ;
-(void)_connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(/*^block*/id)arg2 ;
-(_MXExtension *)extensionProxy;
-(void)setRealExtension:(NSExtension *)arg1 ;
-(void)disconnectExtension;
-(NSUUID *)serviceIdentifier;
-(id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectExtensionWithHandler:(/*^block*/id)arg1 ;
-(id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
-(void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 ;
-(id)initWithExtensionProxy:(id)arg1 ;
-(void)connectUIExtensionWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(id)description;
@end
