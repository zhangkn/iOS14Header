/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TPSCallClassRequest.h>
#import <libobjc.A.dylib/TPSSecureObject.h>

@class NSString;

@interface TPSCallWaitingRequest : TPSCallClassRequest <TPSSecureObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2 ;
@end

