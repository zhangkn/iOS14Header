/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCCardStyleProviding.h>

@class FCColor, FCColorGradient, NSString;

@interface FCCardStyle : NSObject <FCCardStyleProviding> {

	FCColor* _titleForegroundColor;
	FCColor* _eyebrowForegroundColor;
	FCColor* _cardBackgroundColor;
	FCColor* _cardForegroundColor;
	FCColorGradient* _sauceGradient;
	FCColor* _ctaBackgroundColor;
	FCColor* _ctaForegroundColor;

}

@property (nonatomic,copy) FCColor * titleForegroundColor;                //@synthesize titleForegroundColor=_titleForegroundColor - In the implementation block
@property (nonatomic,copy) FCColor * eyebrowForegroundColor;              //@synthesize eyebrowForegroundColor=_eyebrowForegroundColor - In the implementation block
@property (nonatomic,copy) FCColor * cardBackgroundColor;                 //@synthesize cardBackgroundColor=_cardBackgroundColor - In the implementation block
@property (nonatomic,copy) FCColor * cardForegroundColor;                 //@synthesize cardForegroundColor=_cardForegroundColor - In the implementation block
@property (nonatomic,copy) FCColorGradient * sauceGradient;               //@synthesize sauceGradient=_sauceGradient - In the implementation block
@property (nonatomic,copy) FCColor * ctaBackgroundColor;                  //@synthesize ctaBackgroundColor=_ctaBackgroundColor - In the implementation block
@property (nonatomic,copy) FCColor * ctaForegroundColor;                  //@synthesize ctaForegroundColor=_ctaForegroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleWithPBCardStyle:(id)arg1 ;
+(id)styleWithConfigDict:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCColor *)ctaBackgroundColor;
-(FCColor *)cardForegroundColor;
-(void)setCardForegroundColor:(FCColor *)arg1 ;
-(id)initWithTitleForegroundColor:(id)arg1 eyebrowForegroundColor:(id)arg2 cardBackgroundColor:(id)arg3 cardForegroundColor:(id)arg4 sauceGradient:(id)arg5 ctaBackgroundColor:(id)arg6 ctaForegroundColor:(id)arg7 ;
-(FCColor *)cardBackgroundColor;
-(FCColorGradient *)sauceGradient;
-(void)setCtaBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)ctaForegroundColor;
-(void)setCardBackgroundColor:(FCColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSauceGradient:(FCColorGradient *)arg1 ;
-(FCColor *)eyebrowForegroundColor;
-(unsigned long long)hash;
-(id)pbCardStyle;
-(FCColor *)titleForegroundColor;
-(void)setEyebrowForegroundColor:(FCColor *)arg1 ;
-(void)setCtaForegroundColor:(FCColor *)arg1 ;
-(void)setTitleForegroundColor:(FCColor *)arg1 ;
@end

