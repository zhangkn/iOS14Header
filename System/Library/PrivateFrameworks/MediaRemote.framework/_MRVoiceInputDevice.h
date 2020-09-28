/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {

	_MRVoiceInputDeviceDescriptorProtobuf* _descriptor;
	unsigned _deviceID;
	int _recordingState;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasDeviceID; 
@property (assign,nonatomic) unsigned deviceID;                                               //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) _MRVoiceInputDeviceDescriptorProtobuf * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) BOOL hasRecordingState; 
@property (assign,nonatomic) int recordingState;                                              //@synthesize recordingState=_recordingState - In the implementation block
-(void)setDescriptor:(_MRVoiceInputDeviceDescriptorProtobuf *)arg1 ;
-(void)setDeviceID:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDescriptor;
-(_MRVoiceInputDeviceDescriptorProtobuf *)descriptor;
-(BOOL)hasDeviceID;
-(void)setHasDeviceID:(BOOL)arg1 ;
-(void)setHasRecordingState:(BOOL)arg1 ;
-(BOOL)hasRecordingState;
-(id)recordingStateAsString:(int)arg1 ;
-(int)StringAsRecordingState:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)deviceID;
-(int)recordingState;
-(void)setRecordingState:(int)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
