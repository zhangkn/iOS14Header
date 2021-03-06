/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TUCallFilterControllerActions;
@class NSObject;

@interface TUCallFilterController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUCallFilterControllerActions> _actionsDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<TUCallFilterControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL silenceUnknownCallersEnabled; 
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictConversation:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)silenceUnknownCallersEnabled;
-(BOOL)shouldRestrictJoinConversationRequest:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(unsigned long long)callFilterStatusForDialRequest:(id)arg1 ;
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
-(id)bundleIdentifierForDialRequest:(id)arg1 ;
-(id<TUCallFilterControllerActions>)actionsDelegate;
-(BOOL)shouldRestrictDialRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isUnknownHandle:(id)arg1 ;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictDialRequest:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
@end

