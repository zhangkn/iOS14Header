/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NWPBBrowseDescriptor, NWPBParameters;

@interface NWPBStartBrowse : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NWPBBrowseDescriptor* _descriptor;
	NWPBParameters* _parameters;

}

@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) NWPBBrowseDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NWPBParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                          //@synthesize clientUUID=_clientUUID - In the implementation block
-(void)setDescriptor:(NWPBBrowseDescriptor *)arg1 ;
-(void)setParameters:(NWPBParameters *)arg1 ;
-(NWPBParameters *)parameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)hasParameters;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDescriptor;
-(NWPBBrowseDescriptor *)descriptor;
-(BOOL)hasClientUUID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)clientUUID;
-(id)dictionaryRepresentation;
@end

