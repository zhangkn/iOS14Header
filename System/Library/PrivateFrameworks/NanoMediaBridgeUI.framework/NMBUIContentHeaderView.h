/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIStackView, UILabel, UIProgressView;

@interface NMBUIContentHeaderView : UIView {

	UIStackView* _contentStackView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIProgressView* _progressView;

}

@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIProgressView * progressView; 
-(UIProgressView *)progressView;
-(UILabel *)detailTextLabel;
-(UILabel *)textLabel;
-(id)_contentStackView;
@end
