/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/MapsSync.MapsSyncDataQueryDelegate.h>

@class NSMutableDictionary, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <MapsSync.MapsSyncDataQueryDelegate> {

	NSMutableDictionary* _queryMap;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) NSMutableDictionary * queryMap;                       //@synthesize queryMap=_queryMap - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;              //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(void)queryContentsDidChangeWithQuery:(id)arg1 ;
-(id)init;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(void)_setup;
-(void)clearParkedCarBulletin;
-(id)initWithMapServiceManager:(id)arg1 ;
-(void)_createQueries;
-(NSMutableDictionary *)queryMap;
-(void)_showParkedCarBulletinForEvent:(id)arg1 ;
-(void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)_clearParkedCarBulletin;
-(void)_fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)_queryTypeForQuery:(id)arg1 ;
-(void)setQueryMap:(NSMutableDictionary *)arg1 ;
@end
