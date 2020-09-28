/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class UITableView, NTKComplicationPickerDetailViewConfiguration, NSArray, CNContactStoreDataSource, NTKCFaceDetailComplicationCellProvider, NSIndexPath, NSString;

@interface NTKPeopleDetailComplicationPickerDataSource : NSObject <UITableViewDataSource> {

	UITableView* _tableView;
	NTKComplicationPickerDetailViewConfiguration* _configuration;
	NSArray* _allFavoriteContacts;
	CNContactStoreDataSource* _allContactsDataSource;
	NTKCFaceDetailComplicationCellProvider* _pickerCellProvider;

}

@property (nonatomic,readonly) NSArray * allFavoriteContacts;                                             //@synthesize allFavoriteContacts=_allFavoriteContacts - In the implementation block
@property (nonatomic,readonly) CNContactStoreDataSource * allContactsDataSource;                          //@synthesize allContactsDataSource=_allContactsDataSource - In the implementation block
@property (nonatomic,readonly) NTKCFaceDetailComplicationCellProvider * pickerCellProvider;               //@synthesize pickerCellProvider=_pickerCellProvider - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NTKComplicationPickerDetailViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSIndexPath * selectedIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
+(id)_newDataSourceWithName:(id)arg1 ;
+(id)_descriptorForRequiredKeysWithDescription:(id)arg1 ;
-(void)_reloadData;
-(id)_contactAtIndexPath:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)_numberOfItemsInSection:(long long)arg1 ;
-(id)_sectionIndexTitles;
-(NTKComplicationPickerDetailViewConfiguration *)configuration;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_allFavoriteContactsSorted;
-(void)_contactStoreChanged:(id)arg1 ;
-(void)_favoritesChanged:(id)arg1 ;
-(NSArray *)allFavoriteContacts;
-(CNContactStoreDataSource *)allContactsDataSource;
-(BOOL)_isFavoriteAtIndexPath:(id)arg1 ;
-(BOOL)_favoritesSectionNeeded;
-(id)_allContactsSections;
-(long long)_sectionForTitleIndex:(long long)arg1 ;
-(long long)_totalSectionCount;
-(id)complicationItemForIndexPath:(id)arg1 ;
-(NTKCFaceDetailComplicationCellProvider *)pickerCellProvider;
-(BOOL)_itemIsSelectedAtIndexPath:(id)arg1 ;
-(long long)_contactIndexForIdentifier:(id)arg1 inContactList:(id)arg2 ;
-(id)initWithTableView:(id)arg1 detailConfiguration:(id)arg2 ;
-(long long)collectionView:(id)arg1 sectionForSectionTitleIndex:(long long)arg2 ;
-(id)sectionIndexTitlesForCollectionView:(id)arg1 ;
-(id)_indexPathForIdentifier:(id)arg1 ;
@end
