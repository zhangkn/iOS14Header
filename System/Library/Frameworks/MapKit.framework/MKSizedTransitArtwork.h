/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKArtworkImageSource.h>

@protocol GEOTransitArtworkDataSource;
@class MKArtworkDataSourceCache, NSString;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource> {

	id<GEOTransitArtworkDataSource> _artwork;
	long long _shieldSize;
	MKArtworkDataSourceCache* _artworkCache;

}

@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long shieldSize;                                 //@synthesize shieldSize=_shieldSize - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache;                //@synthesize artworkCache=_artworkCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(MKArtworkDataSourceCache *)artworkCache;
-(id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2 ;
-(id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3 ;
-(BOOL)isEqualToTransitArtworkViewMode:(id)arg1 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 ;
-(long long)shieldSize;
-(unsigned long long)hash;
@end
