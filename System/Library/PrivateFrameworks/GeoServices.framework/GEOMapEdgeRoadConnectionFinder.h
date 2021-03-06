/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeConnectionFinder.h>

@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder
-(BOOL)_isRoadEdgeEqual:(const SCD_Struct_GE86*)arg1 other:(const SCD_Struct_GE86*)arg2 ;
-(void)_findConnectedEdges:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
@end

