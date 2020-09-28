/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying> {

	long long _exerciseMinutes;
	long long _hourSinceMidnight;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasHourSinceMidnight; 
@property (assign,nonatomic) long long hourSinceMidnight;              //@synthesize hourSinceMidnight=_hourSinceMidnight - In the implementation block
@property (assign,nonatomic) BOOL hasExerciseMinutes; 
@property (assign,nonatomic) long long exerciseMinutes;                //@synthesize exerciseMinutes=_exerciseMinutes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHourSinceMidnight:(long long)arg1 ;
-(void)setHasHourSinceMidnight:(BOOL)arg1 ;
-(BOOL)hasHourSinceMidnight;
-(void)setExerciseMinutes:(long long)arg1 ;
-(void)setHasExerciseMinutes:(BOOL)arg1 ;
-(BOOL)hasExerciseMinutes;
-(long long)hourSinceMidnight;
-(long long)exerciseMinutes;
@end
