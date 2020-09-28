/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _canonicalName;
	NSString* _uniqueClientId;

}

@property (nonatomic,copy) NSString * canonicalName;               //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,copy) NSString * uniqueClientId;              //@synthesize uniqueClientId=_uniqueClientId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clientInfoForNavdPredictions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isNavdClientInfo;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)uniqueClientId;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)canonicalName;
-(void)setUniqueClientId:(NSString *)arg1 ;
-(id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)isCalendarClientInfo;
-(id)description;
@end
