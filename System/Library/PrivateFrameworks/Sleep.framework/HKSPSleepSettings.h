/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HKSPObject.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDate, NSString, NSSet;

@interface HKSPSleepSettings : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying> {

	BOOL _watchSleepFeaturesEnabled;
	BOOL _scheduledSleepMode;
	BOOL _sleepTracking;
	BOOL _timeInBedTracking;
	BOOL _bedtimeReminders;
	BOOL _wakeUpResults;
	BOOL _chargingReminders;
	BOOL _springBoardGreetingDisabled;
	unsigned long long _version;
	NSDate* _lastModifiedDate;
	unsigned long long _sleepModeOptions;

}

@property (nonatomic,readonly) BOOL springBoardGreetingDisabled;                 //@synthesize springBoardGreetingDisabled=_springBoardGreetingDisabled - In the implementation block
@property (nonatomic,readonly) BOOL watchSleepFeaturesEnabled;                   //@synthesize watchSleepFeaturesEnabled=_watchSleepFeaturesEnabled - In the implementation block
@property (nonatomic,readonly) BOOL scheduledSleepMode;                          //@synthesize scheduledSleepMode=_scheduledSleepMode - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepModeOptions;              //@synthesize sleepModeOptions=_sleepModeOptions - In the implementation block
@property (nonatomic,readonly) BOOL sleepTracking;                               //@synthesize sleepTracking=_sleepTracking - In the implementation block
@property (nonatomic,readonly) BOOL timeInBedTracking;                           //@synthesize timeInBedTracking=_timeInBedTracking - In the implementation block
@property (nonatomic,readonly) BOOL bedtimeReminders;                            //@synthesize bedtimeReminders=_bedtimeReminders - In the implementation block
@property (nonatomic,readonly) BOOL wakeUpResults;                               //@synthesize wakeUpResults=_wakeUpResults - In the implementation block
@property (nonatomic,readonly) BOOL chargingReminders;                           //@synthesize chargingReminders=_chargingReminders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                   //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSSet * significantChanges; 
+(BOOL)supportsSecureCoding;
+(id)testSleepSettings;
+(id)testSleepSettingsWithAllPropertiesSet;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(BOOL)timeInBedTracking;
-(BOOL)springBoardGreetingDisabled;
-(BOOL)chargingReminders;
-(BOOL)_needsMigrationForCoder:(id)arg1 ;
-(void)_migrateForCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)scheduledSleepMode;
-(unsigned long long)version;
-(void)copyFromObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(BOOL)bedtimeReminders;
-(void)_buildForEquivalenceTo:(id)arg1 builder:(id)arg2 ;
-(BOOL)wakeUpResults;
-(id)initFromObject:(id)arg1 ;
-(NSSet *)significantChanges;
-(BOOL)watchSleepFeaturesEnabled;
-(unsigned long long)sleepModeOptions;
-(BOOL)sleepTracking;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopy;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(NSString *)description;
@end
