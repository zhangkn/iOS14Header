/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryCurationDebugActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {

	PXGLayout* _layoutForDiagnosticDescription;

}

@property (nonatomic,__weak,readonly) PXGLayout * layoutForDiagnosticDescription;              //@synthesize layoutForDiagnosticDescription=_layoutForDiagnosticDescription - In the implementation block
-(id)activityType;
-(void)performUserInteractionTask;
-(id)activitySystemImageName;
-(id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 diagnosticLayout:(id)arg3 ;
-(PXGLayout *)layoutForDiagnosticDescription;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
@end
