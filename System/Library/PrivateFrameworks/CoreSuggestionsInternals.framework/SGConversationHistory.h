/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSArray, NSString;

@interface SGConversationHistory : NSObject {

	NSArray* _messages;
	NSString* _likelyLanguage;

}

@property (readonly) NSArray * messages;                     //@synthesize messages=_messages - In the implementation block
@property (readonly) NSString * likelyLanguage;              //@synthesize likelyLanguage=_likelyLanguage - In the implementation block
-(id)initWithMessages:(id)arg1 ;
-(NSArray *)messages;
-(NSString *)likelyLanguage;
@end
