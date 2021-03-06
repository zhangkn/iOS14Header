/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriContext.h>

@class NSNumber, AFRequestInfo, NSDictionary;

@interface SiriContinuityContext : SiriContext {

	NSNumber* _isTemporaryDevice;
	AFRequestInfo* _requestInfo;
	NSDictionary* _userActivity;

}

@property (nonatomic,readonly) AFRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * userActivity;              //@synthesize userActivity=_userActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)userActivity;
-(id)initWithUserActivity:(id)arg1 ;
-(AFRequestInfo *)requestInfo;
-(id)initWithRequestInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)speechRequestOptions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isTemporaryDevice;
-(id)initWithSpeechRequestOptions:(id)arg1 ;
@end

