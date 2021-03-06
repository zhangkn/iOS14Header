/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKit/CarKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSValue, NSString;

@interface CRCarPlayCapabilities : NSObject <NSSecureCoding> {

	BOOL _persisted;
	unsigned long long _disabledFeature;
	long long _nowPlayingAlbumArtMode;
	NSValue* _viewAreaInsets;
	NSValue* _dashboardRoundedCorners;
	long long _userInterfaceStyle;
	NSString* _version;

}

@property (assign,nonatomic) NSString * version;                              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL persisted;                                  //@synthesize persisted=_persisted - In the implementation block
@property (assign,nonatomic) unsigned long long disabledFeature;              //@synthesize disabledFeature=_disabledFeature - In the implementation block
@property (assign,nonatomic) long long nowPlayingAlbumArtMode;                //@synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode - In the implementation block
@property (nonatomic,retain) NSValue * viewAreaInsets;                        //@synthesize viewAreaInsets=_viewAreaInsets - In the implementation block
@property (nonatomic,retain) NSValue * dashboardRoundedCorners;               //@synthesize dashboardRoundedCorners=_dashboardRoundedCorners - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                    //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setCarPlayCapabilitiesCache:(id)arg1 ;
+(id)capabilitiesIdentifier;
+(id)capabilitiesVersion;
+(void)_resetCapabilitiesGlobalDomain;
+(void)invalidateCarPlayCapabilitiesCache;
+(void)setCapabilitiesIdentifier:(id)arg1 ;
+(id)fetchCarCapabilities;
+(id)carPlayCapabilitiesCache;
+(id)newCapabilitiesFromGlobalDomain;
+(void)waitForCarCapabilitiesValues;
+(void)setCapabilitiesVersion:(id)arg1 ;
-(long long)userInterfaceStyle;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setPersisted:(BOOL)arg1 ;
-(BOOL)persisted;
-(long long)nowPlayingAlbumArtMode;
-(void)setDisabledFeature:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setDashboardRoundedCorners:(NSValue *)arg1 ;
-(void)setViewAreaInsets:(NSValue *)arg1 ;
-(NSValue *)viewAreaInsets;
-(void)setVersion:(NSString *)arg1 ;
-(void)persistCapabilitiesToGlobalDomain;
-(id)init;
-(unsigned long long)disabledFeature;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToCapabilities:(id)arg1 ;
-(NSValue *)dashboardRoundedCorners;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNowPlayingAlbumArtMode:(long long)arg1 ;
-(id)informativeText;
-(id)description;
-(id)dictionaryRepresentation;
@end

