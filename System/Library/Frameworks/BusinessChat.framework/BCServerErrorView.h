/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface BCServerErrorView : UIView {

	UIView* _contentView;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) UIView * contentView;                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
-(UIView *)contentView;
-(UILabel *)messageLabel;
-(void)setContentView:(UIView *)arg1 ;
-(id)init;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end

