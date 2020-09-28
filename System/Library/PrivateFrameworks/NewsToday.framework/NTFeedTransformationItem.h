/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, SFSearchResult, NTPBFeedItem;


@protocol NTFeedTransformationItem <NSObject,NSCopying>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long todayItemType; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,copy,readonly) NSDate * cacheCutoffTimeRelativeDate; 
@property (nonatomic,copy,readonly) NSDate * cacheExpirationDate; 
@property (nonatomic,copy,readonly) SFSearchResult * searchResult; 
@property (nonatomic,readonly) BOOL usesDynamicSlotAllocation; 
@property (nonatomic,readonly) id<FCFeedTransformationItem> feedTransformationItem; 
@property (nonatomic,readonly) BOOL needsFeedItemHeadlinesFetch; 
@property (nonatomic,copy,readonly) NTPBFeedItem * feedItemForHeadlineFetch; 
@property (nonatomic,readonly) unsigned long long preferredDynamicSlotAllocation; 
@optional
-(unsigned long long)preferredDynamicSlotAllocation;

@required
-(NSString *)identifier;
-(SFSearchResult *)searchResult;
-(NSString *)clusterID;
-(BOOL)needsFeedItemHeadlinesFetch;
-(NTPBFeedItem *)feedItemForHeadlineFetch;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
-(id<FCFeedTransformationItem>)feedTransformationItem;
-(unsigned long long)todayItemType;
-(NSDate *)cacheCutoffTimeRelativeDate;
-(NSDate *)cacheExpirationDate;
-(BOOL)usesDynamicSlotAllocation;

@end
