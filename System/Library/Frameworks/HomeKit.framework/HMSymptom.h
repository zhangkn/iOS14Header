/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMSymptom : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _localizedTitle;

}

@property (readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archive:(id)arg1 ;
+(id)unarchive:(id)arg1 ;
+(id)symptomWithType:(long long)arg1 ;
+(id)unarchiveSymptomDict:(id)arg1 ;
+(id)archiveSymptomDict:(id)arg1 ;
-(NSString *)localizedTitle;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithType:(long long)arg1 ;
-(id)description;
@end
