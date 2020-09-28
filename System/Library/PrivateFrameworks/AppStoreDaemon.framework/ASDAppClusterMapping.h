/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDAppClusterMapping : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSNumber* _clusterID;
	NSNumber* _clusterVersion;
	NSNumber* _itemID;
	NSNumber* _launchesWeight;
	NSNumber* _usageWeight;

}

@property (nonatomic,copy) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * clusterID;                   //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSNumber * clusterVersion;              //@synthesize clusterVersion=_clusterVersion - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSNumber * launchesWeight;              //@synthesize launchesWeight=_launchesWeight - In the implementation block
@property (nonatomic,copy) NSNumber * usageWeight;                 //@synthesize usageWeight=_usageWeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSNumber *)itemID;
-(NSNumber *)clusterVersion;
-(void)setClusterVersion:(NSNumber *)arg1 ;
-(void)setLaunchesWeight:(NSNumber *)arg1 ;
-(void)setUsageWeight:(NSNumber *)arg1 ;
-(NSNumber *)launchesWeight;
-(NSNumber *)usageWeight;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setClusterID:(NSNumber *)arg1 ;
-(NSNumber *)clusterID;
-(NSString *)bundleID;
-(id)description;
@end
