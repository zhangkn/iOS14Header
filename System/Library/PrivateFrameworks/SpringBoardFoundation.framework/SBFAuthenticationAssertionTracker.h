/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSString;

@interface SBFAuthenticationAssertionTracker : NSObject <BSDescriptionProviding> {

	MKBAssertionRef _mkbAssertion;
	NSHashTable* _assertions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAssertion:(id)arg1 ;
-(void)dealloc;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)addAssertion:(id)arg1 ;
-(id)init;
-(BOOL)isAssertionValid:(id)arg1 ;
-(BOOL)hasActiveAssertions;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)mkbAssertionOptions;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end

