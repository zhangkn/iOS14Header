/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@interface HKMCDaySummaryQueryConfiguration : HKQueryServerConfiguration {

	BOOL _ascending;
	long long _limit;
	SCD_Struct_HK0 _dayIndexRange;

}

@property (assign,nonatomic) SCD_Struct_HK0 dayIndexRange;              //@synthesize dayIndexRange=_dayIndexRange - In the implementation block
@property (assign,nonatomic) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (assign,nonatomic) long long limit;                           //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)ascending;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(SCD_Struct_HK0)dayIndexRange;
-(void)setDayIndexRange:(SCD_Struct_HK0)arg1 ;
@end

