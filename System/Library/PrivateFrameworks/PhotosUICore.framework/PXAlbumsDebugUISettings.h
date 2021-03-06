/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXAlbumsDebugUISettings : PXSettings {

	BOOL _showBestKeyFrameDebugAlbum;
	BOOL _showUtilitiesDebugAlbum;
	BOOL _showDreamyDebugAlbum;
	BOOL _showCustomDebugAlbum;
	NSString* _customDebugAlbumTitle;
	NSString* _customDebugInternalPredicate;
	NSString* _customDebugPredicate;

}

@property (assign,nonatomic) BOOL showBestKeyFrameDebugAlbum;                    //@synthesize showBestKeyFrameDebugAlbum=_showBestKeyFrameDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showUtilitiesDebugAlbum;                       //@synthesize showUtilitiesDebugAlbum=_showUtilitiesDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showDreamyDebugAlbum;                          //@synthesize showDreamyDebugAlbum=_showDreamyDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showCustomDebugAlbum;                          //@synthesize showCustomDebugAlbum=_showCustomDebugAlbum - In the implementation block
@property (nonatomic,copy) NSString * customDebugAlbumTitle;                     //@synthesize customDebugAlbumTitle=_customDebugAlbumTitle - In the implementation block
@property (nonatomic,copy) NSString * customDebugInternalPredicate;              //@synthesize customDebugInternalPredicate=_customDebugInternalPredicate - In the implementation block
@property (nonatomic,copy) NSString * customDebugPredicate;                      //@synthesize customDebugPredicate=_customDebugPredicate - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(/*^block*/id)_predicateValidatorUsingInternalPredicate:(BOOL)arg1 ;
-(void)setDefaultValues;
-(BOOL)showUtilitiesDebugAlbum;
-(NSString *)customDebugAlbumTitle;
-(NSString *)customDebugPredicate;
-(void)setCustomDebugAlbumTitle:(NSString *)arg1 ;
-(void)setCustomDebugPredicate:(NSString *)arg1 ;
-(void)setShowDreamyDebugAlbum:(BOOL)arg1 ;
-(BOOL)showCustomDebugAlbum;
-(BOOL)showBestKeyFrameDebugAlbum;
-(void)setCustomDebugInternalPredicate:(NSString *)arg1 ;
-(void)setShowBestKeyFrameDebugAlbum:(BOOL)arg1 ;
-(void)setShowUtilitiesDebugAlbum:(BOOL)arg1 ;
-(BOOL)showDreamyDebugAlbum;
-(NSString *)customDebugInternalPredicate;
-(void)setShowCustomDebugAlbum:(BOOL)arg1 ;
-(id)parentSettings;
@end

