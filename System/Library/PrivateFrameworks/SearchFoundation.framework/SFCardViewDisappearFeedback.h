/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class SFCard;

@interface SFCardViewDisappearFeedback : SFFeedback {

	SFCard* _card;
	unsigned long long _cardDisappearEvent;

}

@property (nonatomic,readonly) SFCard * card;                                    //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned long long cardDisappearEvent;              //@synthesize cardDisappearEvent=_cardDisappearEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(SFCard *)card;
-(void)setCardDisappearEvent:(unsigned long long)arg1 ;
-(unsigned long long)cardDisappearEvent;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCard:(id)arg1 event:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
