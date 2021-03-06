/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile;

@interface ACHRemoteTemplateAvailabilityKeyProvider : NSObject {

	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(BOOL)templateAvailableOnPairedDevice:(id)arg1 error:(id*)arg2 ;
-(id)availabilityStateKeyFromUniqueName:(id)arg1 creatorDevice:(unsigned char)arg2 ;
-(BOOL)markTemplateAvailable:(id)arg1 error:(id*)arg2 ;
@end

