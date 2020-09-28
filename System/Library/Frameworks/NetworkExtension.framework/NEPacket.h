/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NEFlowMetaData, NEFilterPacketInterpose;

@interface NEPacket : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _protocolFamily;
	NSData* _data;
	long long _direction;
	NEFlowMetaData* _metadata;
	void* _context;
	NEFilterPacketInterpose* _interpose;

}

@property (assign) void* context;                                    //@synthesize context=_context - In the implementation block
@property (retain) NEFilterPacketInterpose * interpose;              //@synthesize interpose=_interpose - In the implementation block
@property (copy,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (readonly) unsigned char protocolFamily;                   //@synthesize protocolFamily=_protocolFamily - In the implementation block
@property (readonly) long long direction;                            //@synthesize direction=_direction - In the implementation block
@property (readonly) NEFlowMetaData * metadata;                      //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)direction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NEFlowMetaData *)metadata;
-(void)dealloc;
-(void)setContext:(void*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void*)context;
-(void)encodeWithCoder:(id)arg1 ;
-(NEFilterPacketInterpose *)interpose;
-(void)setInterpose:(NEFilterPacketInterpose *)arg1 ;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 metadata:(id)arg3 ;
-(unsigned char)protocolFamily;
-(id)initWithData:(id)arg1 direction:(long long)arg2 context:(void*)arg3 interpose:(id)arg4 ;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 ;
@end
