/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFSigningOperation.h>

@protocol SFDigestOperation;
@class _SFECKeySpecifier, NSString;

@interface _SFEC_X962SigningOperation : NSObject <SFSigningOperation> {

	id _x962SigningOperationInternal;
	id<SFDigestOperation> _digestOperation;

}

@property (nonatomic,copy) _SFECKeySpecifier * signingKeySpecifier; 
@property (copy) id<SFDigestOperation> digestOperation;                          //@synthesize digestOperation=_digestOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 ;
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFECKeySpecifier *)signingKeySpecifier;
-(void)setSigningKeySpecifier:(_SFECKeySpecifier *)arg1 ;
@end
