/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPCodeFunctionInvokeResponseAttestationResponseAttestation : PBCodable <NSCopying> {

	NSData* _appQuote;
	NSData* _aqeQuote;
	NSString* _pckCertificate;
	NSData* _routingToken;

}

@property (nonatomic,readonly) BOOL hasAppQuote; 
@property (nonatomic,retain) NSData * appQuote;                      //@synthesize appQuote=_appQuote - In the implementation block
@property (nonatomic,readonly) BOOL hasAqeQuote; 
@property (nonatomic,retain) NSData * aqeQuote;                      //@synthesize aqeQuote=_aqeQuote - In the implementation block
@property (nonatomic,readonly) BOOL hasPckCertificate; 
@property (nonatomic,retain) NSString * pckCertificate;              //@synthesize pckCertificate=_pckCertificate - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                  //@synthesize routingToken=_routingToken - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setAppQuote:(NSData *)arg1 ;
-(void)setAqeQuote:(NSData *)arg1 ;
-(void)setPckCertificate:(NSString *)arg1 ;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasAppQuote;
-(BOOL)hasAqeQuote;
-(BOOL)hasPckCertificate;
-(BOOL)hasRoutingToken;
-(NSData *)appQuote;
-(NSData *)aqeQuote;
-(NSString *)pckCertificate;
-(NSData *)routingToken;
@end

