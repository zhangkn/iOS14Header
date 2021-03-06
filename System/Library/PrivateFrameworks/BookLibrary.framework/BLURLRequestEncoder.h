/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>
#import <libobjc.A.dylib/AMSRequestEncoding.h>

@class NSNumber, NSString;

@interface BLURLRequestEncoder : AMSURLRequestEncoder <AMSRequestEncoding> {

	NSNumber* _dsid;
	long long _reason;
	unsigned long long _contentType;

}

@property (nonatomic,retain) NSNumber * dsid;                             //@synthesize dsid=_dsid - In the implementation block
@property (assign,nonatomic) long long reason;                            //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)DAAPClientVersionString;
+(id)DAAPPurchaseVersionString;
-(NSNumber *)dsid;
-(unsigned long long)contentType;
-(void)setDsid:(NSNumber *)arg1 ;
-(void)setReason:(long long)arg1 ;
-(id)initWithBag:(id)arg1 withURLRequest:(id)arg2 ;
-(void)setContentType:(unsigned long long)arg1 ;
-(long long)reason;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
@end

