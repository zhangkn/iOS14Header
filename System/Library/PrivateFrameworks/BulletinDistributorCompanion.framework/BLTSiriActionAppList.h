/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, BLTSiriActionAppListDelegate;
@class NSMutableDictionary, NSMutableSet, NSObject, NSURL, NSDictionary, NSSet, NSString;

@interface BLTSiriActionAppList : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableDictionary* _installed;
	NSMutableSet* _removed;
	NSObject*<OS_dispatch_queue> _appListQueue;
	NSURL* _siriActionAppListStoreURL;
	NSMutableSet* _appListStore;
	id<BLTSiriActionAppListDelegate> _delegate;

}

@property (nonatomic,readonly) NSDictionary * installed; 
@property (nonatomic,readonly) NSSet * removed; 
@property (assign,nonatomic,__weak) id<BLTSiriActionAppListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationsDidInstall:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)installed;
-(void)applicationIconDidChange:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<BLTSiriActionAppListDelegate>)arg1 ;
-(NSSet *)removed;
-(id<BLTSiriActionAppListDelegate>)delegate;
-(id)_siriActionAppListStoreURL;
-(BOOL)_handleAppListInstalled:(id)arg1 removed:(id)arg2 ;
-(void)updateStoreWithInstalled:(id)arg1 removed:(id)arg2 ;
@end

