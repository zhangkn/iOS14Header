/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MAAsset, NSMutableDictionary;

@interface _PASAsset2GuardedData : NSObject {

	NSString* _defaultBundlePath;
	unsigned long long _defaultBundleVersion;
	unsigned long long _bestAvailableVersion;
	unsigned long long _bestAssetVersionObserved;
	MAAsset* _bestAvailableAsset;
	BOOL _purgeObsoleteInstalledAssets;
	NSMutableDictionary* _overrides;

}
@end
