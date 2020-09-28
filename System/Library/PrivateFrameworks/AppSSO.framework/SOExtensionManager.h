/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SOExtensionFinder, NSArray;

@interface SOExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _extensionManagerQueue;
	SOExtensionFinder* _extensionFinder;
	NSArray* _loadedExtensions;

}

@property (nonatomic,readonly) NSArray * loadedExtensions;              //@synthesize loadedExtensions=_loadedExtensions - In the implementation block
+(id)sharedInstance;
+(BOOL)_isMatchedExtension:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)internalExtensionsBundleIdentifiers;
+(BOOL)isAppleConnectExtensionBundleIdentifier:(id)arg1 ;
+(BOOL)isTiburonExtensionBundleIdentifier:(id)arg1 ;
+(BOOL)isInternalExtensionBundleIdentifier:(id)arg1 ;
+(id)internalExtensionBundleIdentifier;
+(void)_sendNotificationsLoadedExtensions:(id)arg1 new:(id)arg2 removed:(id)arg3 ;
-(void)loadExtensions;
-(void)beginMatchingExtensions;
-(void)_doEndMatchingExtensions;
-(id)loadedExtensionWithBundleIdentifer:(id)arg1 ;
-(void)dealloc;
-(BOOL)isLoadedExtensionWithBundleIdentifer:(id)arg1 ;
-(void)_doBeginMatchingExtensions;
-(void)loadExtensionWithBundleIdentifer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)loadInternalExtension;
-(id)init;
-(id)loadedInternalExtension;
-(void)endMatchingExtensions;
-(id)_doLoadExtensions;
-(id)loadExtensionWithBundleIdentifier:(id)arg1 ;
-(void)unloadExtensions;
-(NSArray *)loadedExtensions;
@end
