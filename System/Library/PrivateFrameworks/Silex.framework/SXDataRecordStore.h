/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SXDataRecordStore : NSObject {

	NSArray* _descriptors;
	NSArray* _records;

}

@property (nonatomic,readonly) NSArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
-(NSArray *)descriptors;
-(unsigned long long)numberOfRecords;
-(NSArray *)records;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(id)initWithRecords:(id)arg1 andDescriptors:(id)arg2 ;
-(id)recordsUsingSortDescriptors:(id)arg1 ;
@end
