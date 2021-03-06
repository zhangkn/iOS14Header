/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSArray, ASTIdentity;

@interface ASTProfileResult : ASTSealablePayload {

	NSArray* _properties;
	NSArray* _tests;
	ASTIdentity* _identity;

}

@property (nonatomic,readonly) ASTIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSArray * properties;                  //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSArray * tests;                       //@synthesize tests=_tests - In the implementation block
+(id)resultWithIdentity:(id)arg1 ;
+(id)sealedProfileResultWithPayload:(id)arg1 signature:(id)arg2 ;
-(void)setProperties:(NSArray *)arg1 ;
-(id)initWithIdentity:(id)arg1 ;
-(NSArray *)tests;
-(void)setTests:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)properties;
-(ASTIdentity *)identity;
-(id)generatePayload;
@end

