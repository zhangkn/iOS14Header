/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBDisableActiveInterfaceOrientationChangeAssertion : NSObject <BSInvalidatable> {

	NSString* _reason;
	BOOL _invalidated;
	BOOL _nudge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(id)initWithReason:(id)arg1 nudgeOrientationOnInvalidate:(BOOL)arg2 ;
-(NSString *)description;
@end
