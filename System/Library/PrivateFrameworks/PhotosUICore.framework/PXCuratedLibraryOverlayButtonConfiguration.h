/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGViewUserData.h>

@class UIColor, UIImage, PXCuratedLibrarySectionHeaderLayoutSpec, PXCuratedLibraryActionPerformer, NSString, NSSet;

@interface PXCuratedLibraryOverlayButtonConfiguration : NSObject <PXGViewUserData> {

	BOOL _isSystemSymbolIcon;
	BOOL _forcePointerInteractionEnabled;
	UIColor* _contentColor;
	UIColor* _highlightedContentColor;
	UIImage* _iconImage;
	UIImage* _tintedIconImage;
	UIImage* _highlightedIconImage;
	PXCuratedLibrarySectionHeaderLayoutSpec* _spec;
	PXCuratedLibraryActionPerformer* _actionPerformer;
	/*^block*/id _actionHandler;
	long long _style;
	long long _segment;
	NSString* _iconImageName;
	NSString* _title;
	NSSet* _possibleTitles;
	NSString* _caption;
	UIColor* _tintColor;
	UIColor* _backgroundColor;
	UIEdgeInsets _imageEdgeInsets;
	UIEdgeInsets _hitTestOutsets;

}

@property (nonatomic,readonly) UIColor * contentColor;                                       //@synthesize contentColor=_contentColor - In the implementation block
@property (nonatomic,readonly) UIColor * highlightedContentColor;                            //@synthesize highlightedContentColor=_highlightedContentColor - In the implementation block
@property (nonatomic,readonly) UIImage * iconImage;                                          //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) UIImage * tintedIconImage;                                    //@synthesize tintedIconImage=_tintedIconImage - In the implementation block
@property (nonatomic,readonly) UIImage * highlightedIconImage;                               //@synthesize highlightedIconImage=_highlightedIconImage - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * spec;               //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * actionPerformer;              //@synthesize actionPerformer=_actionPerformer - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                 //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) long long style;                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long segment;                                              //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageEdgeInsets;                                   //@synthesize imageEdgeInsets=_imageEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestOutsets;                                    //@synthesize hitTestOutsets=_hitTestOutsets - In the implementation block
@property (nonatomic,readonly) NSString * iconImageName;                                     //@synthesize iconImageName=_iconImageName - In the implementation block
@property (assign,nonatomic) BOOL isSystemSymbolIcon;                                        //@synthesize isSystemSymbolIcon=_isSystemSymbolIcon - In the implementation block
@property (nonatomic,readonly) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSSet * possibleTitles;                                           //@synthesize possibleTitles=_possibleTitles - In the implementation block
@property (nonatomic,copy) NSString * caption;                                               //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) BOOL forcePointerInteractionEnabled;                            //@synthesize forcePointerInteractionEnabled=_forcePointerInteractionEnabled - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                            //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configurationWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3 ;
+(id)configurationWithIconImageName:(id)arg1 spec:(id)arg2 ;
+(id)configurationWithTitle:(id)arg1 spec:(id)arg2 ;
+(id)tintedImageCache;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)spec;
-(BOOL)isSystemSymbolIcon;
-(NSSet *)possibleTitles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setForcePointerInteractionEnabled:(BOOL)arg1 ;
-(void)setHitTestOutsets:(UIEdgeInsets)arg1 ;
-(UIColor *)highlightedContentColor;
-(id)_tintedImage:(id)arg1 name:(id)arg2 withColor:(id)arg3 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)actionHandler;
-(NSString *)title;
-(UIColor *)contentColor;
-(UIImage *)iconImage;
-(void)setPossibleTitles:(NSSet *)arg1 ;
-(long long)style;
-(id)_contentColorWhenHighlighted:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(UIEdgeInsets)imageEdgeInsets;
-(NSString *)iconImageName;
-(id)init;
-(NSString *)caption;
-(void)setActionHandler:(id)arg1 ;
-(void)setSegment:(long long)arg1 ;
-(void)setActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PXCuratedLibraryActionPerformer *)actionPerformer;
-(void)setImageEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTestOutsets;
-(void)prepareForRender;
-(void)setCaption:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)forcePointerInteractionEnabled;
-(UIImage *)tintedIconImage;
-(void)setIsSystemSymbolIcon:(BOOL)arg1 ;
-(id)initWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3 ;
-(long long)segment;
-(void)setStyle:(long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIImage *)highlightedIconImage;
@end

