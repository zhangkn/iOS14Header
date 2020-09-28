/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAssistantCore/IMAssistantCoreTelephonySubscriptionsDataSource.h>

@class NSString;

@interface IMAssistantCoreTelephonySubscriptionsDefaultDataSource : NSObject <IMAssistantCoreTelephonySubscriptionsDataSource>

@property (nonatomic,readonly) BOOL deviceHasMultipleSubscriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)deviceHasMultipleSubscriptions;
-(id)bestSenderIdentityForChatWithHandleIDs:(id)arg1 ;
-(id)handleIDForSenderIdentity:(id)arg1 ;
-(id)simIDForSenderIdentity:(id)arg1 ;
-(id)subscriptionContextForSenderIdentity:(id)arg1 ;
@end
