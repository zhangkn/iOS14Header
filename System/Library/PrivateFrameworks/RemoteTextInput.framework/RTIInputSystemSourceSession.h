/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteTextInput/RTIInputSystemSession.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol RTIInputSystemPayloadDelegate;
@class RTIDataPayload, NSString;

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate> {

	id<RTIInputSystemPayloadDelegate> _forwardingPayloadDelegate;
	id<RTIInputSystemPayloadDelegate> _payloadDelegate;

}

@property (assign,nonatomic,__weak) id<RTIInputSystemPayloadDelegate> payloadDelegate;                        //@synthesize payloadDelegate=_payloadDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<RTIInputSystemPayloadDelegate> forwardingPayloadDelegate;              //@synthesize forwardingPayloadDelegate=_forwardingPayloadDelegate - In the implementation block
@property (nonatomic,copy,readonly) RTIDataPayload * currentForwardingDataPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSessionDelegate:(id)arg1 ;
-(RTIDataPayload *)currentForwardingDataPayload;
-(void)handleForwardingResponseActionPayload:(id)arg1 ;
-(void)addSessionDelegate:(id)arg1 ;
-(void)setPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
-(void)handleTextActionPayload:(id)arg1 ;
-(id<RTIInputSystemPayloadDelegate>)forwardingPayloadDelegate;
-(void)flushOperations;
-(id<RTIInputSystemPayloadDelegate>)payloadDelegate;
-(void)setForwardingPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
@end
