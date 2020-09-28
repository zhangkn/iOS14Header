//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TabCollectionItem-Protocol.h"

@class NSString, NSUUID, TiltedTabItemLayoutInfo, TiltedTabView, UIImage;

@interface TiltedTabItem : NSObject <TabCollectionItem>
{
    _Bool _isPlaceholder;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
    unsigned long long _mediaStateIcon;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    long long _dragState;	// 48 = 0x30
    unsigned long long _tintStyle;	// 56 = 0x38
    TiltedTabItemLayoutInfo *_layoutInfo;	// 64 = 0x40
    TiltedTabView *_tiltedTabView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000b9e90
@property(nonatomic) __weak TiltedTabView *tiltedTabView; // @synthesize tiltedTabView=_tiltedTabView;
@property(readonly, nonatomic) TiltedTabItemLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) unsigned long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(nonatomic) long long dragState; // @synthesize dragState=_dragState;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned long long mediaStateIcon; // @synthesize mediaStateIcon=_mediaStateIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
