/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor;
@class NSString, NSObject, MapsSuggestionsETARequirements, CLLocation, GEOComposedWaypoint, NSMutableDictionary, NSLock, GEOAutomobileOptions;

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	id<MapsSuggestionsPredictor> _transportModePredictor;
	MapsSuggestionsETARequirements* _etaRequirements;
	CLLocation* _currentLocationUsed;
	GEOComposedWaypoint* _currentLocationWaypoint;
	NSMutableDictionary* _waypoints;
	NSLock* _waypointsLock;
	int _forcedTransportMode;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (assign) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(NSString *)uniqueName;
-(BOOL)transportTypeFromLocation:(id)arg1 toEntry:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)networkRequester;
-(void)forceTransportType:(int)arg1 ;
-(BOOL)ETAsFromLocation:(id)arg1 toEntries:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3 ;
@end

