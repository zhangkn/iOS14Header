/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface REExportedTable : NSObject {

	NSMutableArray* _data;
	BOOL _sortable;
	NSArray* _header;

}

@property (nonatomic,retain) NSArray * header;                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) unsigned long long rowsCount; 
@property (assign,nonatomic) BOOL sortable;                               //@synthesize sortable=_sortable - In the implementation block
-(NSArray *)header;
-(void)setHeader:(NSArray *)arg1 ;
-(id)init;
-(void)addRow:(id)arg1 ;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(BOOL)sortable;
-(void)setSortable:(BOOL)arg1 ;
-(unsigned long long)rowsCount;
@end

