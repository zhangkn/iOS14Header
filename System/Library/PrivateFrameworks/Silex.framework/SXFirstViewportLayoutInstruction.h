/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXLayoutInstruction.h>

@class NSString;

@interface SXFirstViewportLayoutInstruction : NSObject <SXLayoutInstruction> {

	BOOL _fullfilled;

}

@property (assign,nonatomic) BOOL fullfilled;                       //@synthesize fullfilled=_fullfilled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFulfilledForBlueprint:(id)arg1 ;
-(void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(BOOL)fullfilled;
-(void)setFullfilled:(BOOL)arg1 ;
@end

