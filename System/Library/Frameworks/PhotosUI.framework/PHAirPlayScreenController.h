/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:46 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUAirPlayScreenReceiver.h>
#import <libobjc.A.dylib/PUAirPlayRouteObserverRegistryDelegate.h>

@class PUAirPlayScreen, PUAirPlayScreenDetector, PUAirPlayRootViewController, PUAirPlayContentRegistry, PUAirPlayRouteObserverRegistry, UIViewController, NSDate, AVOutputContext, NSString;

@interface PHAirPlayScreenController : NSObject <PUAirPlayScreenReceiver, PUAirPlayRouteObserverRegistryDelegate> {

	PUAirPlayScreen* __currentScreen;
	PUAirPlayScreenDetector* __screenDetector;
	PUAirPlayRootViewController* __rootViewController;
	PUAirPlayContentRegistry* __contentRegistry;
	PUAirPlayRouteObserverRegistry* __routeObserverRegistry;
	UIViewController* __lastDisplayedContent;
	NSDate* __lastScreenConnectDate;
	NSDate* __lastScreenRequestDate;
	long long __lastScreenRequestOrigin;
	long long _airPlaySessionSignpost;
	id _secondDisplayModeToken;
	AVOutputContext* _outputContext;

}

@property (setter=_setCurrentScreen:,nonatomic,retain) PUAirPlayScreen * _currentScreen;                                             //@synthesize _currentScreen=__currentScreen - In the implementation block
@property (setter=_setScreenDetector:,nonatomic,retain) PUAirPlayScreenDetector * _screenDetector;                                   //@synthesize _screenDetector=__screenDetector - In the implementation block
@property (setter=_setRootViewController:,nonatomic,retain) PUAirPlayRootViewController * _rootViewController;                       //@synthesize _rootViewController=__rootViewController - In the implementation block
@property (setter=_setContentRegistry:,nonatomic,retain) PUAirPlayContentRegistry * _contentRegistry;                                //@synthesize _contentRegistry=__contentRegistry - In the implementation block
@property (setter=_setRouteObserverRegistry:,nonatomic,retain) PUAirPlayRouteObserverRegistry * _routeObserverRegistry;              //@synthesize _routeObserverRegistry=__routeObserverRegistry - In the implementation block
@property (setter=_setLastDisplayedContent:,nonatomic,retain) UIViewController * _lastDisplayedContent;                              //@synthesize _lastDisplayedContent=__lastDisplayedContent - In the implementation block
@property (setter=_setLastScreenConnectDate:,nonatomic,retain) NSDate * _lastScreenConnectDate;                                      //@synthesize _lastScreenConnectDate=__lastScreenConnectDate - In the implementation block
@property (setter=_setLastScreenRequestDate:,nonatomic,retain) NSDate * _lastScreenRequestDate;                                      //@synthesize _lastScreenRequestDate=__lastScreenRequestDate - In the implementation block
@property (assign,setter=_setLastScreenRequestOrigin:,nonatomic) long long _lastScreenRequestOrigin;                                 //@synthesize _lastScreenRequestOrigin=__lastScreenRequestOrigin - In the implementation block
@property (assign,nonatomic) long long airPlaySessionSignpost;                                                                       //@synthesize airPlaySessionSignpost=_airPlaySessionSignpost - In the implementation block
@property (nonatomic,retain) id secondDisplayModeToken;                                                                              //@synthesize secondDisplayModeToken=_secondDisplayModeToken - In the implementation block
@property (nonatomic,retain) AVOutputContext * outputContext;                                                                        //@synthesize outputContext=_outputContext - In the implementation block
@property (getter=isDisplayingContent,nonatomic,readonly) BOOL displayingContent; 
@property (nonatomic,readonly) unsigned long long screenAvailability; 
@property (nonatomic,readonly) unsigned long long routeAvailability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(CFStringRef)_keyForScreenRequestOrigin:(long long)arg1 ;
-(void)_setCurrentScreen:(id)arg1 ;
-(void)_notifyWillRequestAirPlayScreenFromSource:(long long)arg1 ;
-(PUAirPlayRootViewController *)_rootViewController;
-(void)_updateSecondDisplayModeWithCurrentContent;
-(void)screenDetector:(id)arg1 didDetectScreen:(id)arg2 ;
-(PUAirPlayScreen *)_currentScreen;
-(NSDate *)_lastScreenRequestDate;
-(void)_setRootViewController:(id)arg1 ;
-(void)_recordSessionBeganWithScreen:(id)arg1 ;
-(void)_setLastScreenRequestOrigin:(long long)arg1 ;
-(void)setOutputContext:(AVOutputContext *)arg1 ;
-(void)setSecondDisplayModeToken:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isDisplayingContent;
-(void)_recordSessionEnded;
-(BOOL)pu_hasAvailableRoute;
-(void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)arg1 ;
-(UIViewController *)_lastDisplayedContent;
-(void)_updateScreenContentWithShouldTryToFindAvailableScreen:(BOOL)arg1 ;
-(void)notifyDidPresentAirPlayRoutesFromShareSheet;
-(PUAirPlayScreenDetector *)_screenDetector;
-(id)init;
-(AVOutputContext *)outputContext;
-(void)_setContentRegistry:(id)arg1 ;
-(void)_setRouteObserverRegistry:(id)arg1 ;
-(void)screenDetector:(id)arg1 didLoseScreen:(id)arg2 ;
-(PUAirPlayContentRegistry *)_contentRegistry;
-(NSDate *)_lastScreenConnectDate;
-(void)_sceneWillDeactivate:(id)arg1 ;
-(void)notifyDidPresentAirPlayRoutesFromSlideshow;
-(void)setAirPlaySessionSignpost:(long long)arg1 ;
-(BOOL)_shouldIgnoreScreen:(id)arg1 ;
-(void)registerRouteObserver:(id)arg1 ;
-(long long)_lastScreenRequestOrigin;
-(id)_screenAvailabilityName;
-(void)_switchModeForHighResolutionContent:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_currentContent;
-(void)registerContentProvider:(id)arg1 ;
-(unsigned long long)routeAvailability;
-(void)_setLastScreenConnectDate:(id)arg1 ;
-(void)_sceneDidActivate:(id)arg1 ;
-(void)unregisterRouteObserver:(id)arg1 ;
-(void)_setLastDisplayedContent:(id)arg1 ;
-(unsigned long long)screenAvailability;
-(void)unregisterContentProvider:(id)arg1 ;
-(void)_setScreenDetector:(id)arg1 ;
-(long long)airPlaySessionSignpost;
-(id)_findAvailableScreen;
-(void)_outputDeviceDidChange:(id)arg1 ;
-(void)_handleSettingHighResolutionContent:(BOOL)arg1 forRootController:(id)arg2 content:(id)arg3 ;
-(void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)arg1 forRouteObserver:(id)arg2 ;
-(id)secondDisplayModeToken;
-(void)_setLastScreenRequestDate:(id)arg1 ;
-(PUAirPlayRouteObserverRegistry *)_routeObserverRegistry;
@end

