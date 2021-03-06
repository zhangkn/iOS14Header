/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate> {

	CoreTelephonyClient* _client;
	NSMutableDictionary* _specifiersDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * specifiersDict;              //@synthesize specifiersDict=_specifiersDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)carrierBundleChange:(id)arg1 ;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)initPrivate;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)dealloc;
-(id)init;
-(CoreTelephonyClient *)client;
-(void)willEnterForeground;
-(void)_clearCache;
-(void)openURLWithSpecifier:(id)arg1 ;
-(void)dialCarrierServiceNumber:(id)arg1 ;
-(id)readPreference:(id)arg1 ;
-(id)newMyAccountSpecifierWithTarget:(id)arg1 context:(id)arg2 ;
-(id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2 ;
-(NSMutableDictionary *)specifiersDict;
-(void)fetchSpecifiers;
-(void)_allowClicks;
-(id)specifiers:(id)arg1 ;
-(void)setSpecifiersDict:(NSMutableDictionary *)arg1 ;
@end

