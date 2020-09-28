/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface NACProxyVolumeControlTarget : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _originIdentifier;
	NSString* _category;

}

@property (nonatomic,retain) NSNumber * originIdentifier;                            //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,retain) NSString * category;                                    //@synthesize category=_category - In the implementation block
@property (getter=isPairedDevice,nonatomic,readonly) BOOL pairedDevice; 
+(BOOL)supportsSecureCoding;
+(id)volumeControlTargetWithCategory:(id)arg1 ;
+(id)volumeControlTargetWithOriginIdentifier:(id)arg1 ;
+(BOOL)_isValidOriginIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)originIdentifier;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOriginIdentifier:(NSNumber *)arg1 ;
-(id)description;
-(BOOL)isPairedDevice;
-(id)initWithOriginIdentifier:(id)arg1 category:(id)arg2 ;
@end
