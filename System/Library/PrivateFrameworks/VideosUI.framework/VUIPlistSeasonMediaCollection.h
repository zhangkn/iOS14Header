/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaCollection.h>
#import <libobjc.A.dylib/VUIPlistMediaEntityImageLoadParamsCreating.h>

@class VUIPlistMediaDatabaseSeason;

@interface VUIPlistSeasonMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating> {

	VUIPlistMediaDatabaseSeason* _databaseSeason;

}

@property (nonatomic,retain) VUIPlistMediaDatabaseSeason * databaseSeason;              //@synthesize databaseSeason=_databaseSeason - In the implementation block
-(id)seasonNumber;
-(id)showTitle;
-(id)playedState;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 databaseSeason:(id)arg2 requestedProperties:(id)arg3 ;
-(id)mediaItemCount;
-(VUIPlistMediaDatabaseSeason *)databaseSeason;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(void)setDatabaseSeason:(VUIPlistMediaDatabaseSeason *)arg1 ;
@end

