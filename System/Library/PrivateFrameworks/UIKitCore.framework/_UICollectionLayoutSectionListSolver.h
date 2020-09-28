/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>

@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;
@class NSCollectionLayoutSection, UITraitCollection, NSIndexSet, _UICollectionLayoutItemSolver, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutSectionGeometryTranslator, NSString;

@interface _UICollectionLayoutSectionListSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {

	vector<_UIRegionSolveResult, std::__1::allocator<_UIRegionSolveResult> >* _regions;
	unique_ptr<_UIItemSolveResult, std::__1::default_delete<_UIItemSolveResult> >* _templateItemSolveResult;
	BOOL _shouldAdjustContentSizeForPartialLastGroupSolution;
	BOOL _layoutRTL;
	NSCollectionLayoutSection* _layoutSection;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;
	unsigned long long _layoutAxis;
	unsigned long long _containerLayoutAxis;
	long long _frameCount;
	_UICollectionLayoutItemSolver* _solution;
	_UICollectionLayoutAuxillaryItemSolver* _sectionAuxillarySolution;
	_UICollectionLayoutSupplementaryRegistrar* _sectionSupplementaryRegistrar;
	_UICollectionLayoutSectionGeometryTranslator* _sectionGeometryTranslator;
	id<NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;
	id<_UICollectionPreferredSizes> _preferredSizes;
	CGPoint _orthogonalOffset;
	CGVector _orthogonalScrollingPrefetchingUnitVector;

}

@property (nonatomic,retain) NSCollectionLayoutSection * layoutSection;                                              //@synthesize layoutSection=_layoutSection - In the implementation block
@property (nonatomic,retain) id<NSCollectionLayoutContainer> container;                                              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                                    //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                                                         //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) unsigned long long layoutAxis;                                                          //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) unsigned long long containerLayoutAxis;                                                 //@synthesize containerLayoutAxis=_containerLayoutAxis - In the implementation block
@property (assign,nonatomic) long long frameCount;                                                                   //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutItemSolver * solution;                                               //@synthesize solution=_solution - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutAuxillaryItemSolver * sectionAuxillarySolution;                      //@synthesize sectionAuxillarySolution=_sectionAuxillarySolution - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSupplementaryRegistrar * sectionSupplementaryRegistrar;              //@synthesize sectionSupplementaryRegistrar=_sectionSupplementaryRegistrar - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSectionGeometryTranslator * sectionGeometryTranslator;               //@synthesize sectionGeometryTranslator=_sectionGeometryTranslator - In the implementation block
@property (nonatomic,retain) id<NSCollectionLayoutContainer> memoizedAuxillaryHostContainer;                         //@synthesize memoizedAuxillaryHostContainer=_memoizedAuxillaryHostContainer - In the implementation block
@property (nonatomic,retain) id<_UICollectionPreferredSizes> preferredSizes;                                         //@synthesize preferredSizes=_preferredSizes - In the implementation block
@property (assign,nonatomic) CGVector orthogonalScrollingPrefetchingUnitVector;                                      //@synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector - In the implementation block
@property (nonatomic,readonly) CGRect effectiveContentFrame; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) NSIndexSet * pinnedSupplementaryIndexes; 
@property (assign,nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;                                //@synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution - In the implementation block
@property (assign,nonatomic) CGPoint orthogonalOffset;                                                               //@synthesize orthogonalOffset=_orthogonalOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)auxillaryHostSupplementaryEnroller;
-(CGSize)auxillaryHostPinningContentSize;
-(void)_setOrthogonalOffset:(CGPoint)arg1 ;
-(void)setContainerLayoutAxis:(unsigned long long)arg1 ;
-(_UICollectionLayoutItemSolver *)solution;
-(id)frameForIndex:(long long)arg1 ;
-(id)visualDescription;
-(void)setLayoutAxis:(unsigned long long)arg1 ;
-(id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2 ;
-(long long)auxillaryHostAuxillaryKind;
-(BOOL)auxillaryHostShouldLayoutRTL;
-(id<_UICollectionPreferredSizes>)preferredSizes;
-(void)setPreferredSizes:(id<_UICollectionPreferredSizes>)arg1 ;
-(long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1 ;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6 ;
-(unsigned long long)containerLayoutAxis;
-(NSIndexSet *)pinnedSupplementaryIndexes;
-(id)auxillaryHostContainer;
-(NSCollectionLayoutSection *)layoutSection;
-(_UICollectionLayoutSupplementaryRegistrar *)sectionSupplementaryRegistrar;
-(id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(BOOL)layoutRTL;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(CGRect)effectiveContentFrame;
-(long long)_anchorIndexForSolveParameters:(id)arg1 ;
-(id)_queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(unsigned long long)layoutAxis;
-(long long)_regionIndexForFrameIndex:(long long)arg1 startRegionIndex:(long long)arg2 endRegionIndex:(long long)arg3 ;
-(id)sectionSupplementaryFrameForIndex:(long long)arg1 ;
-(id)auxillaryHostPreferredSizes;
-(BOOL)shouldAdjustContentSizeForPartialLastGroupSolution;
-(id)auxillaryHostAuxillaryItems;
-(void)_initialSolve;
-(void)setShouldAdjustContentSizeForPartialLastGroupSolution:(BOOL)arg1 ;
-(void)_recomputeRegionOffsetsStartingAtFrameIndex:(long long)arg1 ;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(CGSize)auxillaryHostContentSize;
-(void)setSectionGeometryTranslator:(_UICollectionLayoutSectionGeometryTranslator *)arg1 ;
-(void)setSectionSupplementaryRegistrar:(_UICollectionLayoutSupplementaryRegistrar *)arg1 ;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 ;
-(id)initWithLayoutSection:(id)arg1 ;
-(unsigned long long)_regionIndexForFrameIndex:(long long)arg1 ;
-(_UICollectionLayoutAuxillaryItemSolver *)sectionAuxillarySolution;
-(CGVector)orthogonalScrollingPrefetchingUnitVector;
-(UITraitCollection *)traitCollection;
-(id)_sectionContainer;
-(void)_updatePreferredSizeForFrameIndex:(long long)arg1 ;
-(long long)frameCount;
-(long long)_regionIndexForQueryRect:(CGRect)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setSolution:(_UICollectionLayoutItemSolver *)arg1 ;
-(unsigned long long)auxillaryHostLayoutAxis;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 ;
-(void)setSectionAuxillarySolution:(_UICollectionLayoutAuxillaryItemSolver *)arg1 ;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(CGSize)contentSize;
-(void)setLayoutSection:(NSCollectionLayoutSection *)arg1 ;
-(CGPoint)orthogonalOffset;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(CGRect)arg1 ;
-(void)setFrameCount:(long long)arg1 ;
-(double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1 ;
-(id)queryFramesIntersectingRect:(CGRect)arg1 ;
-(void)setMemoizedAuxillaryHostContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(UIRegionSolveResult*)_regionForFrameIndex:(long long)arg1 ;
-(long long)_splitRegionAtRegionIndex:(long long)arg1 forFrameIndex:(long long)arg2 ;
-(long long)_regionIndexForQueryRect:(CGRect)arg1 startRegionIndex:(long long)arg2 endRegionIndex:(long long)arg3 ;
-(id)_resolveWithParameters:(id)arg1 ;
-(id<NSCollectionLayoutContainer>)memoizedAuxillaryHostContainer;
-(void)setOrthogonalScrollingPrefetchingUnitVector:(CGVector)arg1 ;
-(void)setOrthogonalOffset:(CGPoint)arg1 ;
-(id<NSCollectionLayoutContainer>)container;
@end
