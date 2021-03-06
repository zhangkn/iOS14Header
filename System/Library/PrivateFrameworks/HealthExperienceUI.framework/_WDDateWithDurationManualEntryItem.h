/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperienceUI/WDAddDataManualEntryItem.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, NSDate, NSString;

@interface _WDDateWithDurationManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _startItem;
	WDAddDataManualEntryItem* _durationItem;
	NSDate* _maximumStartDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginEditing;
-(id)generateValue;
-(id)tableViewCells;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(id)initWithMaximumDate:(id)arg1 ;
-(void)_setupEntryItems;
@end

