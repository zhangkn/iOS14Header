/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTCoreDataPersistentStoreConfiguration.h>

@protocol AVTUILogger, AVTAvatarsDaemon;
@class NSPersistentContainer, NSString;

@interface _AVTCoreDataPersistentStoreRemoteConfiguration : NSObject <AVTCoreDataPersistentStoreConfiguration> {

	NSPersistentContainer* _container;
	id<AVTUILogger> _logger;
	id<AVTAvatarsDaemon> _daemonClient;

}

@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarsDaemon> daemonClient;              //@synthesize daemonClient=_daemonClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createContainerForRemoteConfiguration;
-(id<AVTUILogger>)logger;
-(id)persistentStoreCoordinator;
-(id)createManagedObjectContext;
-(id)storeDescription;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(id)initWithDaemonClient:(id)arg1 environment:(id)arg2 ;
-(id<AVTAvatarsDaemon>)daemonClient;
-(NSPersistentContainer *)container;
@end
