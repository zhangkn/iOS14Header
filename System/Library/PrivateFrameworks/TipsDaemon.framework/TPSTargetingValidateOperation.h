/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAsyncOperation.h>

@class TPSTargetingValidation, NSString;

@interface TPSTargetingValidateOperation : TPSAsyncOperation {

	TPSTargetingValidation* _validator;
	NSString* _context;
	long long _result;

}

@property (assign,nonatomic) long long result;                                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) TPSTargetingValidation * validator;              //@synthesize validator=_validator - In the implementation block
@property (nonatomic,copy) NSString * context;                                  //@synthesize context=_context - In the implementation block
-(void)cancel;
-(long long)result;
-(void)setContext:(NSString *)arg1 ;
-(void)setResult:(long long)arg1 ;
-(NSString *)context;
-(TPSTargetingValidation *)validator;
-(void)main;
-(id)description;
-(id)initWithTargetingCondition:(id)arg1 ;
@end
