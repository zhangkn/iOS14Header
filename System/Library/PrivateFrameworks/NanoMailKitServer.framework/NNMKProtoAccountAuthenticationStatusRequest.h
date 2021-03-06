/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NNMKProtoAccountAuthenticationStatusRequest : PBRequest <NSCopying> {

	double _requestTime;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) double requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
-(void)setRequestTime:(double)arg1 ;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(double)requestTime;
-(BOOL)hasRequestTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

