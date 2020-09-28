/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@class HFCharacteristicTriggerBuilder, UINavigationItem, NSString;

@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {

	HFCharacteristicTriggerBuilder* _characteristicTriggerBuilder;
	unsigned long long _mode;
	unsigned long long _source;
	UINavigationItem* _effectiveNavigationItem;
	/*^block*/id _filter;

}

@property (nonatomic,retain) HFCharacteristicTriggerBuilder * characteristicTriggerBuilder;              //@synthesize characteristicTriggerBuilder=_characteristicTriggerBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                                                //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) UINavigationItem * effectiveNavigationItem;                               //@synthesize effectiveNavigationItem=_effectiveNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate; 
@property (nonatomic,copy) id filter;                                                                    //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)mode;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)filter;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(void)viewDidLoad;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(void)didChangeSelection;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 effectiveNavigationItem:(id)arg4 delegate:(id)arg5 ;
-(void)_next:(id)arg1 ;
-(HFCharacteristicTriggerBuilder *)characteristicTriggerBuilder;
-(void)_cancel:(id)arg1 ;
-(void)_validateNextButton;
-(void)_addCharacteristicEventsForAlarmItem:(id)arg1 ;
-(void)_addCharacteristicEventsForOtherDeviceItem:(id)arg1 ;
-(void)setCharacteristicTriggerBuilder:(HFCharacteristicTriggerBuilder *)arg1 ;
-(void)setFilter:(id)arg1 ;
-(unsigned long long)source;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(UINavigationItem *)effectiveNavigationItem;
@end
