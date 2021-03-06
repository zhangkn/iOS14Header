/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol SYSyncEngineResponder <NSObject>
@property (nonatomic,readonly) NSDictionary * extraTransportOptions; 
@required
-(void)sentMessageWithID:(id)arg1 context:(id)arg2;
-(void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
-(void)serializeForIncomingSession:(/*^block*/id)arg1;
-(void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
-(void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3;
-(void)currentDeviceConnectionChanged:(BOOL)arg1;
-(void)currentDeviceProximityChanged:(BOOL)arg1;
-(void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(/*^block*/id)arg3;
-(void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(/*^block*/id)arg3;
-(void)handleOutOfBandData:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;
-(NSDictionary *)extraTransportOptions;
-(void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;

@end

