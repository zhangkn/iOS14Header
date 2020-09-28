/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSString;

@interface HDMigrationManager : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver> {

	BOOL _needsProtectedDataMigration;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL needsProtectedDataMigration;                //@synthesize needsProtectedDataMigration=_needsProtectedDataMigration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)needsProtectedDataMigration;
-(HDProfile *)profile;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_queue_performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNeedsProtectedDataMigration:(BOOL)arg1 ;
@end
