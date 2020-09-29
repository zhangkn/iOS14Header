/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetDataSourceManager.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCMMCloudGadgetViewControllerDelegate.h>

@protocol PXPhotoLibraryPresenting;
@class PXMessagesExtensionViewModel, PXCloudWelcomeGadgetProvider, PXMessagesCMMSuggestionsGadgetProvider, NSArray, PXCMMEnabledStatusProvider, PXCMMSuggestionsDataSourceManager, UIViewController, NSString, PXMessagesRecentPhotosGadgetProvider, PXGadgetNavigationHelper;

@interface PXMessagesGadgetDataSourceManager : PXGadgetDataSourceManager <PXChangeObserver, PXCMMCloudGadgetViewControllerDelegate> {

	PXMessagesExtensionViewModel* _viewModel;
	PXCloudWelcomeGadgetProvider* _cloudWelcomeGadgeProvider;
	PXMessagesCMMSuggestionsGadgetProvider* _suggestionsGadgetProvider;
	NSArray* _cachedGadgetProviders;
	PXCMMEnabledStatusProvider* _cmmEnabledStatusProvider;
	PXCMMSuggestionsDataSourceManager* _suggestionsDataSourceManager;
	UIViewController*<PXPhotoLibraryPresenting> _recentPhotosViewController;
	double _recentPhotosHeight;
	NSString* _placeholderTitle;
	PXMessagesRecentPhotosGadgetProvider* _recentPhotosProvider;

}

@property (nonatomic,retain) PXMessagesRecentPhotosGadgetProvider * recentPhotosProvider;                         //@synthesize recentPhotosProvider=_recentPhotosProvider - In the implementation block
@property (nonatomic,retain) PXCMMSuggestionsDataSourceManager * suggestionsDataSourceManager;                    //@synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager - In the implementation block
@property (nonatomic,retain) UIViewController*<PXPhotoLibraryPresenting> recentPhotosViewController;              //@synthesize recentPhotosViewController=_recentPhotosViewController - In the implementation block
@property (assign,nonatomic) double recentPhotosHeight;                                                           //@synthesize recentPhotosHeight=_recentPhotosHeight - In the implementation block
@property (nonatomic,copy) NSString * placeholderTitle;                                                           //@synthesize placeholderTitle=_placeholderTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
-(void)removeCachedProviders;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg1 ;
-(id)gadgetProviders;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithViewModel:(id)arg1 dataSourceManager:(id)arg2 ;
-(void)setSuggestionsDataSourceManager:(PXCMMSuggestionsDataSourceManager *)arg1 ;
-(void)_updateGadgetProviders;
-(void)setRecentPhotosHeight:(double)arg1 ;
-(PXCMMSuggestionsDataSourceManager *)suggestionsDataSourceManager;
-(UIViewController*<PXPhotoLibraryPresenting>)recentPhotosViewController;
-(void)setRecentPhotosViewController:(UIViewController*<PXPhotoLibraryPresenting>)arg1 ;
-(double)recentPhotosHeight;
-(NSString *)placeholderTitle;
-(void)setPlaceholderTitle:(NSString *)arg1 ;
-(PXMessagesRecentPhotosGadgetProvider *)recentPhotosProvider;
-(void)setRecentPhotosProvider:(PXMessagesRecentPhotosGadgetProvider *)arg1 ;
@end
