/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPAbstractMutableLargeArray.h>

@interface TSPMutableLargeUUIDArray : TSPAbstractMutableLargeArray
+(Class)arraySegmentClass;
-(void)addUUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)saveToMessage:(LargeUUIDArray*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const LargeUUIDArray*)arg1 unarchiver:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)UUIDAtIndex:(unsigned long long)arg1 ;
-(void)insertUUID:(UUIDData<TSP::UUIDData>)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceUUIDAtIndex:(unsigned long long)arg1 withUUID:(UUIDData<TSP::UUIDData>)arg2 ;
@end
