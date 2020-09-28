/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapItemProviderRatingSnippet.h>

@protocol GEOMapItemReview;
@class NSString, NSDate, NSURL, GEOMapItemTip, MKMapItem;

@interface _MKMapItemUserRatingSnippetReview : NSObject <MKMapItemProviderRatingSnippet> {

	MKMapItem* _mapItem;
	id<GEOMapItemReview> _review;

}

@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_localizedSnippetLocale,nonatomic,readonly) NSString * localizedSnippetLocale; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURL,nonatomic,readonly) NSURL * reviewerImageURL; 
@property (getter=_geoReview,nonatomic,readonly) id<GEOMapItemReview> geoReview; 
@property (getter=_geoMapItemTIp,nonatomic,readonly) GEOMapItemTip * geoMapItemTip; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_score;
-(double)_normalizedScore;
-(id)_geoReview;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_geoMapItemTIp;
-(id)initWithMapItem:(id)arg1 review:(id)arg2 ;
-(id)_reviewerImageURL;
-(id)_reviewerName;
-(id)_localizedSnippet;
-(id)_localizedSnippetLocale;
-(double)_maxScore;
-(id)_date;
@end
