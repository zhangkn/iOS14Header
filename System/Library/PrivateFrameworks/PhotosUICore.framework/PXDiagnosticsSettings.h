/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXDiagnosticsSettings : PXSettings {

	BOOL _enableContextualGesture;
	BOOL _enableInternalSettingsService;
	BOOL _enableGenericService;
	BOOL _enableGraphService;
	BOOL _enableTitleFontService;
	BOOL _enableCompleteMyMomentService;
	BOOL _enableDebugDictionaryService;
	BOOL _enableScrollService;
	double _scrollSpeed;
	long long _scrollIterations;

}

@property (assign,nonatomic) BOOL enableContextualGesture;                    //@synthesize enableContextualGesture=_enableContextualGesture - In the implementation block
@property (assign,nonatomic) BOOL enableInternalSettingsService;              //@synthesize enableInternalSettingsService=_enableInternalSettingsService - In the implementation block
@property (assign,nonatomic) BOOL enableGenericService;                       //@synthesize enableGenericService=_enableGenericService - In the implementation block
@property (assign,nonatomic) BOOL enableGraphService;                         //@synthesize enableGraphService=_enableGraphService - In the implementation block
@property (assign,nonatomic) BOOL enableTitleFontService;                     //@synthesize enableTitleFontService=_enableTitleFontService - In the implementation block
@property (assign,nonatomic) BOOL enableCompleteMyMomentService;              //@synthesize enableCompleteMyMomentService=_enableCompleteMyMomentService - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDictionaryService;               //@synthesize enableDebugDictionaryService=_enableDebugDictionaryService - In the implementation block
@property (assign,nonatomic) BOOL enableScrollService;                        //@synthesize enableScrollService=_enableScrollService - In the implementation block
@property (assign,nonatomic) double scrollSpeed;                              //@synthesize scrollSpeed=_scrollSpeed - In the implementation block
@property (assign,nonatomic) long long scrollIterations;                      //@synthesize scrollIterations=_scrollIterations - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setEnableCompleteMyMomentService:(BOOL)arg1 ;
-(void)setDefaultValues;
-(void)setScrollSpeed:(double)arg1 ;
-(double)scrollSpeed;
-(BOOL)enableContextualGesture;
-(void)setEnableScrollService:(BOOL)arg1 ;
-(void)setEnableGenericService:(BOOL)arg1 ;
-(void)setEnableGraphService:(BOOL)arg1 ;
-(BOOL)enableInternalSettingsService;
-(BOOL)enableGraphService;
-(void)setEnableTitleFontService:(BOOL)arg1 ;
-(BOOL)enableCompleteMyMomentService;
-(BOOL)enableGenericService;
-(void)setEnableContextualGesture:(BOOL)arg1 ;
-(long long)scrollIterations;
-(BOOL)enableScrollService;
-(void)setScrollIterations:(long long)arg1 ;
-(void)setEnableDebugDictionaryService:(BOOL)arg1 ;
-(BOOL)enableDebugDictionaryService;
-(void)setEnableInternalSettingsService:(BOOL)arg1 ;
-(id)parentSettings;
-(BOOL)enableTitleFontService;
@end

