/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTCell : NSObject <NSCopying> {

	SCD_Struct_TS180* mPrivate;

}
+(id)cell;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithCell:(id)arg1 ;
-(id)description;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(BOOL)arg3 ;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(id)initWithStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(BOOL)isCellContentsEqualToCell:(id)arg1 ;
-(void)writeToStorageRef:(TSTCellStorage*)arg1 ;
@end

