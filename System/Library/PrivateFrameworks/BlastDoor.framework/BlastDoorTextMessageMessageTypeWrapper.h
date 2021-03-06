/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BlastDoorTypingIndicator, BlastDoorMessage, BlastDoorTapBack, BlastDoorBalloonPlugin, BlastDoorSticker, BlastDoorAudioMessage;

@interface BlastDoorTextMessageMessageTypeWrapper : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorTypingIndicator * typingIndicator; 
@property (readonly,nonatomic) BlastDoorMessage * textMessage; 
@property (readonly,nonatomic) BlastDoorTapBack * tapback; 
@property (readonly,nonatomic) BlastDoorBalloonPlugin * balloonPlugin; 
@property (readonly,nonatomic) BlastDoorSticker * sticker; 
@property (readonly,nonatomic) BlastDoorAudioMessage * audioMessage; 
-(BlastDoorMessage *)textMessage;
-(BlastDoorSticker *)sticker;
-(BlastDoorBalloonPlugin *)balloonPlugin;
-(id)init;
-(unsigned long long)type;
-(BlastDoorTapBack *)tapback;
-(NSString *)description;
-(BlastDoorTypingIndicator *)typingIndicator;
-(BlastDoorAudioMessage *)audioMessage;
@end

