/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSMutableArray, NSArray, NSString;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {

	NSMutableArray* _cumulativeRowOffsets;
	NSArray* _allSubItems;
	NSArray* _subitems;
	NSString* _titleForHeader;

}

@property (nonatomic,retain) NSArray * subitems;                     //@synthesize subitems=_subitems - In the implementation block
@property (nonatomic,retain) NSString * titleForHeader;              //@synthesize titleForHeader=_titleForHeader - In the implementation block
-(long long)numberOfRows;
-(void)setSubitems:(NSArray *)arg1 ;
-(void)setData:(id)arg1 ;
-(NSArray *)subitems;
-(void)setOwningViewController:(id)arg1 ;
-(NSString *)titleForHeader;
-(void)commitEditing;
-(void)setProfileFirstName:(id)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(void)_getSubitem:(id*)arg1 andSubitemRow:(long long*)arg2 forTableViewRow:(long long)arg3 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)setTitleForHeader:(NSString *)arg1 ;
@end
