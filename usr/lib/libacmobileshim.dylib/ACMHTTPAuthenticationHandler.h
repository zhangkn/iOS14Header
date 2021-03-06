/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMHTTPHandler.h>

@class NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {

	NSString* _policyVersion;
	NSDate* _startInvocationDate;
	NSString* _realm;

}

@property (nonatomic,readonly) NSString * policyVersion; 
@property (nonatomic,readonly) NSString * realm;                      //@synthesize realm=_realm - In the implementation block
-(NSString *)realm;
-(id)requestBody;
-(id)initWithContext:(id)arg1 ;
-(NSString *)policyVersion;
-(BOOL)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2 ;
-(BOOL)shouldValidateTGTs;
@end

