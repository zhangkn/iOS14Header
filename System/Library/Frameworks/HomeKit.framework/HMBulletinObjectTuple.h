/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMBulletinObjectTuple : NSObject {

	NSString* _queryName;
	NSString* _uuidString;

}

@property (nonatomic,readonly) NSString * queryName;               //@synthesize queryName=_queryName - In the implementation block
@property (nonatomic,readonly) NSString * uuidString;              //@synthesize uuidString=_uuidString - In the implementation block
+(id)tupleWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
-(NSString *)queryName;
-(id)initWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
-(NSString *)uuidString;
@end
