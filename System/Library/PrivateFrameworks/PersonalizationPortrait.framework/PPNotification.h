/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PPNotification : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleId;
	NSString* _title;
	NSString* _subtitle;
	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subtitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSString *)title;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleId;
-(id)initWithCurrentDateAndBundleId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 ;
-(id)initWithBundleId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 date:(id)arg5 ;
-(BOOL)isEqualToNotification:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)message;
-(id)description;
@end

