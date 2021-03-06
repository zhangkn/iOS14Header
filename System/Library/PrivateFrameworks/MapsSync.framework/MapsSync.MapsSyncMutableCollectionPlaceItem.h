/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableCollectionItem.h>

@class NSString, GEOLatLng, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableCollectionPlaceItem : MapsSync.MapsSyncMutableCollectionItem {

	 _proxyCollectionPlaceItem;

}

@property (copy,nonatomic) NSString * customName; 
@property (retain,nonatomic) GEOLatLng * droppedPinCoordinate; 
@property (assign,nonatomic) int droppedPinFloorOrdinal; 
@property (retain,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (assign,nonatomic) short origin; 
-(void)setOrigin:(short)arg1 ;
-(short)origin;
-(NSString *)customName;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setCustomName:(NSString *)arg1 ;
-(GEOLatLng *)droppedPinCoordinate;
-(void)setDroppedPinCoordinate:(GEOLatLng *)arg1 ;
-(int)droppedPinFloorOrdinal;
-(void)setDroppedPinFloorOrdinal:(int)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
@end

