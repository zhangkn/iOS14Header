/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDismissTimerRequest : AFSiriRequest {

	NSArray* _timerURLs;

}

@property (nonatomic,copy) NSArray * timerURLs;              //@synthesize timerURLs=_timerURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(NSArray *)timerURLs;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimerURLs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
