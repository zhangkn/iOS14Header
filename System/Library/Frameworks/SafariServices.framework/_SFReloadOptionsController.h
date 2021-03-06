/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFRequestDesktopSitePerSitePreferenceObserver.h>

@class _SFRequestDesktopSitePreferenceManager, NSDictionary, NSNumber, NSMutableDictionary, NSMutableSet, WKWebView, _SFInjectedJavaScriptController, NSString;

@interface _SFReloadOptionsController : NSObject <_SFRequestDesktopSitePerSitePreferenceObserver> {

	_SFRequestDesktopSitePreferenceManager* _perSitePreferenceManager;
	NSDictionary* _perSitePreferenceValues;
	NSNumber* _requestDesktopSiteDefaultValue;
	NSMutableDictionary* _domainToUserAgentPolicyMap;
	NSMutableSet* _domainsOverridenAsMobile;
	WKWebView* _webView;
	BOOL _tryUsingMobileIfPossible;
	_SFInjectedJavaScriptController* _activityJSController;
	long long _effectiveContentMode;

}

@property (nonatomic,readonly) _SFInjectedJavaScriptController * activityJSController;              //@synthesize activityJSController=_activityJSController - In the implementation block
@property (nonatomic,readonly) BOOL loadedUsingDesktopUserAgent; 
@property (assign,nonatomic) BOOL tryUsingMobileIfPossible;                                         //@synthesize tryUsingMobileIfPossible=_tryUsingMobileIfPossible - In the implementation block
@property (assign,nonatomic) long long effectiveContentMode;                                        //@synthesize effectiveContentMode=_effectiveContentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(long long)effectiveContentMode;
-(void)didUpdateRequestDesktopSiteDefaultValue:(long long)arg1 ;
-(void)logCompletedPageloadToDifferentialPrivacy:(id)arg1 ;
-(void)requestStandardSite;
-(void)didMarkURLAsNeedingStandardUserAgent:(id)arg1 ;
-(void)requestDesktopSite;
-(void)requestDesktopSiteWithURL:(id)arg1 ;
-(_SFInjectedJavaScriptController *)activityJSController;
-(void)_overrideSettingIfNeeded:(long long)arg1 source:(unsigned long long)arg2 domain:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didUpdateRequestDesktopSitePerSitePreference:(id)arg1 ;
-(id)init;
-(BOOL)_updateSettingSource:(unsigned long long)arg1 domain:(id)arg2 ;
-(BOOL)loadedUsingDesktopUserAgent;
-(void)customUserAgentSettingForMainFrameURL:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithWebView:(id)arg1 activityJSController:(id)arg2 perSitePreferenceManager:(id)arg3 ;
-(void)setTryUsingMobileIfPossible:(BOOL)arg1 ;
-(void)didSetRequestDesktopSiteDefaultValue:(long long)arg1 ;
-(BOOL)tryUsingMobileIfPossible;
-(void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1 ;
-(void)_loadPerSitePreferences;
-(id)customNavigatorPlatformForSetting:(long long)arg1 ;
-(id)customUserAgentForSetting:(long long)arg1 ;
-(void)didSetRequestDesktopSitePerSitePreferencesValues:(id)arg1 ;
-(void)setEffectiveContentMode:(long long)arg1 ;
@end

