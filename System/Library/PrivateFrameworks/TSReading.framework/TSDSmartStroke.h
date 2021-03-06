/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStroke.h>

@class NSString;

@interface TSDSmartStroke : TSDStroke {

	NSString* mStrokeName;
	double mDeprecatedPatternOffsetDistance;

}

@property (nonatomic,copy,readonly) NSString * strokeName; 
@property (nonatomic,readonly) double deprecatedPatternOffsetDistance; 
+(id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3 ;
+(Class)classForName:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)strokeName;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(BOOL)canApplyDirectlyToRepRenderable;
-(BOOL)shouldAntialiasDefeat;
-(BOOL)canDrawWithOtherStroke:(id)arg1 ;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 ;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 ;
-(double)deprecatedPatternOffsetDistance;
@end

