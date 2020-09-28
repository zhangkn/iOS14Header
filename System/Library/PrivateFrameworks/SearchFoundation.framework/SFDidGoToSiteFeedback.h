/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFDidGoToSiteFeedback : SFFeedback {

	NSString* _input;

}

@property (nonatomic,copy) NSString * input;              //@synthesize input=_input - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithInput:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(NSString *)input;
@end
