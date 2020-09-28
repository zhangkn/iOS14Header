/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INCLocalExtending.h>
#import <libobjc.A.dylib/INIntentHandlerProviding.h>

@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>

@property (nonatomic,readonly) NSString * localExtensionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)localIntentHandlerLaunchID;
-(id)handlerForIntent:(id)arg1 ;
-(id)init;
-(NSString *)localExtensionIdentifier;
@end
