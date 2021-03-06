/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BlastDoorMessagesAppBalloon, NSData, BlastDoorCombinedPluginAttachmentInfo;

@interface BlastDoorBalloonPluginPayloadWrapper : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorMessagesAppBalloon * messagesAppBalloon; 
@property (readonly,nonatomic) NSData * linkPresentation; 
@property (readonly,nonatomic) BlastDoorCombinedPluginAttachmentInfo * combinedPluginAttachmentInfo; 
@property (readonly,nonatomic) NSData * unknown_payload; 
-(id)init;
-(unsigned long long)type;
-(NSData *)linkPresentation;
-(NSData *)unknown_payload;
-(NSString *)description;
-(BlastDoorMessagesAppBalloon *)messagesAppBalloon;
-(BlastDoorCombinedPluginAttachmentInfo *)combinedPluginAttachmentInfo;
@end

