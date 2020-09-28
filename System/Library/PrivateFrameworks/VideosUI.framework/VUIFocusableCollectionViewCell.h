/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface VUIFocusableCollectionViewCell : UICollectionViewCell {

	BOOL _allowsFocus;

}

@property (assign,nonatomic) BOOL allowsFocus;              //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsFocus;
-(void)_updateBackgroundAndHighlightColor;
@end
