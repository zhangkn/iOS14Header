/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSTranslationContentFilling <NSObject>
@property (assign,nonatomic,__weak) id<WBSTranslationContentFillingDelegate> fillingDelegate; 
@required
-(void)replaceExtractedContent:(id)arg1 withTranslatedContent:(id)arg2 targetLocale:(id)arg3;
-(id<WBSTranslationContentFillingDelegate>)fillingDelegate;
-(void)setFillingDelegate:(id)arg1;

@end
