/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface _MLNetworkPacket : NSObject {

	NSMutableData* _buffer;
	NSMutableData* _doubleBuffer;
	unsigned long long _sizeOfPacket;
	unsigned long long _command;

}

@property (nonatomic,retain) NSMutableData * buffer;                       //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) NSMutableData * doubleBuffer;                 //@synthesize doubleBuffer=_doubleBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long sizeOfPacket;              //@synthesize sizeOfPacket=_sizeOfPacket - In the implementation block
@property (assign,nonatomic) unsigned long long command;                   //@synthesize command=_command - In the implementation block
-(NSMutableData *)buffer;
-(void)setBuffer:(NSMutableData *)arg1 ;
-(void)reset;
-(id)init;
-(unsigned long long)command;
-(void)setCommand:(unsigned long long)arg1 ;
-(void)resetMetadata;
-(unsigned long long)sizeOfPacket;
-(void)setSizeOfPacket:(unsigned long long)arg1 ;
-(void)cleanupDoubleBuffer;
-(void)setDoubleBuffer:(NSMutableData *)arg1 ;
-(void)resetDoubleBuffer;
-(NSMutableData *)doubleBuffer;
@end

