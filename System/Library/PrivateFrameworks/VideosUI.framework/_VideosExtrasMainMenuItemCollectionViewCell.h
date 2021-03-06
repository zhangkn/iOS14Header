/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell {

	NSLayoutConstraint* _textLabelConstraint;
	UILabel* _textLabel;

}

@property (nonatomic,retain) NSLayoutConstraint * textLabelConstraint;              //@synthesize textLabelConstraint=_textLabelConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                 //@synthesize textLabel=_textLabel - In the implementation block
+(id)_createLabelInCell:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)safeAreaInsetsDidChange;
-(UILabel *)textLabel;
-(void)_dynamicTypeChanged;
-(void)setTextLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelConstraint;
@end

