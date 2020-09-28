/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableDictionary, MKDirections, MKMapItem, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions;

@interface _MKRouteETAFetcher : NSObject {

	NSMutableDictionary* _etaResults;
	CLLocationCoordinate2D _lastUpdatedETAOriginCoordinate;
	double _lastUpdatedETATime;
	double _lastRequestTime;
	MKDirections* _inProgressETAUpdate;
	BOOL _lastETAUpdateHadError;
	double _staleDistance;
	double _staleTimeInterval;
	BOOL _optionsHaveChangedSinceLastUpdate;
	MKMapItem* _mapItem;
	MKMapItem* _originMapItem;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOCyclingOptions* _cyclingOptions;

}

@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions;                      //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,copy) GEOTransitOptions * transitOptions;                            //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,copy) GEOCyclingOptions * cyclingOptions;                            //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem;                                   //@synthesize originMapItem=_originMapItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * etaResults;                          //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D originCoordinate; 
@property (nonatomic,readonly) CLLocationCoordinate2D destinationCoordinate; 
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)_resetState;
-(void)invalidateETAForTransportType:(unsigned long long)arg1 ;
-(MKMapItem *)originMapItem;
-(CLLocationCoordinate2D)originCoordinate;
-(BOOL)isUsingCurrentLocationForOrigin;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(void)requestNewETAForTransportType:(unsigned long long)arg1 additionalTransportTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CLLocationCoordinate2D)destinationCoordinate;
-(void)expireETAsIfNoLongerValid;
-(BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(CLLocationCoordinate2D)arg1 ;
-(void)_didUpdateETAResult;
-(GEOTransitOptions *)transitOptions;
-(void)dealloc;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(id)init;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(GEOCyclingOptions *)cyclingOptions;
-(MKMapItem *)mapItem;
-(NSMutableDictionary *)etaResults;
-(BOOL)isValidETA:(id)arg1 ;
@end
