/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASSendMailTask.h>

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {

	int _messageType;
	NSString* _originalMessageId;
	NSString* _instanceId;
	NSString* _originalFolderId;
	NSString* _originalLongId;
	BOOL _retryWithoutReferences;
	BOOL _replaceMime;
	BOOL _shouldNotRetry;

}

@property (assign,nonatomic) BOOL shouldNotRetry;              //@synthesize shouldNotRetry=_shouldNotRetry - In the implementation block
-(id)contentType;
-(id)command;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 instanceId:(id)arg5 originalFolderID:(id)arg6 originalLongID:(id)arg7 replaceMime:(BOOL)arg8 ;
-(void)handleTopLevelErrorStatus:(id)arg1 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
-(BOOL)shouldNotRetry;
-(void)setShouldNotRetry:(BOOL)arg1 ;
@end
