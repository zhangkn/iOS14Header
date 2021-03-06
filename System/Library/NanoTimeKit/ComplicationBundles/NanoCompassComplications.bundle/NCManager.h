/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class CMAltimeter, NSMutableDictionary, NSMutableSet, CMMotionManager, NSObject, NSNumber, CLLocationManager, NSUserDefaults, NCHeading, NCIncline, NCLocation, NCAltitude, NCBearing, NSString;

@interface NCManager : NSObject <CLLocationManagerDelegate> {

	BOOL _complicationStyle;
	CMAltimeter* _altimeterManager;
	unsigned long long _altimeterToken;
	NSMutableDictionary* _altimeterUpdateHandlers;
	NSMutableSet* _altimeterPausedTokens;
	BOOL _runningAltimeter;
	double _currentAltimeterUpdateInterval;
	CMMotionManager* _motionManager;
	unsigned long long _motionToken;
	NSMutableDictionary* _motionUpdateHandlers;
	NSMutableSet* _motionPausedTokens;
	BOOL _runningMotion;
	NSObject*<OS_dispatch_queue> _motionUpdateQueue;
	NSObject*<OS_dispatch_source> _motionUpdateTimer;
	double _motionUpdateInterval;
	NSNumber* _motionStartingAccuracy;
	NSNumber* _motionEndingAccuracy;
	CLLocationManager* _locationManager;
	unsigned long long _locationToken;
	NSMutableDictionary* _locationUpdateHandlers;
	BOOL _runningLocation;
	BOOL _triedInitialLocation;
	int _locationAuthorizationStatus;
	BOOL _currentCoarseLocationStatus;
	NSMutableSet* _locationServiceUpdateHandlers;
	long long _locationAccuracyState;
	BOOL _externallyPaused;
	NSUserDefaults* _defaults;
	BOOL _calibrated;
	BOOL _usesTrueNorth;
	NCHeading* _heading;
	NCIncline* _incline;
	NCLocation* _location;
	NCAltitude* _altitude;
	NCBearing* _bearing;

}

@property (nonatomic,retain) NCHeading * heading;                   //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) NCIncline * incline;                   //@synthesize incline=_incline - In the implementation block
@property (nonatomic,retain) NCLocation * location;                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NCAltitude * altitude;                 //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,retain) NCBearing * bearing;                   //@synthesize bearing=_bearing - In the implementation block
@property (assign,nonatomic) BOOL usesTrueNorth;                    //@synthesize usesTrueNorth=_usesTrueNorth - In the implementation block
@property (nonatomic,readonly) BOOL calibrated;                     //@synthesize calibrated=_calibrated - In the implementation block
@property (assign,nonatomic) BOOL paused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedComplicationManager;
+(BOOL)showingIdealizedData;
+(id)sharedAppManager;
+(BOOL)_showsElevationAccuracy;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setHeading:(NCHeading *)arg1 ;
-(NCHeading *)heading;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(BOOL)paused;
-(NCLocation *)location;
-(NCBearing *)bearing;
-(void)setLocation:(NCLocation *)arg1 ;
-(NCAltitude *)altitude;
-(void)setAltitude:(NCAltitude *)arg1 ;
-(void)_handlePrefsChanged;
-(id)init:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NCIncline *)incline;
-(void)setBearing:(NCBearing *)arg1 ;
-(void)_startLocationUpdates;
-(void)stopLocationUpdatesForToken:(id)arg1 ;
-(id)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setIncline:(NCIncline *)arg1 ;
-(void)setCalibrated:(BOOL)arg1 ;
-(void)stopMotionUpdatesForToken:(id)arg1 ;
-(BOOL)isAbsoluteAltimeterAvailable;
-(void)stopAltimeterUpdateForToken:(id)arg1 ;
-(BOOL)calibrated;
-(void)_updateTrueNorthFromUserDefaults;
-(void)_queue_motionUpdate;
-(void)_queue_motionError:(id)arg1 ;
-(id)_newAltimeter;
-(id)startAltimeterUpdateWithUpdateRateAndHandler:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateAltimeterRunning:(double)arg1 ;
-(void)_updateAltimeterRunning;
-(id)startMotionUpdatesWithUpdateRate:(long long)arg1 handler:(/*^block*/id)arg2 calibratedHandler:(/*^block*/id)arg3 ;
-(void)_updateMotionRunning;
-(void)_updateLocationRunning;
-(BOOL)_isLocationServiceOff;
-(void)_updateRunning;
-(void)_startAbsoluteAltimterUpdate;
-(BOOL)_shouldChangeAltimeterUpdateRate:(double)arg1 ;
-(void)_queue_altimeterUpdate:(id)arg1 ;
-(void)_queue_altimeterError:(id)arg1 ;
-(void)_queue_altimeterUpdate;
-(unsigned long long)_referenceFrameForDeviceMotion;
-(void)_updateMotionTimerRate;
-(void)_queue_updateMotion:(id)arg1 ;
-(void)_stopLocationUpdates:(BOOL)arg1 ;
-(void)_updateLocationManagerWithCurrentAuthorizationStatus;
-(void)_restartLocationTimeoutTimer;
-(void)_notifyLocationUpdateHandlers;
-(void)_requestBetterLocation;
-(void)_startLocationTimeoutTimer;
-(double)_defaultLocationAccuracy;
-(void)_updateLocation:(id)arg1 error:(id)arg2 ;
-(void)setUsesTrueNorth:(BOOL)arg1 ;
-(id)startAltimeterUpdateWithHandler:(/*^block*/id)arg1 ;
-(id)startMotionUpdatesWithHandler:(/*^block*/id)arg1 calibratedHandler:(/*^block*/id)arg2 ;
-(void)getLocationServiceUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)setPaused:(BOOL)arg1 forAltimeterToken:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 forMotionToken:(id)arg2 ;
-(void)_locationTimeoutTimerFired:(id)arg1 ;
-(void)_takeLocationAssertion;
-(void)_cancelLocationAssertion;
-(void)setValueForBearing:(double)arg1 ;
-(void)clearValueForBearing;
-(BOOL)usesTrueNorth;
@end

