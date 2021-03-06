/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MCHoldingTankManifest : NSObject {

	NSMutableDictionary* _universalManifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedManifest;
-(id)uninstalledProfileDataWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(id)_profileDataFileNameForProfileIdentifier:(id)arg1 ;
-(void)_createDirectory:(id)arg1 withIntermediateDirectories:(BOOL)arg2 ;
-(id)pathToHoldingTankProfileDataForIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 createDirectory:(BOOL)arg3 ;
-(void)dealloc;
-(id)_pathToHoldingTankManifestForDevice:(unsigned long long)arg1 ;
-(void)removeProfileDataWithIdentifier:(id)arg1 fromHoldingTankForDevice:(unsigned long long)arg2 ;
-(BOOL)addProfileData:(id)arg1 withIdentifier:(id)arg2 toHoldingTankForDevice:(unsigned long long)arg3 outError:(id*)arg4 ;
-(id)init;
-(id)uninstalledProfileIdentifiersForDevice:(unsigned long long)arg1 ;
-(id)uninstalledProfileWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(id)_manifestForDevice:(unsigned long long)arg1 createIfNil:(BOOL)arg2 ;
-(BOOL)_adjustManifestForDevice:(unsigned long long)arg1 withIdentifier:(id)arg2 addingIdentifer:(BOOL)arg3 outError:(id*)arg4 ;
-(id)_pathToHoldingTankDirectoryForDevice:(unsigned long long)arg1 ;
@end

