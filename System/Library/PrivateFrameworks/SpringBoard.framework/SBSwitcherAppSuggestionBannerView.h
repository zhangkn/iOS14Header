/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <PlatterKit/PLPlatterView.h>

@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {

	SBBestAppSuggestion* _suggestion;
	UIImageView* _iconView;
	UILabel* _appLabel;
	UILabel* _descriptionLabel;
	unsigned long long _style;
	BOOL _highlighted;
	UIView* _highlightDarkeningView;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) SBBestAppSuggestion * representedAppSuggestion; 
@property (nonatomic,readonly) unsigned long long style;                                    //@synthesize style=_style - In the implementation block
-(id)_titleFont;
-(BOOL)isHighlighted;
-(id)_descriptionFont;
-(unsigned long long)style;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithRecipe:(long long)arg1 ;
-(id)_textStyle;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_configureConstraints;
-(id)initWithFrame:(CGRect)arg1 appSuggestion:(id)arg2 style:(unsigned long long)arg3 ;
-(void)_createAppLabelForSuggestion:(id)arg1 ;
-(void)_createIconViewForSuggestion:(id)arg1 ;
-(void)_createDescriptionLabelForSuggestion:(id)arg1 ;
-(void)_createDarkeningView;
-(void)_updateAppearanceForCurrentUserInterfaceStyle;
-(BOOL)_isSingleLine;
-(id)_appTitleForSuggestion:(id)arg1 ;
-(id)_firstWakeGreetingString;
-(id)_descriptionStringForSuggestion:(id)arg1 ;
-(id)_iconImageFromAppWithBundleIdentifier:(id)arg1 withIconImageCache:(id)arg2 ;
-(SBBestAppSuggestion *)representedAppSuggestion;
-(id)_meCardShortName;
@end

