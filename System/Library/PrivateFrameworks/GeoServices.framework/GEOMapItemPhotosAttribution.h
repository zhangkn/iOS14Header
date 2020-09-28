/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
@property (nonatomic,readonly) BOOL canAddPhotosLocally; 
@property (nonatomic,readonly) BOOL canShowPhotosLocally; 
@property (nonatomic,readonly) BOOL shouldSuppressPhotoAttribution; 
@property (nonatomic,readonly) BOOL supportsReportingIssue; 
-(NSArray *)addPhotoURLs;
-(BOOL)shouldSuppressPhotoAttribution;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(BOOL)canAddPhotosLocally;
-(BOOL)canShowPhotosLocally;
-(BOOL)supportsReportingIssue;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
@end
