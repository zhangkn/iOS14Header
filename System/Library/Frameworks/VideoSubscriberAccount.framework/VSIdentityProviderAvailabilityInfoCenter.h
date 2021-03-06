/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class NSOperationQueue, VSRemoteNotifier, VSStoreURLBag, VSPreferences, VSDeveloperServiceConnection, NSString;

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject <VSRemoteNotifierDelegate> {

	BOOL _hasDeterminedInitialStatus;
	long long _status;
	NSOperationQueue* _privateQueue;
	VSRemoteNotifier* _remoteNotifier;
	VSStoreURLBag* _bag;
	VSPreferences* _preferences;
	VSDeveloperServiceConnection* _developerServiceConnection;

}

@property (assign,nonatomic) long long status;                                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                        //@synthesize privateQueue=_privateQueue - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedInitialStatus;                                        //@synthesize hasDeterminedInitialStatus=_hasDeterminedInitialStatus - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                                      //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) VSStoreURLBag * bag;                                                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                                            //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * developerServiceConnection;              //@synthesize developerServiceConnection=_developerServiceConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCenter;
+(BOOL)automaticallyNotifiesObserversOfStatus;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(VSStoreURLBag *)bag;
-(VSPreferences *)preferences;
-(void)setDeveloperServiceConnection:(VSDeveloperServiceConnection *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)_sendStatusChangeNotification;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(void)determineIdentityProviderAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)_accountStoreChanged:(id)arg1 ;
-(long long)status;
-(void)_beginStatusUpdateAttemptWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHasDeterminedInitialStatus:(BOOL)arg1 ;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(id)init;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(BOOL)hasDeterminedInitialStatus;
-(VSDeveloperServiceConnection *)developerServiceConnection;
-(VSRemoteNotifier *)remoteNotifier;
@end

