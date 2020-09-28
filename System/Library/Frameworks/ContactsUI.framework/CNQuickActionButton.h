/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CNQuickActionButtonDelegate;
@class CNQuickAction, UIButton, UILabel, NSArray;

@interface CNQuickActionButton : UIView {

	BOOL _showTitle;
	BOOL _showBackgroundPlatter;
	CNQuickAction* _action;
	id<CNQuickActionButtonDelegate> _delegate;
	UIButton* _button;
	UILabel* _label;
	NSArray* _activatedConstraints;

}

@property (nonatomic,retain) UIButton * button;                                            //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UILabel * label;                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                               //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) CNQuickAction * action;                                       //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL showTitle;                                               //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;                                   //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (assign,nonatomic,__weak) id<CNQuickActionButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)performAction;
-(BOOL)showTitle;
-(void)setButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setShowTitle:(BOOL)arg1 ;
-(CNQuickAction *)action;
-(UIButton *)button;
-(void)setDelegate:(id<CNQuickActionButtonDelegate>)arg1 ;
-(void)onLongPress:(id)arg1 ;
-(void)setAction:(CNQuickAction *)arg1 ;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(id<CNQuickActionButtonDelegate>)delegate;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
@end
