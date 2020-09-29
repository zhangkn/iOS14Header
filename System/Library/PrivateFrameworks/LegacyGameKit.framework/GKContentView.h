/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:31 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIButton, UITableView, NSArray, UIActivityIndicatorView, NSString, UIImage, UIFont;

@interface GKContentView : UIView {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIImageView* _iconView;
	UIButton* _cancelButton;
	UIButton* _otherButton;
	UITableView* _table;
	UIImageView* _tableWellView;
	NSArray* _connectionButtons;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _needsLayout;

}

@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                   //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) NSString * title; 
@property (assign,nonatomic) NSString * message; 
@property (assign,nonatomic) UIImage * icon; 
@property (nonatomic,retain) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * otherButton;                                   //@synthesize otherButton=_otherButton - In the implementation block
@property (nonatomic,retain,readonly) NSArray * connectionButtons;                     //@synthesize connectionButtons=_connectionButtons - In the implementation block
@property (nonatomic,retain,readonly) UITableView * table; 
@property (assign,nonatomic) long long numberOfTitleLines; 
@property (assign,nonatomic) long long numberOfMessageLines; 
@property (nonatomic,readonly) UIFont * titleFont; 
@property (nonatomic,readonly) UIFont * messageFont; 
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
+(double)maxTextWidth;
-(UIButton *)cancelButton;
-(UITableView *)table;
-(void)layoutIfNeeded;
-(UILabel *)titleLabel;
-(void)setIconView:(UIImageView *)arg1 ;
-(UILabel *)messageLabel;
-(UIImageView *)iconView;
-(void)dealloc;
-(NSString *)title;
-(UIImage *)icon;
-(UIFont *)titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)layout;
-(long long)numberOfTitleLines;
-(void)setNumberOfTitleLines:(long long)arg1 ;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)message;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setOtherButton:(UIButton *)arg1 ;
-(UIButton *)otherButton;
-(UIFont *)messageFont;
-(void)_createCancelButtonWithTitle:(id)arg1 ;
-(void)_createOtherButtonWithTitle:(id)arg1 ;
-(id)_createConnectionButtonWithType:(unsigned long long)arg1 ;
-(void)_createTitleLabelIfNeeded;
-(void)_createMessageLabelIfNeeded;
-(id)_createButton:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 ;
-(void)setConnectionButtonTypes:(unsigned long long)arg1 ;
-(long long)numberOfMessageLines;
-(void)setNumberOfMessageLines:(long long)arg1 ;
-(NSArray *)connectionButtons;
@end
