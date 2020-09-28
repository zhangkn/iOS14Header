/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSPushParsable.h>

@class NSString;

@interface AMSPushParsableGenericNotification : NSObject <AMSPushParsable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3 ;
+(BOOL)_shouldPresentAlertForPayload:(id)arg1 ;
+(id)_generateDialogRequestFromPayload:(id)arg1 config:(id)arg2 ;
+(id)_generateNotificationFromPayload:(id)arg1 config:(id)arg2 ;
@end
