/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject {

	BOOL _useReversePlacement;
	NSString* _text;
	id _location;
	UIColor* _labelColor;
	UIColor* _shadowColor;
	double _shadowBlur;
	CGSize _shadowOffset;

}

@property (nonatomic,retain) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL useReversePlacement;              //@synthesize useReversePlacement=_useReversePlacement - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                  //@synthesize labelColor=_labelColor - In the implementation block
@property (assign,nonatomic) UIColor * shadowColor;                 //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                   //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlur;                     //@synthesize shadowBlur=_shadowBlur - In the implementation block
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(double)shadowBlur;
-(void)setShadowColor:(UIColor *)arg1 ;
-(NSString *)text;
-(id)location;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(void)setLocation:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setShadowBlur:(double)arg1 ;
-(id)description;
-(BOOL)useReversePlacement;
-(void)setUseReversePlacement:(BOOL)arg1 ;
@end

