/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UITextView, NSString;

@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView> {

	UITextView* _textView;
	NSString* _headerText;
	NSString* _descriptionText;

}

@property (nonatomic,retain) NSString * headerText;                   //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
-(double)preferredHeightForWidth:(double)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
@end
