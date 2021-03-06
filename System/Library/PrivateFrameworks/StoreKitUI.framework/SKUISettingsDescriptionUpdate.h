/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSIndexSet;

@interface SKUISettingsDescriptionUpdate : NSObject {

	NSArray* _indexPaths;
	NSIndexSet* _indexSet;
	long long _updateType;

}

@property (nonatomic,retain) NSArray * indexPaths;                //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,retain) NSIndexSet * indexSet;               //@synthesize indexSet=_indexSet - In the implementation block
@property (nonatomic,readonly) long long updateType;              //@synthesize updateType=_updateType - In the implementation block
-(NSArray *)indexPaths;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(long long)updateType;
-(void)setIndexSet:(NSIndexSet *)arg1 ;
-(NSIndexSet *)indexSet;
-(id)initWithUpdateType:(long long)arg1 ;
@end

