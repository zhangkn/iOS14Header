/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement {

	UICollectionViewCell* _cell;
	BOOL _usingRealCell;
	NSIndexPath* _indexPath;

}

@property (nonatomic,retain) UICollectionViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                  //@synthesize indexPath=_indexPath - In the implementation block
-(UICollectionViewCell *)cell;
-(id)accessibilityLabel;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)_accessibilityCollectionViewCellContentSubviews;
-(void)setCell:(UICollectionViewCell *)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)dealloc;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)accessibilityElementDidLoseFocus;
-(CGRect)accessibilityFrame;
-(NSIndexPath *)indexPath;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(CGPoint)accessibilityActivationPoint;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(long long)accessibilityElementCount;
-(id)_accessibilityUserTestingChildren;
-(id)accessibilityValue;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)_accessibilitySelect;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityUserTestingProxyView;
-(id)accessibilityHint;
-(id)_accessibilityUserTestingVisibleAncestor;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)accessibilityLanguage;
-(BOOL)accessibilityActivate;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityHasNativeFocus;
-(NSRange)accessibilityRowRange;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)_accessibilityHasTextOperations;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(id)accessibilityIdentifier;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)_accessibilityBackingElementIsValid;
-(void)_accessibilityCut;
-(long long)_accessibilityScannerActivateBehavior;
-(unsigned long long)accessibilityTraits;
-(void)_accessibilityCopy;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)realCell;
@end

