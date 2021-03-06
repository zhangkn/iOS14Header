/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIListContentTextPropertiesInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIFont, NSString, UIColor, NSAttributedString;

@interface _UIContentViewLabelConfiguration : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedFont : 1;
		unsigned hasCustomizedTextColor : 1;
		unsigned hasCustomizedTextAlignment : 1;
		unsigned hasCustomizedLineBreakMode : 1;
		unsigned hasCustomizedNumberOfLines : 1;
		unsigned hasCustomizedAdjustsFontSizeToFitWidth : 1;
		unsigned hasCustomizedMinimumScaleFactor : 1;
		unsigned hasCustomizedAllowsDefaultTighteningForTruncation : 1;
		unsigned hasCustomizedAdjustsFontForContentSizeCategory : 1;
	}  _configurationFlags;
	BOOL _adjustsFontSizeToFitWidth;
	BOOL _allowsDefaultTighteningForTruncation;
	BOOL _adjustsFontForContentSizeCategory;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	long long _lineBreakMode;
	NSAttributedString* _attributedText;
	long long _numberOfLines;
	double _minimumScaleFactor;
	UIColor* _highlightedTextColor;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                         //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,readonly) long long _effectiveTextAlignment; 
@property (nonatomic,readonly) BOOL _hasNonEmptyPlainTextOnly; 
+(BOOL)supportsSecureCoding;
-(long long)lineBreakMode;
-(void)setTextAlignment:(long long)arg1 ;
-(NSAttributedString *)attributedText;
-(UIColor *)highlightedTextColor;
-(long long)numberOfLines;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(long long)textAlignment;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(NSString *)text;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setText:(NSString *)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(UIFont *)font;
-(double)minimumScaleFactor;
-(BOOL)adjustsFontSizeToFitWidth;
-(id)init;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(UIColor *)textColor;
-(void)applyToLabel:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_effectiveTextAlignment;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_hasNonEmptyPlainTextOnly;
-(BOOL)allowsDefaultTighteningForTruncation;
-(unsigned long long)hash;
-(id)description;
-(void)setFont:(UIFont *)arg1 ;
@end

