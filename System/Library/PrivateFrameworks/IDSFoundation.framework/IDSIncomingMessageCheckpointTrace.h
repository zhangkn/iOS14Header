/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange;

@interface IDSIncomingMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	NSString* _service;
	long long _command;
	CUTCheckpointRange* _storeInMessageStore;
	CUTCheckpointRange* _decryption;
	CUTCheckpointRange* _sendToClient;

}

@property (nonatomic,retain) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long command;                                     //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInMessageStore;              //@synthesize storeInMessageStore=_storeInMessageStore - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * decryption;                       //@synthesize decryption=_decryption - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * sendToClient;                     //@synthesize sendToClient=_sendToClient - In the implementation block
-(NSString *)guid;
-(id)_reportMetadata;
-(void)setGuid:(NSString *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(NSString *)service;
-(id)initWithService:(id)arg1 command:(long long)arg2 uniqueIdentifier:(id)arg3 ;
-(CUTCheckpointRange *)decryption;
-(CUTCheckpointRange *)sendToClient;
-(CUTCheckpointRange *)storeInMessageStore;
-(long long)command;
@end

