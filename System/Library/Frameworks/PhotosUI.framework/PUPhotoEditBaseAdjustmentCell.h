/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, PUPhotoEditAdjustmentControl;

@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell {

	NSString* _imageName;
	BOOL _enabled;
	BOOL _isUserModifying;
	PUPhotoEditAdjustmentControl* _containerButton;

}

@property (nonatomic,retain) PUPhotoEditAdjustmentControl * containerButton;              //@synthesize containerButton=_containerButton - In the implementation block
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double defaultValue; 
@property (assign,nonatomic) double identityValue; 
@property (assign,nonatomic) double minValue; 
@property (assign,nonatomic) double maxValue; 
@property (nonatomic,retain) NSString * imageName;                                        //@synthesize imageName=_imageName - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isUserModifying;                                        //@synthesize isUserModifying=_isUserModifying - In the implementation block
-(void)setDefaultValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(double)defaultValue;
-(BOOL)isUserModifying;
-(void)setImageName:(NSString *)arg1 ;
-(void)_setupContainerButton;
-(PUPhotoEditAdjustmentControl *)containerButton;
-(void)setContainerButton:(PUPhotoEditAdjustmentControl *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setValue:(double)arg1 ;
-(void)prepareForReuse;
-(double)maxValue;
-(void)setIsUserModifying:(BOOL)arg1 ;
-(void)setIdentityValue:(double)arg1 ;
-(void)resetToDefault;
-(void)layoutSubviews;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(double)value;
-(NSString *)imageName;
-(id)initWithCoder:(id)arg1 ;
-(double)identityValue;
-(void)setEnabled:(BOOL)arg1 ;
@end
