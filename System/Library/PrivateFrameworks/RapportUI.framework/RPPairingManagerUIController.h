/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, UIViewController, NSString;

@interface RPPairingManagerUIController : NSObject {

	BOOL _allowManualIP;
	BOOL _runInProcess;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	UIViewController* _presentingViewController;
	NSString* _serviceType;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) BOOL allowManualIP;                                       //@synthesize allowManualIP=_allowManualIP - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) BOOL runInProcess;                                        //@synthesize runInProcess=_runInProcess - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)invalidationHandler;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_cleanup;
-(void)invalidate;
-(void)setServiceType:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(UIViewController *)presentingViewController;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)activate;
-(NSString *)serviceType;
-(BOOL)runInProcess;
-(BOOL)allowManualIP;
-(void)setAllowManualIP:(BOOL)arg1 ;
-(void)setRunInProcess:(BOOL)arg1 ;
@end
