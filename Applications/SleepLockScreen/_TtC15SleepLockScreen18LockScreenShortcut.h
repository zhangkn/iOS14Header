//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WFWorkflowRunnerClientDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC15SleepLockScreen18LockScreenShortcut : NSObject <WFWorkflowRunnerClientDelegate>
{
    MISSING_TYPE *title;	// 8 = 0x8
    MISSING_TYPE *subtitle;	// 24 = 0x18
    MISSING_TYPE *icon;	// 40 = 0x28
    MISSING_TYPE *workflow;	// 48 = 0x30
    MISSING_TYPE *localizedAppName;	// 56 = 0x38
    MISSING_TYPE *runnerClient;	// 72 = 0x48
    MISSING_TYPE *progressSubscriber;	// 80 = 0x50
    MISSING_TYPE *_progressFraction;	// 0 = 0x0
    MISSING_TYPE *progress;	// 4277009103 = 0xfeedfacf
}

- (void).cxx_destruct;	// IMP=0x0000000100006f84
- (id)init;	// IMP=0x00000001000070a0
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(_Bool)arg3;	// IMP=0x0000000100006ed0
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;	// IMP=0x0000000100006e5c

@end
