/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol UIDebuggingInformationHierarchyLayoutDelegate;
@class NSMutableArray, NSDictionary, NSMutableDictionary;

@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout {

	NSMutableArray* _indexPathsToDelete;
	id<UIDebuggingInformationHierarchyLayoutDelegate> _delegate;
	NSDictionary* _allAttributes;
	NSMutableDictionary* _allLineAttributes;

}

@property (nonatomic,retain) NSDictionary * allAttributes;                                                   //@synthesize allAttributes=_allAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allLineAttributes;                                        //@synthesize allLineAttributes=_allLineAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<UIDebuggingInformationHierarchyLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)layoutAttributesClass;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(void)invalidateLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setDelegate:(id<UIDebuggingInformationHierarchyLayoutDelegate>)arg1 ;
-(id<UIDebuggingInformationHierarchyLayoutDelegate>)delegate;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(NSDictionary *)allAttributes;
-(NSMutableDictionary *)allLineAttributes;
-(void)_recomputeAttributes;
-(void)setAllLineAttributes:(NSMutableDictionary *)arg1 ;
-(void)setAllAttributes:(NSDictionary *)arg1 ;
@end

