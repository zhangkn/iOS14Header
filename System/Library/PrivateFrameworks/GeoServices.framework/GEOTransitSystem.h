/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOTransitSystem <NSObject>
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@required
-(unsigned long long)muid;
-(id<GEOTransitArtworkDataSource>)artwork;
-(NSString *)name;

@end
