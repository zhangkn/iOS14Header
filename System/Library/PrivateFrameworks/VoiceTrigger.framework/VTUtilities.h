/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isAlwaysOn;
+(BOOL)VTIsHorseman;
+(BOOL)supportTTS;
+(double)systemUpTime;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
+(void)forceReload;
+(BOOL)supportPremiumAssets;
+(double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1 ;
+(BOOL)isNano;
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(BOOL)isTorpedo;
+(BOOL)isIOS;
+(id)deviceProductVersion;
+(id)getAssetHashFromConfigPath:(id)arg1 ;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(id)deviceProductType;
+(BOOL)supportBargeIn;
+(BOOL)supportExternalPhraseSpotter;
+(id)deviceSoftwareVersion;
@end

