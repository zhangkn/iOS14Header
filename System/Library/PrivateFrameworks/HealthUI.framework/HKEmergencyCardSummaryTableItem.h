/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {

	HKMedicalIDPersonSummaryCell* _cell;

}
-(id)_cell;
-(void)setData:(id)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(UIEdgeInsets)separatorInset;
-(id)initInEditMode:(BOOL)arg1 ;
-(void)timeZoneDidChange:(id)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
@end

