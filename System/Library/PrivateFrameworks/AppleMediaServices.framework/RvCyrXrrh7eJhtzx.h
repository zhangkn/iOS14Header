/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface RvCyrXrrh7eJhtzx : NSObject {

	NSData* _hostChallenge;
	NSData* _challengeResponse;
	NSString* _seid;
	NSData* _nonce;

}

@property (nonatomic,copy) NSData * hostChallenge;                  //@synthesize hostChallenge=_hostChallenge - In the implementation block
@property (nonatomic,copy) NSData * challengeResponse;              //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy) NSString * seid;                         //@synthesize seid=_seid - In the implementation block
@property (nonatomic,copy) NSData * nonce;                          //@synthesize nonce=_nonce - In the implementation block
-(NSString *)seid;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(NSData *)hostChallenge;
-(void)setHostChallenge:(NSData *)arg1 ;
-(NSData *)challengeResponse;
-(void)setChallengeResponse:(NSData *)arg1 ;
@end

