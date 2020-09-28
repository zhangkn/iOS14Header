/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, HKQuantityType, HKCategoryType, NSString, HKSampleType;

@interface WFHKContentQueryData : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantityType* _quantityType;
	HKCategoryType* _categoryType;
	NSString* _sourceName;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,retain) HKCategoryType * categoryType;              //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) HKSampleType * sampleType; 
@property (nonatomic,retain) NSString * sourceName;                      //@synthesize sourceName=_sourceName - In the implementation block
-(HKQuantityType *)quantityType;
-(void)setCategoryType:(HKCategoryType *)arg1 ;
-(HKCategoryType *)categoryType;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(void)setSourceName:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSString *)sourceName;
-(HKSampleType *)sampleType;
-(void)setEndDate:(NSDate *)arg1 ;
@end
