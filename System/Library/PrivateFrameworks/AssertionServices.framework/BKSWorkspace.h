/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBSServiceDelegate.h>

@class NSString;

@interface BKSWorkspace : NSObject <RBSServiceDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)service:(id)arg1 didLoseInheritances:(id)arg2 ;
-(id)init;
-(void)service:(id)arg1 didReceiveInheritances:(id)arg2 ;
@end

