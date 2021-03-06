/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveWidgetTracker.framework/ProactiveWidgetTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ProactiveWidgetTracker/ProactiveWidgetTracker-Structs.h>
@class NSString, PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker, NSObject;

@interface _PWTWidgetEventTracker : NSObject {

	NSString* _identifier;
	PETScalarEventTracker* _resizeTracker;
	PETGoalConversionEventTracker* _conversionTracker;
	PETScalarEventTracker* _updateTracker;
	PETDistributionEventTracker* _screenLingerTracker;
	PETScalarEventTracker* _foregroundingTracker;
	BOOL _hasReceivedActiveDisplayModeChangeNotificationOnce;
	BOOL _isCurrentlyVisible;
	BOOL _willBecomeVisible;
	BOOL _didBecomeVisibleWhileLocked;
	BOOL _widgetIsForeground;
	BOOL _widgetWasEverForeground;
	long long _activeDisplayMode;
	double _lastAppearTime;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(void)widgetWillDisappear;
-(void)widgetDidDisappear;
-(void)userEngagedWithWidget;
-(void)widgetWillAppear;
-(void)widgetDidAppear;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
-(void)widgetDidBecomeForeground:(BOOL)arg1 ;
-(void)widgetPerformedUpdateWithResult:(unsigned long long)arg1 ;
@end

