//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SetupChoiceController, UIAlertController, UIViewController;

@interface SetupChoice : NSObject
{
    NSString *_localizedTitle;	// 8 = 0x8
    UIViewController *_nextController;	// 16 = 0x10
    id _identifier;	// 24 = 0x18
    Class _nextControllerClass;	// 32 = 0x20
    CDUnknownBlockType _condition;	// 40 = 0x28
    UIAlertController *_alertController;	// 48 = 0x30
    SetupChoiceController *_choiceController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100054bec
@property(nonatomic) __weak SetupChoiceController *choiceController; // @synthesize choiceController=_choiceController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy, nonatomic) CDUnknownBlockType condition; // @synthesize condition=_condition;
@property(retain, nonatomic) id identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) Class nextControllerClass; // @synthesize nextControllerClass=_nextControllerClass;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void)runConfirmationIfNeeded;	// IMP=0x0000000100054a30
- (void)setConfirmationAlert:(id)arg1 condition:(CDUnknownBlockType)arg2;	// IMP=0x00000001000549d0
- (id)confirmationCancelActionWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x000000010005482c
- (id)confirmationAcceptActionWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x0000000100054648
- (id)initWithChoiceID:(id)arg1 title:(id)arg2 nextItemClass:(Class)arg3;	// IMP=0x0000000100054588

@end
