/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding> {

	unsigned long long _priority;
	double _level;
	NSString* _reason;

}

@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) double level;                             //@synthesize level=_level - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)level;
-(void)invalidate;
-(void)dealloc;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)reason;
-(unsigned long long)priority;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)initWithPriority:(unsigned long long)arg1 level:(double)arg2 reason:(id)arg3 ;
@end

