/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSButton.h>

@class UIFont;

@interface CPSStyledTextButton : CPSButton {

	UIFont* _fontOverride;

}

@property (nonatomic,retain) UIFont * fontOverride;              //@synthesize fontOverride=_fontOverride - In the implementation block
+(id)buttonWithTextButton:(id)arg1 ;
-(id)_externalUnfocusedBorderColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_buttonFont;
-(UIFont *)fontOverride;
-(void)setFontOverride:(UIFont *)arg1 ;
@end

