/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext {

	id _authenticatedCiphertextInternal;

}

@property (readonly) NSData * authenticationCode; 
@property (readonly) NSData * initializationVector; 
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(NSData *)initializationVector;
-(id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)authenticationCode;
@end

