/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NPSDomainAccessor;

@interface ADASPreferenceStore : NSObject {

	NSDictionary* _keyMap;
	NSDictionary* _defaultValues;
	NSDictionary* _specialDarwinKeys;
	NPSDomainAccessor* _coreAudioDomain;
	NPSDomainAccessor* _coreAudioDeviceDomain;

}

@property (nonatomic,readonly) NSDictionary * keyMap;                                //@synthesize keyMap=_keyMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultValues;                         //@synthesize defaultValues=_defaultValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * specialDarwinKeys;                     //@synthesize specialDarwinKeys=_specialDarwinKeys - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * coreAudioDomain;                    //@synthesize coreAudioDomain=_coreAudioDomain - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * coreAudioDeviceDomain;              //@synthesize coreAudioDeviceDomain=_coreAudioDeviceDomain - In the implementation block
+(id)sharedInstance;
-(NPSDomainAccessor *)coreAudioDeviceDomain;
-(void)setCoreAudioDomain:(NPSDomainAccessor *)arg1 ;
-(id)init;
-(NSDictionary *)keyMap;
-(NPSDomainAccessor *)coreAudioDomain;
-(NSDictionary *)defaultValues;
-(NSDictionary *)specialDarwinKeys;
-(void)setCoreAudioDeviceDomain:(NPSDomainAccessor *)arg1 ;
@end

