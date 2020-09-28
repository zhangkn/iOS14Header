/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCCKPRecordIdentifier, FCCKPRequestedFields;

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying> {

	NSString* _clientVersionETag;
	FCCKPRecordIdentifier* _recordIdentifier;
	FCCKPRequestedFields* _requestedFields;
	NSString* _versionETag;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) FCCKPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) FCCKPRequestedFields * requestedFields;                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionETag; 
@property (nonatomic,retain) NSString * versionETag;                                //@synthesize versionETag=_versionETag - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersionETag; 
@property (nonatomic,retain) NSString * clientVersionETag;                          //@synthesize clientVersionETag=_clientVersionETag - In the implementation block
+(id)options;
-(Class)responseClass;
-(BOOL)hasRequestedFields;
-(unsigned)requestTypeCode;
-(void)setRequestedFields:(FCCKPRequestedFields *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientVersionETag:(NSString *)arg1 ;
-(void)setRecordIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasVersionETag;
-(BOOL)hasRecordIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasClientVersionETag;
-(FCCKPRecordIdentifier *)recordIdentifier;
-(FCCKPRequestedFields *)requestedFields;
-(void)setVersionETag:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)clientVersionETag;
-(NSString *)versionETag;
-(id)description;
-(id)dictionaryRepresentation;
@end
