/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountAttestationRequest.h>

@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest {

	NSData* _subCASEResidencyAttestation;
	NSData* _sharingTokenHash;

}

@property (nonatomic,copy) NSData * subCASEResidencyAttestation;              //@synthesize subCASEResidencyAttestation=_subCASEResidencyAttestation - In the implementation block
@property (nonatomic,copy) NSData * sharingTokenHash;                         //@synthesize sharingTokenHash=_sharingTokenHash - In the implementation block
-(id)initWithRequestData:(id)arg1 ;
-(NSData *)subCASEResidencyAttestation;
-(NSData *)sharingTokenHash;
-(void)setSubCASEResidencyAttestation:(NSData *)arg1 ;
-(void)setSharingTokenHash:(NSData *)arg1 ;
@end
