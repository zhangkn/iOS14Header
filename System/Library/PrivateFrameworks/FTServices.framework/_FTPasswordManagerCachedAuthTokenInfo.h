/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber;

@interface _FTPasswordManagerCachedAuthTokenInfo : NSObject {

	NSString* _profileID;
	NSString* _selfID;
	NSString* _token;
	NSDictionary* _alertInfo;
	NSNumber* _status;

}

@property (nonatomic,retain) NSString * profileID;                  //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,retain) NSString * selfID;                     //@synthesize selfID=_selfID - In the implementation block
@property (nonatomic,retain) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSDictionary * alertInfo;              //@synthesize alertInfo=_alertInfo - In the implementation block
@property (nonatomic,retain) NSNumber * status;                     //@synthesize status=_status - In the implementation block
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)selfID;
-(void)setToken:(NSString *)arg1 ;
-(NSNumber *)status;
-(NSString *)token;
-(NSString *)profileID;
-(void)setProfileID:(NSString *)arg1 ;
-(void)setSelfID:(NSString *)arg1 ;
-(NSDictionary *)alertInfo;
-(void)setAlertInfo:(NSDictionary *)arg1 ;
@end

