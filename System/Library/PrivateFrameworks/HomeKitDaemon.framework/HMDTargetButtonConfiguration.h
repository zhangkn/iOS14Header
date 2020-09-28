/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject {

	unsigned char _identifier;
	long long _type;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned char identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
-(unsigned char)identifier;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)shortDescription;
-(id)init;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(id)buttonName;
@end
