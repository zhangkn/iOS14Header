//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface SRSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_bundleURLsByBundleIdentifier;	// 24 = 0x18
}

+ (id)sharedSiriPresentationPluginHost;	// IMP=0x000000010007a21c
+ (id)_defaultURL;	// IMP=0x000000010007a160
- (void).cxx_destruct;	// IMP=0x000000010007b5dc
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void)_save;	// IMP=0x000000010007b3d0
- (void)_load;	// IMP=0x000000010007b1b0
- (void)_loadFromPropertyListRepresentation:(id)arg1;	// IMP=0x000000010007af80
- (id)_propertyListRepresentation;	// IMP=0x000000010007ae08
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000010007acec
- (void)preloadPluginBundles;	// IMP=0x000000010007ac14
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;	// IMP=0x000000010007aafc
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;	// IMP=0x000000010007a9f8
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;	// IMP=0x000000010007a968
- (void)_rescanBundles;	// IMP=0x000000010007a5cc
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000010007a4a4
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;	// IMP=0x000000010007a410
- (id)init;	// IMP=0x000000010007a3b4
- (id)initWithURL:(id)arg1;	// IMP=0x000000010007a308

@end

