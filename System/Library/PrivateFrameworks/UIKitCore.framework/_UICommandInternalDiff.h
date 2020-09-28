/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface _UICommandInternalDiff : NSObject {

	NSMutableSet* _menuDeletes;
	NSMutableDictionary* _itemDeletes;
	NSMutableDictionary* _inserts;

}

@property (nonatomic,readonly) NSSet * menuDeletes;                     //@synthesize menuDeletes=_menuDeletes - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemDeletes;              //@synthesize itemDeletes=_itemDeletes - In the implementation block
@property (nonatomic,readonly) NSDictionary * inserts;                  //@synthesize inserts=_inserts - In the implementation block
-(NSDictionary *)inserts;
-(void)deleteMenu:(id)arg1 ;
-(NSSet *)menuDeletes;
-(NSDictionary *)itemDeletes;
-(id)_deletesForMenu:(id)arg1 ;
-(id)_parentInsertsForMenu:(id)arg1 ;
-(void)deleteItem:(id)arg1 inMenu:(id)arg2 ;
-(void)insertAtStartElements:(id)arg1 atEndElements:(id)arg2 inMenu:(id)arg3 ;
-(void)insertBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3 inMenu:(id)arg4 ;
-(void)insertFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2 inMenu:(id)arg3 ;
@end
