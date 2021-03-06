/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchFoundation/SFImage.h>

@class UIImage, SFImage;

@interface SearchUIImage : SFImage {

	BOOL _useFastPathShadow;
	BOOL _needsTinting;
	UIImage* _uiImage;
	SFImage* _sfImage;

}

@property (nonatomic,retain) UIImage * uiImage;                             //@synthesize uiImage=_uiImage - In the implementation block
@property (nonatomic,readonly) SFImage * sfImage;                           //@synthesize sfImage=_sfImage - In the implementation block
@property (assign,nonatomic) BOOL useFastPathShadow;                        //@synthesize useFastPathShadow=_useFastPathShadow - In the implementation block
@property (assign,nonatomic) BOOL needsTinting;                             //@synthesize needsTinting=_needsTinting - In the implementation block
@property (nonatomic,readonly) int defaultCornerRoundingStyle; 
+(id)imageWithSFImage:(id)arg1 ;
+(id)imageWithSFImage:(id)arg1 variantForAppIcon:(unsigned long long)arg2 ;
-(id)imageData;
-(id)initWithImage:(id)arg1 ;
-(double)cornerRadius;
-(id)loadImage;
-(double)scale;
-(BOOL)needsTinting;
-(int)defaultCornerRoundingStyle;
-(SFImage *)sfImage;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldCropToCircle;
-(int)cornerRoundingStyle;
-(UIImage *)uiImage;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)size;
-(BOOL)useFastPathShadow;
-(unsigned long long)hash;
-(BOOL)isTemplate;
-(void)setNeedsTinting:(BOOL)arg1 ;
-(id)initWithSFImage:(id)arg1 ;
-(void)setUiImage:(UIImage *)arg1 ;
-(void)setUseFastPathShadow:(BOOL)arg1 ;
@end

