/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudServices/CloudServices-Structs.h>
@class NSString, NSDate, NSData, NSDictionary;

@interface SESWrapper : NSObject {

	BOOL _useCKVR;
	BOOL _recoveryPassphraseMutable;
	int _reqVersion;
	NSString* _decodedLabel;
	NSDate* _escrowDate;
	NSData* _recoveryBlob;
	ccses_crypto_t* _ccses;
	ccsrp_ctx* _srp;
	ckvr_srp_context* _ckvr;
	NSString* _dsid;
	NSString* _recoveryPassphrase;
	NSString* _label;
	NSString* _recordID;
	NSDictionary* _escrowRecord;
	NSData* _escrowBlob;

}

@property (nonatomic,readonly) ccses_crypto_t* ccses;                         //@synthesize ccses=_ccses - In the implementation block
@property (nonatomic,readonly) ccsrp_ctx* srp;                                //@synthesize srp=_srp - In the implementation block
@property (nonatomic,readonly) BOOL useCKVR;                                  //@synthesize useCKVR=_useCKVR - In the implementation block
@property (assign,nonatomic) int reqVersion;                                  //@synthesize reqVersion=_reqVersion - In the implementation block
@property (nonatomic,readonly) ckvr_srp_context* ckvr;                        //@synthesize ckvr=_ckvr - In the implementation block
@property (nonatomic,copy) NSString * dsid;                                   //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * recoveryPassphrase;                     //@synthesize recoveryPassphrase=_recoveryPassphrase - In the implementation block
@property (assign,nonatomic) BOOL recoveryPassphraseMutable;                  //@synthesize recoveryPassphraseMutable=_recoveryPassphraseMutable - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordID;                      //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * escrowRecord;              //@synthesize escrowRecord=_escrowRecord - In the implementation block
@property (nonatomic,copy) NSString * decodedLabel;                           //@synthesize decodedLabel=_decodedLabel - In the implementation block
@property (nonatomic,copy) NSDate * escrowDate;                               //@synthesize escrowDate=_escrowDate - In the implementation block
@property (nonatomic,retain) NSData * escrowBlob;                             //@synthesize escrowBlob=_escrowBlob - In the implementation block
@property (retain) NSData * recoveryBlob;                                     //@synthesize recoveryBlob=_recoveryBlob - In the implementation block
-(NSString *)dsid;
-(ccsrp_ctx*)srp;
-(ckvr_srp_context*)ckvr;
-(ccses_crypto_t*)ccses;
-(void)setDsid:(NSString *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(NSString *)recordID;
-(void)dealloc;
-(BOOL)useCKVR;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(id)srpInitBlob;
-(void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2 ;
-(id)srpRecoveryBlobFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithRequest:(id)arg1 reqVersion:(int)arg2 ;
-(id)initWithRequest:(id)arg1 ckvrFlag:(BOOL)arg2 reqVersion:(int)arg3 ;
-(void)setReqVersion:(int)arg1 ;
-(id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5 ckvrFlag:(BOOL)arg6 reqVersion:(int)arg7 ;
-(int)reqVersion;
-(void)setRecoveryBlob:(NSData *)arg1 ;
-(id)srpResponseForEscrowBlob:(id)arg1 withKey:(_SecKey*)arg2 withFullCCKey:(ccrsa_full_ctx*)arg3 ;
-(id)recoveryResponseForBlob:(id)arg1 ;
-(unsigned long long)srpKeySize;
-(id)decodedEscrowRecordFromData:(id)arg1 stingray:(BOOL)arg2 enroll:(BOOL)arg3 env:(id)arg4 duplicate:(BOOL)arg5 ;
-(void)setEscrowDate:(NSDate *)arg1 ;
-(void)setDecodedLabel:(NSString *)arg1 ;
-(NSData *)recoveryBlob;
-(void)setEscrowBlob:(NSData *)arg1 ;
-(unsigned long long)srpPublicKeySize;
-(NSData *)escrowBlob;
-(id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5 ;
-(id)encodedEscrowRecordWithPublicKey:(_SecKey*)arg1 error:(id*)arg2 ;
-(NSString *)decodedLabel;
-(NSDate *)escrowDate;
-(void)setRecoveryPassphrase:(NSString *)arg1 ;
-(BOOL)recoveryPassphraseMutable;
-(void)setRecoveryPassphraseMutable:(BOOL)arg1 ;
-(NSString *)label;
@end
