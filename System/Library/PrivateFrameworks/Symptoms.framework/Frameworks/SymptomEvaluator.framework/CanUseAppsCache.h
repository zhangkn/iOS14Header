/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CanUseAppsCache : NSObject {

	NSMutableDictionary* cache;
	BOOL disabled;

}
+(BOOL)makeVerdictFromRationaleCode:(int)arg1 ;
-(void)enable;
-(void)disable;
-(id)init;
-(id)description;
-(id)_makeKeyFrom:(id)arg1 state:(long long)arg2 ;
-(BOOL)hasEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int*)arg3 ;
-(void)insertEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int)arg3 ;
@end
