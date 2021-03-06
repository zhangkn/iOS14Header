/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@protocol FANavigationControllerDelegate;
@interface FANavigationController : UINavigationController {

	id<FANavigationControllerDelegate> _familyDelegate;

}

@property (assign,nonatomic,__weak) id<FANavigationControllerDelegate> familyDelegate;              //@synthesize familyDelegate=_familyDelegate - In the implementation block
-(BOOL)_isEmpty;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFamilyDelegate:(id<FANavigationControllerDelegate>)arg1 ;
-(id<FANavigationControllerDelegate>)familyDelegate;
@end

