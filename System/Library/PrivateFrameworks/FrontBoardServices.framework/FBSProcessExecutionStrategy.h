/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBSProcessExecutionStrategy : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _strategyName;
	long long _schedulingPolicy;
	long long _graphicsPolicy;
	long long _jetsamPolicy;
	BOOL _customPolicy;
	unsigned _bksReason;
	unsigned _bksFlags;

}

@property (nonatomic,copy) NSString * strategyName;                                //@synthesize strategyName=_strategyName - In the implementation block
@property (assign,nonatomic) long long schedulingPolicy;                           //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
@property (assign,nonatomic) long long graphicsPolicy;                             //@synthesize graphicsPolicy=_graphicsPolicy - In the implementation block
@property (assign,nonatomic) long long jetsamPolicy;                               //@synthesize jetsamPolicy=_jetsamPolicy - In the implementation block
@property (assign,getter=isCustomPolicy,nonatomic) BOOL customPolicy;              //@synthesize customPolicy=_customPolicy - In the implementation block
@property (assign,nonatomic) unsigned reason;                                      //@synthesize bksReason=_bksReason - In the implementation block
@property (assign,nonatomic) unsigned flags;                                       //@synthesize bksFlags=_bksFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)strategyForSchedulingPolicy:(long long)arg1 graphicsPolicy:(long long)arg2 jetsamPolicy:(long long)arg3 ;
+(id)userInteractiveWithoutUI;
+(id)backgroundWithUI;
+(id)policyWithReason:(unsigned)arg1 flags:(unsigned)arg2 ;
+(id)userInteractive;
+(id)background;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)setStrategyName:(NSString *)arg1 ;
-(void)setSchedulingPolicy:(long long)arg1 ;
-(void)setGraphicsPolicy:(long long)arg1 ;
-(void)setJetsamPolicy:(long long)arg1 ;
-(void)setCustomPolicy:(BOOL)arg1 ;
-(BOOL)isCustomPolicy;
-(long long)graphicsPolicy;
-(long long)jetsamPolicy;
-(NSString *)strategyName;
-(NSString *)debugDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(unsigned)reason;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(long long)schedulingPolicy;
-(NSString *)description;
@end
