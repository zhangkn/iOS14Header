/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMOdometerSuitabilityManager;

@interface CMOdometerSuitabilityManagerProxy : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fCallbackQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	CMOdometerSuitabilityManager* _odometerSuitabilityManager;
	double _startDate;
	double _suitableForRunning;
	double _suitableForWalking;

}

@property (assign,nonatomic) CMOdometerSuitabilityManager * odometerSuitabilityManager;              //@synthesize odometerSuitabilityManager=_odometerSuitabilityManager - In the implementation block
@property (assign) double startDate;                                                                 //@synthesize startDate=_startDate - In the implementation block
@property (assign) double suitableForRunning;                                                        //@synthesize suitableForRunning=_suitableForRunning - In the implementation block
@property (assign) double suitableForWalking;                                                        //@synthesize suitableForWalking=_suitableForWalking - In the implementation block
-(double)suitableForRunning;
-(double)suitableForWalking;
-(void)_startDaemonConnection;
-(void)dealloc;
-(id)initWithOdometerSuitability:(id)arg1 ;
-(CMOdometerSuitabilityManager *)odometerSuitabilityManager;
-(void)_stopOdometerSuitabilityUpdates;
-(void)_startOdometerSuitabilityUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setOdometerSuitabilityManager:(CMOdometerSuitabilityManager *)arg1 ;
-(void)setSuitableForRunning:(double)arg1 ;
-(void)setSuitableForWalking:(double)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(void)_teardown;
-(double)startDate;
@end

