/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBPeer, NSInputStream, NSOutputStream, CBUUID;

@interface CBL2CAPChannel : NSObject {

	unsigned short _PSM;
	int _socketFD;
	CBPeer* _peer;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	CBUUID* _serviceUUID;

}

@property (nonatomic,retain) CBUUID * serviceUUID;                         //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,readonly) int socketFD;                               //@synthesize socketFD=_socketFD - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) unsigned short PSM;                         //@synthesize PSM=_PSM - In the implementation block
-(unsigned short)PSM;
-(void)dealloc;
-(void)setServiceUUID:(CBUUID *)arg1 ;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
-(NSOutputStream *)outputStream;
-(int)socketFD;
-(NSInputStream *)inputStream;
-(CBUUID *)serviceUUID;
-(CBPeer *)peer;
-(id)description;
@end

