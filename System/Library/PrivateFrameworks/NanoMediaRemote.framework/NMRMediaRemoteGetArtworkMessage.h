/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteGetArtworkMessage, NSNumber, NSDate, NSString;

@interface NMRMediaRemoteGetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteGetArtworkMessage* _protobuf;

}

@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithOriginIdentifier:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(id)initWithProtobufData:(id)arg1 ;
-(NSDate *)serializationDate;
-(id)protobufData;
-(id)_initWithOriginIdentifier:(id)arg1 ;
@end

