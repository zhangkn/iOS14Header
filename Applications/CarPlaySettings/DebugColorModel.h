//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface DebugColorModel : NSObject
{
    UIColor *_color;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (id)modelWithColor:(id)arg1 name:(id)arg2;	// IMP=0x00000001000057b0
- (void).cxx_destruct;	// IMP=0x0000000100005860
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

@end
