/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKRemoteFeatureAvailabilityDataSource;
@interface HKRemoteFeatureAvailabilityBaseRule : NSObject {

	id<HKRemoteFeatureAvailabilityDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKRemoteFeatureAvailabilityDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(Class)ruleClassForRawValue:(id)arg1 ;
-(void)setDataSource:(id<HKRemoteFeatureAvailabilityDataSource>)arg1 ;
-(BOOL)evaluate;
-(id<HKRemoteFeatureAvailabilityDataSource>)dataSource;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(void)processUserInfo:(id)arg1 ;
@end

