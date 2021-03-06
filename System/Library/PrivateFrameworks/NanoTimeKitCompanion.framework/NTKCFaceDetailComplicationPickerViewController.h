/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/NTKComplicationPickerListProviderListener.h>
#import <libobjc.A.dylib/NTKPeopleComplicationPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailComplicationPickerViewControllerDelegate.h>

@protocol NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKComplicationPickerListProvider;
@class NSString, UITableViewDiffableDataSource, NTKCFaceDetailComplicationCellProvider, NTKFaceSlotComplicationTopLevelListProvider, NSIndexPath;

@interface NTKCFaceDetailComplicationPickerViewController : UITableViewController <NTKComplicationPickerListProviderListener, NTKPeopleComplicationPickerViewControllerDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate> {

	BOOL _hasDoneInitialScrollToItem;
	NSString* _slot;
	id<NTKCFaceDetailComplicationPickerViewControllerDelegate> _delegate;
	UITableViewDiffableDataSource* _dataSource;
	NTKCFaceDetailComplicationCellProvider* _cellProvider;
	id<NTKComplicationPickerListProvider> _listProvider;
	NTKFaceSlotComplicationTopLevelListProvider* _topLevelListProvider;
	NSIndexPath* _indexPathToScrollToAfterLayout;

}

@property (nonatomic,retain) UITableViewDiffableDataSource * dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailComplicationCellProvider * cellProvider;                                   //@synthesize cellProvider=_cellProvider - In the implementation block
@property (nonatomic,readonly) id<NTKComplicationPickerListProvider> listProvider;                                    //@synthesize listProvider=_listProvider - In the implementation block
@property (nonatomic,readonly) NTKFaceSlotComplicationTopLevelListProvider * topLevelListProvider;                    //@synthesize topLevelListProvider=_topLevelListProvider - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathToScrollToAfterLayout;                                            //@synthesize indexPathToScrollToAfterLayout=_indexPathToScrollToAfterLayout - In the implementation block
@property (assign,nonatomic) BOOL hasDoneInitialScrollToItem;                                                         //@synthesize hasDoneInitialScrollToItem=_hasDoneInitialScrollToItem - In the implementation block
@property (nonatomic,readonly) NSString * slot;                                                                       //@synthesize slot=_slot - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailComplicationPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)slot;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setDataSource:(UITableViewDiffableDataSource *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UITableViewDiffableDataSource *)dataSource;
-(void)setDelegate:(id<NTKCFaceDetailComplicationPickerViewControllerDelegate>)arg1 ;
-(id<NTKCFaceDetailComplicationPickerViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<NTKComplicationPickerListProvider>)listProvider;
-(id)initWithFace:(id)arg1 slot:(id)arg2 selectedComplication:(id)arg3 ;
-(void)faceDetailComplicationPickerViewController:(id)arg1 didSelectComplication:(id)arg2 ;
-(void)peopleComplicationPickerViewController:(id)arg1 didSelectItem:(id)arg2 ;
-(void)_configureWithSlot:(id)arg1 listProvider:(id)arg2 selectedComplication:(id)arg3 ;
-(NTKFaceSlotComplicationTopLevelListProvider *)topLevelListProvider;
-(id)initWithSlot:(id)arg1 listProvider:(id)arg2 title:(id)arg3 selectedComplication:(id)arg4 ;
-(NTKCFaceDetailComplicationCellProvider *)cellProvider;
-(void)setCellProvider:(NTKCFaceDetailComplicationCellProvider *)arg1 ;
-(void)setIndexPathToScrollToAfterLayout:(NSIndexPath *)arg1 ;
-(NSIndexPath *)indexPathToScrollToAfterLayout;
-(BOOL)hasDoneInitialScrollToItem;
-(void)setHasDoneInitialScrollToItem:(BOOL)arg1 ;
-(id)detailViewControllerForSectionInfo:(id)arg1 ;
-(void)complicationPickerListProviderDidUpdate:(id)arg1 ;
@end

