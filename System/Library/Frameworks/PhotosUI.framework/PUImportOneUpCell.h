/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosSharingGridCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PUImportOneUpCellDisplayDelegate;
@class PXImportItemViewModel, UITextField, NSString;

@interface PUImportOneUpCell : PUPhotosSharingGridCell <PXChangeObserver> {

	id<PUImportOneUpCellDisplayDelegate> _displayDelegate;
	PXImportItemViewModel* _importItem;
	UITextField* _debugTextField;
	long long _thumbnailRequestID;

}

@property (nonatomic,retain) UITextField * debugTextField;                                             //@synthesize debugTextField=_debugTextField - In the implementation block
@property (assign,nonatomic) long long thumbnailRequestID;                                             //@synthesize thumbnailRequestID=_thumbnailRequestID - In the implementation block
@property (assign,nonatomic,__weak) id<PUImportOneUpCellDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (nonatomic,retain) PXImportItemViewModel * importItem;                                       //@synthesize importItem=_importItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)alphaForSelectedCells;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_commonPUImportOneUpCellInitialization;
-(void*)contextForObservingViewModelChanges;
-(void)setImportItem:(PXImportItemViewModel *)arg1 ;
-(void)updatePhotoViewForImportItem:(id)arg1 ;
-(void)updateSelectedVisualAppearance;
-(void)setImage:(id)arg1 isPlaceholder:(BOOL)arg2 ;
-(void)updateBadge;
-(PXImportItemViewModel *)importItem;
-(void)setDisplayDelegate:(id<PUImportOneUpCellDisplayDelegate>)arg1 ;
-(void)refreshThumbnail;
-(void)updateDebugLabel:(id)arg1 ;
-(UITextField *)debugTextField;
-(void)setDebugTextField:(UITextField *)arg1 ;
-(long long)thumbnailRequestID;
-(void)setThumbnailRequestID:(long long)arg1 ;
-(id<PUImportOneUpCellDisplayDelegate>)displayDelegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

