/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/___UIStatusBarAccessibility_super.h>

@interface _UIStatusBarAccessibility : ___UIStatusBarAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityElements;
-(void)_prepareVisualProviderIfNeeded;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3 ;
-(void)_axSetIsHitTesting:(BOOL)arg1 ;
-(BOOL)_axElementWithinFocused;
-(BOOL)_axGetIsHitTesting;
@end
