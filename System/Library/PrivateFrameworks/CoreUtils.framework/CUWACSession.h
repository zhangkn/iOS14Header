/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSDictionary, EasyConfigDevice, NSObject, NSString, CUWiFiDevice;

@interface CUWACSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	LogCategory* _ucat;
	int _saveOriginalWiFiState;
	NSDictionary* _originalWiFiInfo;
	int _joinSoftAPState;
	double _joinSoftAPStartTime;
	EasyConfigDevice* _easyConfigDevice;
	int _easyConfigPreConfigState;
	SCD_Struct_CU38 _easyConfigPreConfigMetrics;
	int _restoreOriginalWiFiState;
	double _restoreStartTime;
	int _easyConfigPostConfigState;
	SCD_Struct_CU39 _easyConfigPostConfigMetrics;
	int _finishState;
	NSDictionary* _configuration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForSetupCodeHandler;
	CUWiFiDevice* _wacDevice;

}

@property (nonatomic,copy) NSDictionary * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForSetupCodeHandler;                              //@synthesize promptForSetupCodeHandler=_promptForSetupCodeHandler - In the implementation block
@property (nonatomic,retain) CUWiFiDevice * wacDevice;                                //@synthesize wacDevice=_wacDevice - In the implementation block
-(void)_run;
-(void)_cleanup;
-(void)invalidate;
-(void)setProgressHandler:(id)arg1 ;
-(void)_progress:(unsigned)arg1 info:(id)arg2 ;
-(CUWiFiDevice *)wacDevice;
-(void)trySetupCode:(id)arg1 ;
-(int)_runSaveOriginalWiFi;
-(int)_runJoinSoftAP;
-(void)_runJoinSoftAPStart;
-(void)_runJoinSoftAPFinished:(int)arg1 ;
-(void)_runFinishRestored:(int)arg1 ;
-(int)_runEasyConfigPreConfig;
-(void)_runEasyConfigPreConfigStart;
-(void)_runEasyConfigProgress:(int)arg1 info:(id)arg2 ;
-(int)_runRestoreOriginalWiFi;
-(void)_runRestoreOriginalWiFiStart;
-(void)_runRestoreOriginalWiFiFinished:(int)arg1 ;
-(int)_runEasyConfigPostConfig;
-(id)promptForSetupCodeHandler;
-(void)setPromptForSetupCodeHandler:(id)arg1 ;
-(void)setWacDevice:(CUWiFiDevice *)arg1 ;
-(void)dealloc;
-(id)progressHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_runFinish;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSDictionary *)configuration;
-(void)activate;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

