//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AFUserUtterance, AFUserUtteranceSelectionResults, BKSAnimationFenceHandle, NSArray, NSLocale, NSString, NSURL, SRCompactViewController, UIViewController;

@protocol SRCompactViewControllerDelegate
- (void)siriCompactViewController:(SRCompactViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)siriCompactViewController:(SRCompactViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)didPresentContentForCompactViewController:(SRCompactViewController *)arg1;
- (void)didResignFirstResponderFromCompactViewController:(SRCompactViewController *)arg1;
- (void)willBeginEditingFromCompactViewController:(SRCompactViewController *)arg1;
- (void)compactViewController:(SRCompactViewController *)arg1 setStatusViewHidden:(_Bool)arg2;
- (NSLocale *)localeForCompactViewController:(SRCompactViewController *)arg1;
- (_Bool)compactViewControllerShouldPreventUserInteraction:(SRCompactViewController *)arg1;
- (void)stopSpeakingForCompactViewController:(SRCompactViewController *)arg1;
- (void)compactViewController:(SRCompactViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)compactViewController:(SRCompactViewController *)arg1 requestsKeyboardWithCompletion:(void (^)(_Bool))arg2;
- (void)viewController:(SRCompactViewController *)arg1 didFinishEditingUtteranceWithText:(NSString *)arg2 originalUserUtterance:(AFUserUtterance *)arg3 selectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)viewControllerDidPresentUserInterface:(SRCompactViewController *)arg1;
- (void)userTouchedSnippet;
- (void)endSiriSessionForViewController:(SRCompactViewController *)arg1 withDismissalReason:(unsigned long long)arg2;
- (void)viewController:(SRCompactViewController *)arg1 requestsHostBackgroundBlurVisible:(_Bool)arg2 reason:(long long)arg3 fence:(BKSAnimationFenceHandle *)arg4;
- (void)viewControllerViewWillDisappear:(SRCompactViewController *)arg1;
- (void)viewController:(SRCompactViewController *)arg1 openURL:(NSURL *)arg2 completion:(void (^)(_Bool))arg3;
- (void)viewController:(SRCompactViewController *)arg1 performAceCommands:(NSArray *)arg2 completion:(void (^)(_Bool))arg3;
- (double)expectedContentWidth;
@end
