/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSResponseDecoding.h>

@class NSIndexSet, NSSet;

@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding> {

	NSIndexSet* _allowedStatusCodes;
	NSSet* _allowedContentTypes;

}

@property (nonatomic,copy) NSIndexSet * allowedStatusCodes;              //@synthesize allowedStatusCodes=_allowedStatusCodes - In the implementation block
@property (nonatomic,copy) NSSet * allowedContentTypes;                  //@synthesize allowedContentTypes=_allowedContentTypes - In the implementation block
-(NSIndexSet *)allowedStatusCodes;
-(void)setAllowedContentTypes:(NSSet *)arg1 ;
-(id)resultFromResult:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setAllowedStatusCodes:(NSIndexSet *)arg1 ;
-(NSSet *)allowedContentTypes;
@end
