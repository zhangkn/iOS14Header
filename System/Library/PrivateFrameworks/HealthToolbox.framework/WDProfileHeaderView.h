/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, NSPersonNameComponentsFormatter;

@interface WDProfileHeaderView : UIView {

	UIView* _avatarView;
	UILabel* _nameLabel;
	NSPersonNameComponentsFormatter* _nameFormatter;

}

@property (nonatomic,retain) UILabel * nameLabel;                                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) NSPersonNameComponentsFormatter * nameFormatter;              //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) UIView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,getter=isNameHidden,nonatomic) BOOL nameHidden; 
+(BOOL)requiresConstraintBasedLayout;
-(void)setAvatarView:(UIView *)arg1 ;
-(UIView *)avatarView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateFont;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)nameLabel;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)setNameHidden:(BOOL)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(NSPersonNameComponentsFormatter *)nameFormatter;
-(void)setNameFormatter:(NSPersonNameComponentsFormatter *)arg1 ;
-(BOOL)isNameHidden;
@end
