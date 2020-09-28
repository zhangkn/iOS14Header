/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier {

	id _rsaKeySpecifierInternal;

}

@property (assign,nonatomic) long long bitSize; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBitSize:(long long)arg1 ;
-(long long)bitSize;
-(id)initWithBitSize:(long long)arg1 ;
@end
