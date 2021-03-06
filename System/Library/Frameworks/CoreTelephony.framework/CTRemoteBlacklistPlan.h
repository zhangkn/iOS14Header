/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CTPlan.h>

@class NSString;

@interface CTRemoteBlacklistPlan : CTPlan {

	NSString* _key;
	NSString* _blacklistIMEI;
	NSString* _blacklistEID;
	NSString* _blacklistICCID;
	NSString* _uploaderIMEI;
	NSString* _uploaderEID;

}

@property (nonatomic,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * blacklistIMEI;               //@synthesize blacklistIMEI=_blacklistIMEI - In the implementation block
@property (nonatomic,readonly) NSString * blacklistEID;                //@synthesize blacklistEID=_blacklistEID - In the implementation block
@property (nonatomic,readonly) NSString * blacklistICCID;              //@synthesize blacklistICCID=_blacklistICCID - In the implementation block
@property (nonatomic,readonly) NSString * uploaderIMEI;                //@synthesize uploaderIMEI=_uploaderIMEI - In the implementation block
@property (nonatomic,readonly) NSString * uploaderEID;                 //@synthesize uploaderEID=_uploaderEID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithkey:(id)arg1 blacklistIMEI:(id)arg2 blacklistEID:(id)arg3 blacklistICCID:(id)arg4 uploaderIMEI:(id)arg5 uploaderEID:(id)arg6 ;
-(NSString *)uploaderEID;
-(NSString *)blacklistEID;
-(NSString *)uploaderIMEI;
-(NSString *)blacklistIMEI;
-(NSString *)blacklistICCID;
-(NSString *)key;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

