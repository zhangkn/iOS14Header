//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL, SRCompactEditableUtteranceViewController;

@protocol SRCompactEditableUtteranceViewControllerDelegate
- (void)editableUtteranceViewController:(SRCompactEditableUtteranceViewController *)arg1 openURL:(NSURL *)arg2;
- (void)editableUtteranceViewController:(SRCompactEditableUtteranceViewController *)arg1 alternativeSelectedAtIndex:(long long)arg2;
- (void)editableUtteranceViewController:(SRCompactEditableUtteranceViewController *)arg1 didFinishEditingWithText:(NSString *)arg2;
- (void)didResignFirstResponderFromUtteranceViewController:(SRCompactEditableUtteranceViewController *)arg1;
- (void)willBeginEditingFromUtteranceViewController:(SRCompactEditableUtteranceViewController *)arg1;
- (void)editableUtteranceViewController:(SRCompactEditableUtteranceViewController *)arg1 requestsKeyboardWithCompletion:(void (^)(_Bool))arg2;
@end
