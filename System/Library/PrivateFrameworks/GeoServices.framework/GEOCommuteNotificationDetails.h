/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface GEOCommuteNotificationDetails : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	NSString* _message;
	NSString* _commuteDetailsIdentifier;
	NSDate* _expirationDate;
	long long _score;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * commuteDetailsIdentifier;              //@synthesize commuteDetailsIdentifier=_commuteDetailsIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) long long score;                                       //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 commuteDetailsIdentifier:(id)arg3 expirationDate:(id)arg4 score:(long long)arg5 ;
-(NSString *)commuteDetailsIdentifier;
-(long long)score;
-(NSDate *)expirationDate;
-(NSString *)title;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)message;
-(id)description;
@end

