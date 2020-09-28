/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TSADocumentRootDelegate <TSKAccessControllerDelegate>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,readonly) NSString * documentCachePath; 
@optional
-(NSString *)documentCachePath;
-(NSString *)defaultDraftName;
-(void)invalidateRestorableState;
-(void)continueActivityUsingBlock:(/*^block*/id)arg1;
-(void)didAddObserverForICloudTeardown:(id)arg1;
-(void)willRemoveICloudTeardownObserver:(id)arg1;

@required
-(NSString *)name;

@end
