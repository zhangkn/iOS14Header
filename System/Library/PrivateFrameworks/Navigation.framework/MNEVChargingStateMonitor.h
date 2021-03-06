/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VGVirtualGarageObserver.h>

@protocol MNEVChargingStateMonitorDelegate;
@class NSDate, NSTimer, NSMeasurement;

@interface MNEVChargingStateMonitor : NSObject <VGVirtualGarageObserver> {

	id<MNEVChargingStateMonitorDelegate> _delegate;
	BOOL _shouldShowChargingInfo;
	NSDate* _startDate;
	NSTimer* _timer;
	NSMeasurement* _targetBatteryCharge;

}

@property (nonatomic,readonly) NSMeasurement * targetBatteryCharge;                             //@synthesize targetBatteryCharge=_targetBatteryCharge - In the implementation block
@property (assign,nonatomic,__weak) id<MNEVChargingStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)virtualGarageDidUpdate:(id)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)setDelegate:(id<MNEVChargingStateMonitorDelegate>)arg1 ;
-(void)_startTimer;
-(id<MNEVChargingStateMonitorDelegate>)delegate;
-(void)_consumeUpdatedVirtualGarage:(id)arg1 forceDelegateCallback:(BOOL)arg2 ;
-(void)_notifyShouldShowChargingInfo;
-(id)initWithTargetBatteryCharge:(id)arg1 ;
-(NSMeasurement *)targetBatteryCharge;
@end

