/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class NSAttributedString;

@interface RTTUIActivityItemProvider : UIActivityItemProvider {

	NSAttributedString* _transcript;

}

@property (nonatomic,retain) NSAttributedString * transcript;              //@synthesize transcript=_transcript - In the implementation block
-(NSAttributedString *)transcript;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(void)setTranscript:(NSAttributedString *)arg1 ;
@end

