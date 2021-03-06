/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, UILabel, NSTextAttachment;

@interface CNContactDowntimeView : UIView {

	NSDictionary* _ab_textAttributes;
	long long _elements;
	UILabel* _downtimeLabel;
	NSTextAttachment* _imageAttachment;

}

@property (nonatomic,readonly) UILabel * downtimeLabel;                         //@synthesize downtimeLabel=_downtimeLabel - In the implementation block
@property (nonatomic,readonly) NSTextAttachment * imageAttachment;              //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (nonatomic,copy) NSDictionary * ab_textAttributes;                    //@synthesize ab_textAttributes=_ab_textAttributes - In the implementation block
@property (assign,nonatomic) long long elements;                                //@synthesize elements=_elements - In the implementation block
+(id)lockImageAttachment;
-(CGSize)intrinsicContentSize;
-(long long)elements;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setElements:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateAttributedText;
-(NSTextAttachment *)imageAttachment;
-(UILabel *)downtimeLabel;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
@end

