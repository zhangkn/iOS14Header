/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class NSURL, AVURLAsset, NSDictionary, NSMutableDictionary;

@interface VCPURLAsset : VCPAsset {

	NSURL* _imageURL;
	AVURLAsset* _movie;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	BOOL _onceExif;
	NSDictionary* _cachedExif;
	BOOL _onceScenes;
	NSMutableDictionary* _cachedScenes;

}
+(id)sdofImageAssetWithURL:(id)arg1 ;
+(id)movieAssetWithURL:(id)arg1 ;
+(id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
+(id)imageAssetWithURL:(id)arg1 ;
-(id)scenes;
-(id)modificationDate;
-(long long)mediaType;
-(id)exif;
-(id)movie;
-(unsigned long long)pixelWidth;
-(id)initWithImageURL:(id)arg1 isSDOF:(BOOL)arg2 ;
-(id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
-(id)initWithMovieURL:(id)arg1 ;
-(double)duration;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)originalMovie;
-(unsigned long long)mediaSubtypes;
-(id)mainFileURL;
-(unsigned long long)pixelHeight;
@end

