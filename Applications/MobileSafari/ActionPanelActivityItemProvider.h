//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFLinkWithPreviewActivityItemProvider.h>

@class TabDocument;

@interface ActionPanelActivityItemProvider : _SFLinkWithPreviewActivityItemProvider
{
    TabDocument *_tabDocument;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000902fc
@property(readonly, nonatomic) TabDocument *tabDocument; // @synthesize tabDocument=_tabDocument;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;	// IMP=0x0000000100090208
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;	// IMP=0x00000001000901f0
- (id)initWithTabDocument:(id)arg1;	// IMP=0x0000000100090174
- (id)initWithPlaceholderItem:(id)arg1 tabDocument:(id)arg2;	// IMP=0x0000000100090048

@end

