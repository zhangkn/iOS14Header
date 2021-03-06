/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXInboxAggregateDataSourceManager, NSString;

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver> {

	PXInboxAggregateDataSourceManager* _dataSourceManager;

}

@property (nonatomic,readonly) PXInboxAggregateDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXInboxAggregateDataSourceManager *)dataSourceManager;
-(void)generateGadgets;
-(void)_lastExitedForYouDateDidChange:(id)arg1 ;
-(void)loadDataForGadgets;
-(void)_updateDataSourceRangesOfCurrentGadgets;
-(void)_updateLastSeenDateOfCurrentGadgets;
-(void)_updateGadgets;
-(id)initWithDataSourceManager:(id)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

