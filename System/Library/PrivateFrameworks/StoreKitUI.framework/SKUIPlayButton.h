/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPlayButtonControl.h>

@class SKUIPlayButtonImageCache, NSString;

@interface SKUIPlayButton : SKUIPlayButtonControl {

	BOOL _showStop;
	SKUIPlayButtonImageCache* _imageCache;
	BOOL _showOnDemand;
	long long _itemIdentifier;
	NSString* _playItemIdentifier;
	long long _style;
	NSString* _mediaURLString;

}

@property (nonatomic,readonly) SKUIPlayButtonImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) long long itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * playItemIdentifier;                          //@synthesize playItemIdentifier=_playItemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL showOnDemand;                                    //@synthesize showOnDemand=_showOnDemand - In the implementation block
@property (assign,nonatomic) long long style;                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * mediaURLString;                              //@synthesize mediaURLString=_mediaURLString - In the implementation block
@property (assign,nonatomic) BOOL useLargeButton; 
@property (assign,getter=isRadio,nonatomic) BOOL radio; 
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(void)refresh;
-(id)images;
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(id)defaultBackgroundColor;
-(void)tintColorDidChange;
-(id)playImage;
-(long long)style;
-(CGSize)buttonSize;
-(void)layoutSubviews;
-(BOOL)isRadio;
-(void)setBackgroundType:(long long)arg1 ;
-(SKUIPlayButtonImageCache *)imageCache;
-(void)_updateEnabledState;
-(id)outerBorderColor;
-(void)setEnabled:(BOOL)arg1 ;
-(float)buttonCornerRadius;
-(void)setStyle:(long long)arg1 ;
-(NSString *)mediaURLString;
-(void)setMediaURLString:(NSString *)arg1 ;
-(NSString *)playItemIdentifier;
-(BOOL)showOnDemand;
-(void)reloadWithItemStatus:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)showOuterBorder;
-(id)cancelImage;
-(void)playIndicatorDidChange:(BOOL)arg1 ;
-(void)setShowOnDemand:(BOOL)arg1 ;
-(void)setPlayItemIdentifier:(NSString *)arg1 ;
-(void)setRadio:(BOOL)arg1 ;
-(void)setUseLargeButton:(BOOL)arg1 ;
-(BOOL)useLargeButton;
@end

