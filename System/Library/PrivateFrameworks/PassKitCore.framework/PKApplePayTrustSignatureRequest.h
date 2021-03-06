/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustSignatureRequest : NSObject <NSSecureCoding> {

	NSString* _keyIdentifier;
	NSData* _nonce;
	NSData* _manifestHash;

}

@property (nonatomic,copy,readonly) NSString * keyIdentifier;              //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * nonce;                        //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy,readonly) NSData * manifestHash;                 //@synthesize manifestHash=_manifestHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithKeyIdentifier:(id)arg1 manifestHash:(id)arg2 nonce:(id)arg3 ;
-(NSData *)nonce;
-(NSString *)keyIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)manifestHash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

