/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HKCodableCondensedWorkout : PBCodable <NSCopying> {

	double _condenserDate;
	long long _condenserVersion;
	double _creationDate;
	double _duration;
	double _endDate;
	long long _persistentID;
	double _startDate;
	long long _type;
	NSData* _uuid;
	SCD_Struct_HK23 _has;

}

@property (assign,nonatomic) BOOL hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                  //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasCondenserVersion; 
@property (assign,nonatomic) long long condenserVersion;              //@synthesize condenserVersion=_condenserVersion - In the implementation block
@property (assign,nonatomic) BOOL hasCondenserDate; 
@property (assign,nonatomic) double condenserDate;                    //@synthesize condenserDate=_condenserDate - In the implementation block
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setCondenserVersion:(long long)arg1 ;
-(void)setHasCondenserVersion:(BOOL)arg1 ;
-(void)setCondenserDate:(double)arg1 ;
-(void)setHasCondenserDate:(BOOL)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(double)duration;
-(BOOL)hasUuid;
-(void)setDuration:(double)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(double)endDate;
-(BOOL)hasCondenserVersion;
-(long long)condenserVersion;
-(BOOL)hasCondenserDate;
-(double)condenserDate;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(long long)type;
-(void)copyTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)persistentID;
-(NSData *)uuid;
-(void)setType:(long long)arg1 ;
-(double)creationDate;
-(BOOL)hasDuration;
-(BOOL)hasCreationDate;
-(double)startDate;
-(unsigned long long)hash;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(BOOL)hasPersistentID;
-(id)description;
-(void)setEndDate:(double)arg1 ;
-(id)dictionaryRepresentation;
@end

