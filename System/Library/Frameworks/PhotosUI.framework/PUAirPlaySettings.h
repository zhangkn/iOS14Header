/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUAirPlaySettings : PXSettings {

	BOOL _ignoreMirroredScreens;
	BOOL _ignoreScreenRecordingScreens;
	BOOL _compensateForOverscan;
	BOOL _switchToMediaPresentationMode;
	unsigned long long _placeholderForSecondScreen;
	unsigned long long _placeholderForMirroredScreen;
	double _minimumZoomForScrollPadding;
	double _maximumZoomForScrollPadding;
	double _simulatedScreenContentWidth;
	double _simulatedScreenContentHeight;
	long long _routeAvailabilityOverride;

}

@property (assign,nonatomic) BOOL ignoreMirroredScreens;                                   //@synthesize ignoreMirroredScreens=_ignoreMirroredScreens - In the implementation block
@property (assign,nonatomic) BOOL ignoreScreenRecordingScreens;                            //@synthesize ignoreScreenRecordingScreens=_ignoreScreenRecordingScreens - In the implementation block
@property (assign,nonatomic) BOOL compensateForOverscan;                                   //@synthesize compensateForOverscan=_compensateForOverscan - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderForSecondScreen;                //@synthesize placeholderForSecondScreen=_placeholderForSecondScreen - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderForMirroredScreen;              //@synthesize placeholderForMirroredScreen=_placeholderForMirroredScreen - In the implementation block
@property (assign,nonatomic) double minimumZoomForScrollPadding;                           //@synthesize minimumZoomForScrollPadding=_minimumZoomForScrollPadding - In the implementation block
@property (assign,nonatomic) double maximumZoomForScrollPadding;                           //@synthesize maximumZoomForScrollPadding=_maximumZoomForScrollPadding - In the implementation block
@property (assign,nonatomic) BOOL switchToMediaPresentationMode;                           //@synthesize switchToMediaPresentationMode=_switchToMediaPresentationMode - In the implementation block
@property (assign,nonatomic) double simulatedScreenContentWidth;                           //@synthesize simulatedScreenContentWidth=_simulatedScreenContentWidth - In the implementation block
@property (assign,nonatomic) double simulatedScreenContentHeight;                          //@synthesize simulatedScreenContentHeight=_simulatedScreenContentHeight - In the implementation block
@property (assign,nonatomic) long long routeAvailabilityOverride;                          //@synthesize routeAvailabilityOverride=_routeAvailabilityOverride - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)simulatedScreenContentWidth;
-(long long)routeAvailabilityOverride;
-(void)setSimulatedScreenContentHeight:(double)arg1 ;
-(BOOL)ignoreScreenRecordingScreens;
-(BOOL)ignoreMirroredScreens;
-(id)debugDescription;
-(void)setIgnoreMirroredScreens:(BOOL)arg1 ;
-(void)setPlaceholderForMirroredScreen:(unsigned long long)arg1 ;
-(void)setPlaceholderForSecondScreen:(unsigned long long)arg1 ;
-(void)setMinimumZoomForScrollPadding:(double)arg1 ;
-(BOOL)compensateForOverscan;
-(void)setIgnoreScreenRecordingScreens:(BOOL)arg1 ;
-(unsigned long long)placeholderForSecondScreen;
-(void)setRouteAvailabilityOverride:(long long)arg1 ;
-(void)setCompensateForOverscan:(BOOL)arg1 ;
-(unsigned long long)placeholderForMirroredScreen;
-(double)simulatedScreenContentHeight;
-(double)minimumZoomForScrollPadding;
-(void)setSimulatedScreenContentWidth:(double)arg1 ;
-(void)setMaximumZoomForScrollPadding:(double)arg1 ;
-(void)setSwitchToMediaPresentationMode:(BOOL)arg1 ;
-(double)maximumZoomForScrollPadding;
-(BOOL)switchToMediaPresentationMode;
-(id)parentSettings;
@end
