/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKHealthStore, NSMutableDictionary, NSDate, HKQuantity;

@interface FIActivitySettingsController : NSObject <NSCopying> {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _dirtyPropertiesMap;
	NSDate* _dateOfBirth;
	HKQuantity* _height;
	HKQuantity* _weight;
	long long _biologicalSex;
	long long _wheelchairUse;
	/*^block*/id _updateHandler;

}

@property (nonatomic,retain) NSDate * dateOfBirth;                     //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,retain) HKQuantity * height;                      //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) HKQuantity * weight;                      //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long biologicalSex;                  //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) long long wheelchairUse;                  //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
@property (nonatomic,readonly) HKQuantity * leanBodyMass; 
@property (readonly) unsigned long long experienceType; 
@property (nonatomic,copy) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
-(void)setWeight:(HKQuantity *)arg1 ;
-(void)setHeight:(HKQuantity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBiologicalSex:(long long)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(long long)wheelchairUse;
-(long long)biologicalSex;
-(HKQuantity *)height;
-(id)updateHandler;
-(void)setWheelchairUse:(long long)arg1 ;
-(NSDate *)dateOfBirth;
-(void)setDateOfBirth:(NSDate *)arg1 ;
-(id)init;
-(id)initWithHealthStore:(id)arg1 ;
-(HKQuantity *)weight;
-(unsigned long long)experienceType;
-(void)_setUncommitedValue:(id)arg1 forPropertyKey:(id)arg2 ;
-(BOOL)_logAndNilError:(id*)arg1 operationDescription:(id)arg2 ;
-(BOOL)_commitValue:(id)arg1 forPropertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_hasDirtyPropertyForPropertyKey:(id)arg1 ;
-(void)populateExistingCharacteristics;
-(BOOL)commmitWithError:(id*)arg1 ;
-(HKQuantity *)leanBodyMass;
@end

