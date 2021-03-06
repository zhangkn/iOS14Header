/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFWallpaperDataStore <NSObject>
@required
-(id)wallpaperColorNameForVariant:(long long)arg1;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)removeProceduralWallpaperForVariants:(long long)arg1;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(void)removeWallpaperImageHashDataForVariants:(long long)arg1;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
-(BOOL)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
-(id)wallpaperGradientForVariant:(long long)arg1;
-(BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
-(id)wallpaperColorForVariant:(long long)arg1;
-(id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(void)removeWallpaperGradientForVariants:(long long)arg1;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
-(id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
-(id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)removeWallpaperColorForVariants:(long long)arg1;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)removeVideoForVariant:(long long)arg1;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)removeWallpaperOptionsForVariants:(long long)arg1;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;

@end

