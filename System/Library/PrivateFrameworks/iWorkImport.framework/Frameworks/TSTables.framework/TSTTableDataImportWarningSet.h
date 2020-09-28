/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSReading/TSTTableDataObject.h>

@interface TSTTableDataImportWarningSet : TSTTableDataObject
+(id)objectWithImportWarningSet:(id)arg1 refCount:(unsigned)arg2 ;
-(id)description;
-(void)encodeToArchive:(TableDataList_ListEntry*)arg1 archiver:(id)arg2 ;
-(id)initObjectWithImportWarningSet:(id)arg1 refCount:(unsigned)arg2 ;
-(id)importWarningSet;
-(void)loadFromArchive:(const TableDataList_ListEntry*)arg1 unarchiver:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)estimateByteSize;
@end
