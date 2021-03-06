/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL, NSData;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse {

	NSURL* _passURL;
	NSData* _credentialAttestation;

}

@property (nonatomic,readonly) NSURL * passURL;                             //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,readonly) NSData * credentialAttestation;              //@synthesize credentialAttestation=_credentialAttestation - In the implementation block
-(NSURL *)passURL;
-(NSData *)credentialAttestation;
-(id)initWithData:(id)arg1 ;
@end

