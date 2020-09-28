/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HKCodableCondensedWorkoutCollection : PBCodable <NSCopying> {

	NSMutableArray* _workouts;

}

@property (nonatomic,retain) NSMutableArray * workouts;              //@synthesize workouts=_workouts - In the implementation block
+(Class)workoutsType;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)workouts;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)addWorkouts:(id)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)dictionaryRepresentation;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
@end
