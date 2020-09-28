/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKCredentials : NSObject {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)credentialsWithUsername:(id)arg1 password:(id)arg2 ;
-(NSString *)username;
-(NSString *)password;
-(id)description;
@end
