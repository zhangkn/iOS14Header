/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXGadgetSpec, NSString;


@protocol PXGadget <NSObject>
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@optional
-(id)contentView;
-(id)contentViewController;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(NSString *)localizedTitle;
-(void)setPriority:(long long)arg1;
-(void)preloadResources;
-(void)contentHasBeenSeen;
-(void)contentViewWillAppear;
-(void)userDidSelectGadget;
-(void)userDidSelectAccessoryButton:(id)arg1;
-(void)prepareCollectionViewItem:(id)arg1;
-(void)removeCollectionViewItem:(id)arg1;
-(id)debugURLsForDiagnostics;
-(id)uniqueGadgetIdentifier;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)prefetchDuringScrollingForWidth:(double)arg1;
-(Class)collectionViewItemClass;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2;
-(void)commitPreviewViewController:(id)arg1;
-(void)setVisibleContentRect:(CGRect)arg1;
-(CGRect)visibleContentRect;
-(void)contentViewDidDisappear;
-(unsigned long long)accessoryButtonType;
-(long long)priority;
-(NSString *)accessoryButtonTitle;
-(unsigned long long)headerStyle;

@required
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(id)arg1;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(void)setDelegate:(id)arg1;
-(id<PXGadgetDelegate>)delegate;

@end

