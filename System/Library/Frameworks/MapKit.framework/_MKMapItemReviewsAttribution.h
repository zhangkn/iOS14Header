/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemReviewsAttribution, NSArray;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {

	GEOMapItemReviewsAttribution* _geoReviewsAttribution;

}

@property (nonatomic,readonly) NSArray * addReviewURLs; 
-(id)urlsForReview:(id)arg1 ;
-(NSArray *)addReviewURLs;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(id)urlsForSelectedItemWithItems:(id)arg1 ;
@end

