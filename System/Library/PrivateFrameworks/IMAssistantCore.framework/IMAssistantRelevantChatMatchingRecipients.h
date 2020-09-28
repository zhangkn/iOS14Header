/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject {

	IMChat* _chat;
	NSArray* _resolvedPersons;

}

@property (nonatomic,retain) IMChat * chat;                        //@synthesize chat=_chat - In the implementation block
@property (nonatomic,copy) NSArray * resolvedPersons;              //@synthesize resolvedPersons=_resolvedPersons - In the implementation block
-(IMChat *)chat;
-(void)setChat:(IMChat *)arg1 ;
-(id)description;
-(NSArray *)resolvedPersons;
-(id)initWithChat:(id)arg1 resolvedPersons:(id)arg2 ;
-(void)setResolvedPersons:(NSArray *)arg1 ;
@end
