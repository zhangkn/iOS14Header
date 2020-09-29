/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSArray;

@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _results;
	unsigned long long _outcomeType;

}

@property (assign,nonatomic) unsigned long long outcomeType;              //@synthesize outcomeType=_outcomeType - In the implementation block
@property (nonatomic,readonly) NSDictionary * results;                    //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
+(id)outcomeWithResults:(id)arg1 ;
-(NSDictionary *)results;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResults:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)outcomeType;
-(void)setOutcomeType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)allKeys;
-(unsigned long long)hash;
-(id)description;
@end
