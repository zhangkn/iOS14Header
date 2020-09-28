/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKPlaceActivityProviderDelegate;
@class MKMapItem;

@interface MKPlaceActivityProvider : NSObject {

	id<MKPlaceActivityProviderDelegate> _delegate;
	MKMapItem* _mapItem;

}

@property (assign,nonatomic,__weak) id<MKPlaceActivityProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                              //@synthesize mapItem=_mapItem - In the implementation block
-(id)activityTitle;
-(void)setDelegate:(id<MKPlaceActivityProviderDelegate>)arg1 ;
-(id)activityURL;
-(id)webPlaceCardURL;
-(BOOL)shouldUseWebPlaceCardForActivityType:(id)arg1 ;
-(id)activityAnnotationView;
-(id)mapMetadataSpecialization;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id<MKPlaceActivityProviderDelegate>)delegate;
-(MKMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 ;
@end
