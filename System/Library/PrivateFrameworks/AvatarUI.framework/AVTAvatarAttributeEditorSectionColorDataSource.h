/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;
@class AVTAvatarAttributeEditorColorSection;

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject {

	AVTAvatarAttributeEditorColorSection* _colorSection;
	id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> _delegate;
	long long _selectedPrimaryColorIndex;
	long long _selectedExtendedColorIndex;
	long long _displayMode;

}

@property (assign,nonatomic) long long selectedPrimaryColorIndex;                                              //@synthesize selectedPrimaryColorIndex=_selectedPrimaryColorIndex - In the implementation block
@property (assign,nonatomic) long long selectedExtendedColorIndex;                                             //@synthesize selectedExtendedColorIndex=_selectedExtendedColorIndex - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                            //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) long long selectedItemIndex; 
@property (nonatomic,retain) AVTAvatarAttributeEditorColorSection * colorSection;                              //@synthesize colorSection=_colorSection - In the implementation block
@property (nonatomic,readonly) BOOL isShowingSlider; 
@property (nonatomic,readonly) BOOL isShowingExtended; 
@property (assign,nonatomic) id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)selectedItemFromItems:(id)arg1 ;
+(long long)indexOfItem:(id)arg1 inItems:(id)arg2 ;
-(long long)displayMode;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(void)resetToDefaultDisplayMode;
-(void)updateSelectedIndexesSelectingItem:(id)arg1 fromUserInteraction:(BOOL)arg2 ;
-(AVTAvatarAttributeEditorColorSection *)colorSection;
-(BOOL)isShowingExtended;
-(long long)selectedExtendedColorIndex;
-(long long)selectedPrimaryColorIndex;
-(id)indexPathOfExtendedIcon;
-(void)setSelectedPrimaryColorIndex:(long long)arg1 ;
-(void)setSelectedExtendedColorIndex:(long long)arg1 ;
-(BOOL)isShowingSlider;
-(void)toggleSliderMode;
-(void)toggleExtendedMode;
-(id)sectionItemAtIndex:(long long)arg1 ;
-(void)setColorSection:(AVTAvatarAttributeEditorColorSection *)arg1 ;
-(void)selectSectionItemAtIndexPath:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate>)arg1 ;
-(id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate>)delegate;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)selectedItemIndex;
@end
