/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject {

	NSArray* _completionItems;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * completionItems;              //@synthesize completionItems=_completionItems - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(NSString *)title;
-(id)init;
-(id)initWithPropertyList:(id)arg1 ;
-(NSArray *)completionItems;
@end
