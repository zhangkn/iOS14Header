/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying> {

	NSData* _report;
	NSString* _virtualDeviceID;

}

@property (nonatomic,readonly) BOOL hasVirtualDeviceID; 
@property (nonatomic,retain) NSString * virtualDeviceID;              //@synthesize virtualDeviceID=_virtualDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasReport; 
@property (nonatomic,retain) NSData * report;                         //@synthesize report=_report - In the implementation block
-(void)setReport:(NSData *)arg1 ;
-(NSData *)report;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasVirtualDeviceID;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVirtualDeviceID:(NSString *)arg1 ;
-(NSString *)virtualDeviceID;
-(BOOL)hasReport;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

