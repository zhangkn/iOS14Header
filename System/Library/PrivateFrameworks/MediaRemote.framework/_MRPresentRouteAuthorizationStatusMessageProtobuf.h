/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRPresentRouteAuthorizationStatusMessageProtobuf : PBCodable <NSCopying> {

	_MRAVOutputDeviceDescriptorProtobuf* _route;
	int _status;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasRoute; 
@property (nonatomic,retain) _MRAVOutputDeviceDescriptorProtobuf * route;              //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                               //@synthesize status=_status - In the implementation block
-(BOOL)hasRoute;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)status;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasStatus;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRoute:(_MRAVOutputDeviceDescriptorProtobuf *)arg1 ;
-(_MRAVOutputDeviceDescriptorProtobuf *)route;
-(unsigned long long)hash;
-(void)setHasStatus:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
