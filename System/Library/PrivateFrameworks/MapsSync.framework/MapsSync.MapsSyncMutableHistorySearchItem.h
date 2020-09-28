/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOMapRegion, NSString;

@interface MapsSync.MapsSyncMutableHistorySearchItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOMapRegion * geoMapRegion; 
@property (copy,nonatomic) NSString * language; 
@property (copy,nonatomic) NSString * locationDisplay; 
@property (copy,nonatomic) NSString * query; 
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(GEOMapRegion *)geoMapRegion;
-(void)setGeoMapRegion:(GEOMapRegion *)arg1 ;
-(NSString *)locationDisplay;
-(void)setLocationDisplay:(NSString *)arg1 ;
@end
