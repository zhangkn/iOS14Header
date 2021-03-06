/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/_EDWrappedMessage.h>

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage {

	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
-(long long)databaseID;
-(EDMessagePersistence *)messagePersistence;
-(id)initWithMessage:(id)arg1 messagePersistence:(id)arg2 ;
@end

