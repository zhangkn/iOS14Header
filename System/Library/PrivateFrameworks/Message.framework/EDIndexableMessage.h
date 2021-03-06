/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDIndexableMessage <ECMessage>
@property (nonatomic,readonly) id<EDIndexableAccount> account; 
@property (nonatomic,readonly) id<EDIndexableMailbox> mailbox; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@required
-(unsigned long long)fileSize;
-(id<EDIndexableAccount>)account;
-(id<EDIndexableMailbox>)mailbox;

@end

