//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

@class TabDocument;

@interface InternalOpenInSafariViewControllerUIActivity : _SFActivity
{
    TabDocument *_tabDocument;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100162a0c
- (void)performActivity;	// IMP=0x000000010016293c
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000001001628c4
- (id)_systemImageName;	// IMP=0x00000001001628b8
- (id)activityTitle;	// IMP=0x00000001001628ac
- (id)activityType;	// IMP=0x00000001001628a0
- (id)initWithTabDocument:(id)arg1;	// IMP=0x0000000100162810

@end

