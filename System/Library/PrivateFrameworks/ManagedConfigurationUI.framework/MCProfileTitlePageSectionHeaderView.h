/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIView;

@interface MCProfileTitlePageSectionHeaderView : UIView {

	NSString* _text;
	UILabel* _label;
	UIView* _separatorLine;

}

@property (nonatomic,retain) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;              //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,copy) NSString * text;                       //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
@end

