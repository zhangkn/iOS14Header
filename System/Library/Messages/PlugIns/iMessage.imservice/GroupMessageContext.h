/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface GroupMessageContext : NSObject {

	BOOL _groupChat;
	NSDictionary* _groupPayload;
	NSDictionary* _additionalPayload;

}

@property (nonatomic,readonly) NSDictionary * groupPayload;                    //@synthesize groupPayload=_groupPayload - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalPayload;               //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (getter=isGroupChat,nonatomic,readonly) BOOL groupChat;              //@synthesize groupChat=_groupChat - In the implementation block
-(BOOL)isGroupChat;
-(NSDictionary *)additionalPayload;
-(id)initWithGroupPayload:(id)arg1 additionalPayload:(id)arg2 isGroupChat:(BOOL)arg3 ;
-(NSDictionary *)groupPayload;
@end

