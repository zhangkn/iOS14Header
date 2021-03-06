/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWallpaperEffectViewBase.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@class SBWallpaperController, NSString;

@interface SBWallpaperEffectView : SBWallpaperEffectViewBase <SBApplicationSceneBackgroundView>

@property (nonatomic,readonly) SBWallpaperController * wallpaperController; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long wallpaperStyle; 
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBWallpaperController *)wallpaperController;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2 ;
-(id)initWithWallpaperVariant:(long long)arg1 ;
@end

