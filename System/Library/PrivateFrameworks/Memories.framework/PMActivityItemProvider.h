/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:32 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <ShareSheet/UIActivityItemProvider.h>

@protocol PMActivityItemProviderDelegate, MiroPreventDismissalDelegate, OS_dispatch_semaphore;
@class VEKProduction, MiroMovie, LPLinkMetadata, PUActivityProgressController, NSString, NSObject, VEKResult, UIViewController;

@interface PMActivityItemProvider : UIActivityItemProvider {

	BOOL _debugDisableProgressUpdates;
	BOOL _userCancelled;
	id<PMActivityItemProviderDelegate> _delegate;
	id<MiroPreventDismissalDelegate> _preventDismissalDelegate;
	VEKProduction* _production;
	MiroMovie* _miroMovie;
	double _exportAspect;
	LPLinkMetadata* _shareHeaderMetadata;
	PUActivityProgressController* _progressController;
	NSString* _preset;
	NSString* _exportedFilePath;
	NSObject*<OS_dispatch_semaphore> _readyToReturnItem;
	VEKResult* _result;
	NSString* _shareMetadataSummary;
	NSString* _shareMetadataTitle;

}

@property (nonatomic,retain) VEKProduction * production;                                                    //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) PUActivityProgressController * progressController;                             //@synthesize progressController=_progressController - In the implementation block
@property (nonatomic,retain) NSString * preset;                                                             //@synthesize preset=_preset - In the implementation block
@property (nonatomic,retain) NSString * exportedFilePath;                                                   //@synthesize exportedFilePath=_exportedFilePath - In the implementation block
@property (assign,nonatomic) BOOL userCancelled;                                                            //@synthesize userCancelled=_userCancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> readyToReturnItem;                            //@synthesize readyToReturnItem=_readyToReturnItem - In the implementation block
@property (nonatomic,retain) VEKResult * result;                                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * shareMetadataSummary;                                               //@synthesize shareMetadataSummary=_shareMetadataSummary - In the implementation block
@property (nonatomic,retain) NSString * shareMetadataTitle;                                                 //@synthesize shareMetadataTitle=_shareMetadataTitle - In the implementation block
@property (assign,nonatomic,__weak) id<PMActivityItemProviderDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MiroPreventDismissalDelegate> preventDismissalDelegate;              //@synthesize preventDismissalDelegate=_preventDismissalDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenter; 
@property (nonatomic,retain) MiroMovie * miroMovie;                                                         //@synthesize miroMovie=_miroMovie - In the implementation block
@property (assign,nonatomic) double exportAspect;                                                           //@synthesize exportAspect=_exportAspect - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * shareHeaderMetadata;                                          //@synthesize shareHeaderMetadata=_shareHeaderMetadata - In the implementation block
-(UIViewController *)presenter;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(PUActivityProgressController *)progressController;
-(void)setProgressController:(PUActivityProgressController *)arg1 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(void)cancelExport;
-(VEKResult *)result;
-(NSString *)preset;
-(id)item;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(void)setDelegate:(id<PMActivityItemProviderDelegate>)arg1 ;
-(void)setResult:(VEKResult *)arg1 ;
-(id<PMActivityItemProviderDelegate>)delegate;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(void)setPreset:(NSString *)arg1 ;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(BOOL)userCancelled;
-(void)setUserCancelled:(BOOL)arg1 ;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1 ;
-(LPLinkMetadata *)shareHeaderMetadata;
-(void)setShareHeaderMetadata:(LPLinkMetadata *)arg1 ;
-(NSString *)shareMetadataTitle;
-(void)setShareMetadataTitle:(NSString *)arg1 ;
-(NSString *)shareMetadataSummary;
-(void)setShareMetadataSummary:(NSString *)arg1 ;
-(id<MiroPreventDismissalDelegate>)preventDismissalDelegate;
-(void)_unloadVEKObjects;
-(MiroMovie *)miroMovie;
-(void)setReadyToReturnItem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)beginExport;
-(NSObject*<OS_dispatch_semaphore>)readyToReturnItem;
-(NSString *)exportedFilePath;
-(void)setExportedFilePath:(NSString *)arg1 ;
-(id)initWithProduction:(id)arg1 result:(id)arg2 ;
-(void)setPreventDismissalDelegate:(id<MiroPreventDismissalDelegate>)arg1 ;
-(void)setMiroMovie:(MiroMovie *)arg1 ;
@end

