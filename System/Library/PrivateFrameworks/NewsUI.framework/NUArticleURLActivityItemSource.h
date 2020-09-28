/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSURL;

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource {

	NSURL* _articleURL;

}

@property (nonatomic,readonly) NSURL * articleURL;              //@synthesize articleURL=_articleURL - In the implementation block
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(NSURL *)articleURL;
-(id)bodyStringForMailMessage;
-(id)initWithHeadline:(id)arg1 URLModifier:(id)arg2 ;
@end
