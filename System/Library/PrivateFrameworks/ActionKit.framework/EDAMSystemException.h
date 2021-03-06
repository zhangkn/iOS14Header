/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMSystemException : FATException {

	NSNumber* _errorCode;
	NSString* _message;
	NSNumber* _rateLimitDuration;

}

@property (nonatomic,retain) NSNumber * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSNumber * rateLimitDuration;              //@synthesize rateLimitDuration=_rateLimitDuration - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSNumber *)errorCode;
-(NSNumber *)rateLimitDuration;
-(void)setRateLimitDuration:(NSNumber *)arg1 ;
@end

