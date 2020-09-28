/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;
	IMHandle* _otherHandle;

}

@property (nonatomic,readonly) long long changeType; 
@property (nonatomic,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) IMHandle * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
-(Class)__ck_chatItemClass;
-(IMHandle *)sender;
-(IMHandle *)otherHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)changeType;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3 ;
@end
