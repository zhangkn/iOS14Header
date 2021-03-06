/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SigningPublicKey, NGMPublicPreKey;

@interface NGMPublicDeviceIdentity : NSObject {

	SigningPublicKey* _signingKey;
	NGMPublicPreKey* _prekey;

}

@property (nonatomic,retain) SigningPublicKey * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) NGMPublicPreKey * prekey;                   //@synthesize prekey=_prekey - In the implementation block
+(id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3 ;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3 ;
-(id)identityData;
-(BOOL)verifySignature:(id)arg1 formatter:(id)arg2 ;
-(NGMPublicPreKey *)prekey;
-(void)setSigningKey:(SigningPublicKey *)arg1 ;
-(id)prekeyData;
-(SigningPublicKey *)signingKey;
-(id)description;
-(id)initWithPrekey:(id)arg1 signingKey:(id)arg2 ;
-(void)setPrekey:(NGMPublicPreKey *)arg1 ;
-(id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id*)arg4 ;
-(BOOL)isValidSigningDestination;
@end

