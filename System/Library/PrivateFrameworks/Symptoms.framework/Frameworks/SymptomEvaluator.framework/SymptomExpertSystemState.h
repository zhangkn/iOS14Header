/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SymptomExpertSystemState : ExpertSystemStateCore {

	NSObject*<OS_dispatch_source> _strobe;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> strobe;              //@synthesize strobe=_strobe - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(void)setStrobe:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)strobe;
@end

