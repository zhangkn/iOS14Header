/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSSilentEnrollmentContext, NSString;

@interface SSSilentEnrollment : SSRequest <SSXPCCoding> {

	SSSilentEnrollmentContext* _context;

}

@property (retain) SSSilentEnrollmentContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setContext:(SSSilentEnrollmentContext *)arg1 ;
-(SSSilentEnrollmentContext *)context;
-(id)initWithSilentEnrollmentContext:(id)arg1 ;
@end
