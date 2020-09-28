/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UILabel, NSString;

@interface CPSVibrantLabel : UIVisualEffectView <UIContentSizeCategoryAdjusting> {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)lineBreakMode;
-(void)setTextAlignment:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(long long)numberOfLines;
-(void)setNumberOfLines:(long long)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)setLineBreakMode:(long long)arg1 ;
-(long long)textAlignment;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(NSString *)text;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setText:(NSString *)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithTextStyle:(id)arg1 textVariant:(long long)arg2 vibrancyEffectStyle:(long long)arg3 ;
@end
