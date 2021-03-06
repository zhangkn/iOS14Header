/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying> {

	NSString* _deviceName;
	NSMutableArray* _knownManifestHashes;
	unsigned _protocolVersion;
	BOOL _shouldAdvertise;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                             //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasShouldAdvertise; 
@property (assign,nonatomic) BOOL shouldAdvertise;                              //@synthesize shouldAdvertise=_shouldAdvertise - In the implementation block
@property (nonatomic,retain) NSMutableArray * knownManifestHashes;              //@synthesize knownManifestHashes=_knownManifestHashes - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                          //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(Class)knownManifestHashesType;
-(Class)responseClass;
-(unsigned)protocolVersion;
-(unsigned)requestTypeCode;
-(NSString *)deviceName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDeviceName;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProtocolVersion;
-(unsigned long long)hash;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(id)description;
-(void)addKnownManifestHashes:(id)arg1 ;
-(unsigned long long)knownManifestHashesCount;
-(void)clearKnownManifestHashes;
-(id)knownManifestHashesAtIndex:(unsigned long long)arg1 ;
-(void)setShouldAdvertise:(BOOL)arg1 ;
-(BOOL)hasShouldAdvertise;
-(void)setHasShouldAdvertise:(BOOL)arg1 ;
-(BOOL)shouldAdvertise;
-(NSMutableArray *)knownManifestHashes;
-(void)setKnownManifestHashes:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
@end

