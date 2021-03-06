/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {

	NSUserDefaults* _sharedDefaults;

}
+(id)sharedInstance;
-(id)init;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)_boolForKey:(id)arg1 ;
-(BOOL)greenTeaMusicIsMirroringStreamingSettings;
-(void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForStreaming;
-(void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
-(void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)arg1 ;
@end

