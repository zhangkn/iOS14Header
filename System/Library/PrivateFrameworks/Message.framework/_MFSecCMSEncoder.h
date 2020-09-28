/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <MIME/MFBufferedDataConsumer.h>

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {

	int _SecCMSError;
	SecCmsEncoderStrRef _encoder;
	SecCmsMessageStrRef _message;
	NSMutableData* _singleShot;

}

@property (setter=ecCMSError,nonatomic,readonly) int lastSecCMSError;              //@synthesize SecCMSError=_SecCMSError - In the implementation block
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)dealloc;
-(void)done;
-(int)lastSecCMSError;
-(id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3 ;
-(id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2 ;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end
