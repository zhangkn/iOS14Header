/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HUClipScrubberPlayheadView : UIView {

	BOOL _drawsUpperContent;
	BOOL _editing;

}

@property (assign,nonatomic) BOOL drawsUpperContent;              //@synthesize drawsUpperContent=_drawsUpperContent - In the implementation block
@property (assign,nonatomic) BOOL editing;                        //@synthesize editing=_editing - In the implementation block
-(void)setEditing:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)editing;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDrawsUpperContent:(BOOL)arg1 ;
-(BOOL)drawsUpperContent;
@end
