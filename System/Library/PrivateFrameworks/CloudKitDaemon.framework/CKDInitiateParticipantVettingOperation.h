/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareMetadata, NSData, NSString;

@interface CKDInitiateParticipantVettingOperation : CKDOperation {

	/*^block*/id _participantVettingProgressBlock;
	CKShareMetadata* _shareMetadata;
	NSData* _encryptedKey;
	NSString* _participantID;
	NSString* _address;

}

@property (nonatomic,retain) CKShareMetadata * shareMetadata;                                                              //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                                                                        //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,retain) NSString * participantID;                                                                     //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) NSString * address;                                                                           //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) id<CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id participantVettingProgressBlock;                                                             //@synthesize participantVettingProgressBlock=_participantVettingProgressBlock - In the implementation block
-(int)operationType;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(NSString *)address;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(id)activityCreate;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_sendRequest:(BOOL)arg1 ;
-(void)main;
-(void)setParticipantVettingProgressBlock:(id)arg1 ;
-(id)participantVettingProgressBlock;
-(id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3 ;
-(id)_encryptedKeyDataWithShareMetadata:(id)arg1 error:(id*)arg2 ;
-(void)_handleVettingInitiationProgress:(id)arg1 ;
@end
