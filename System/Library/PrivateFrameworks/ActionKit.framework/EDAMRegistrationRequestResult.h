/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMRegistrationRequestResult : FATObject {

	NSString* _refreshToken;
	NSString* _userEmail;
	NSNumber* _result;
	NSString* _name;

}

@property (nonatomic,retain) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,retain) NSString * userEmail;                 //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,retain) NSNumber * result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)result;
-(NSString *)refreshToken;
-(void)setUserEmail:(NSString *)arg1 ;
-(void)setResult:(NSNumber *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)userEmail;
-(NSString *)name;
-(void)setRefreshToken:(NSString *)arg1 ;
@end

