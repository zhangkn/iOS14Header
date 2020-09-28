/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTBBBulletinKey : NSObject <NSCopying> {

	NSString* _sectionID;
	NSString* _publisherMatchID;

}

@property (nonatomic,copy,readonly) NSString * sectionID;                     //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherMatchID;              //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
+(id)bulletinKeyWithSectionID:(id)arg1 publisherMatchID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyString;
-(NSString *)sectionID;
-(NSString *)publisherMatchID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2 ;
@end
