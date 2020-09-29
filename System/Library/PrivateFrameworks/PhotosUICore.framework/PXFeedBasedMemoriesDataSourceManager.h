/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesDataSourceManager.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXMemoriesFeedWidgetDataSourceManager, PXMemoriesFeedDataSource, NSString;

@interface PXFeedBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXSectionedDataSourceManagerObserver> {

	PXMemoriesFeedWidgetDataSourceManager* _childDataSourceManager;
	PXMemoriesFeedDataSource* _childDataSource;
	NSRange _dataSourceRange;

}

@property (nonatomic,readonly) PXMemoriesFeedWidgetDataSourceManager * childDataSourceManager;              //@synthesize childDataSourceManager=_childDataSourceManager - In the implementation block
@property (nonatomic,retain) PXMemoriesFeedDataSource * childDataSource;                                    //@synthesize childDataSource=_childDataSource - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandleEntireDataSource; 
@property (assign,nonatomic) NSRange dataSourceRange;                                                       //@synthesize dataSourceRange=_dataSourceRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleDataSourceChange;
-(id)initWithMemoriesFeedWidgetDataSourceManager:(id)arg1 ;
-(PXMemoriesFeedDataSource *)childDataSource;
-(id)_adjustDataSourceIfNeeded:(id)arg1 ;
-(id)_adjustChangeDetailsIfNeeded:(id)arg1 previousDataSource:(id)arg2 newDataSource:(id)arg3 ;
-(id)_adjustChangedIndexSetIfNeeded:(id)arg1 ;
-(PXMemoriesFeedWidgetDataSourceManager *)childDataSourceManager;
-(void)setChildDataSource:(PXMemoriesFeedDataSource *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)createInitialDataSource;
-(void)setDataSourceRange:(NSRange)arg1 ;
-(NSRange)dataSourceRange;
-(BOOL)shouldHandleEntireDataSource;
-(void)updateCurrentMemoriesNonPendingAndNotificationStatus;
@end
