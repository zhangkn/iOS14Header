/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CLLocation, NSDate;

@interface PLAssetCluster : NSObject {

	NSArray* _assets;
	CLLocation* _location;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * assets;                   //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
+(id)sortByTimeSortDescriptors;
+(id)mergedCluster:(id)arg1 ;
-(NSArray *)assets;
-(id)initWithAssetsSortedByDate:(id)arg1 region:(id)arg2 ;
-(CLLocation *)location;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)description;
@end

