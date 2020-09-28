/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {

	NSArray* _plugins;
	HDDaemon* _daemon;
	NSArray* _allowablePluginDirectoryPaths;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;                           //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) NSArray * allowablePluginDirectoryPaths;              //@synthesize allowablePluginDirectoryPaths=_allowablePluginDirectoryPaths - In the implementation block
-(HDDaemon *)daemon;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(id)pluginsConformingToProtocol:(id)arg1 ;
-(id)_createPluginsFromClasses:(id)arg1 ;
-(id)_pluginClasses;
-(id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3 ;
-(id)initWithDaemon:(id)arg1 ;
-(id)_pluginDirectoryPaths;
-(NSArray *)allowablePluginDirectoryPaths;
-(Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2 ;
-(id)_internalPluginsDirectoryPaths;
-(id)createExtensionsForProfile:(id)arg1 ;
-(id)_builtInPluginClasses;
-(id)_principalClassProtocols;
-(id)_pluginsDirectoryPath;
-(id)createExtensionsForDaemon:(id)arg1 ;
-(void)setAllowablePluginDirectoryPaths:(NSArray *)arg1 ;
-(void)_loadPlugins;
@end
