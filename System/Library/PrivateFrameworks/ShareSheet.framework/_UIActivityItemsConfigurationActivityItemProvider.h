/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityItemProvider.h>

@protocol UIActivityItemsConfigurationReading;
@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {

	id<UIActivityItemsConfigurationReading> _activityItemsConfiguration;
	id _item;
	long long _index;

}
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)item;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)_title;
-(id)initWithActivityItemsConfiguration:(id)arg1 itemAtIndex:(long long)arg2 ;
@end

