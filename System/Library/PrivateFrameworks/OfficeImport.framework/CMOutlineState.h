/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, WDListDefinition, WDList;

@interface CMOutlineState : NSObject {

	NSMutableArray* _counters;
	WDListDefinition* _listDefinition;
	WDList* _currentList;

}

@property (readonly) WDListDefinition * listDefinition;              //@synthesize listDefinition=_listDefinition - In the implementation block
@property (retain) WDList * currentList;                             //@synthesize currentList=_currentList - In the implementation block
-(void)reset;
-(id)init;
-(unsigned long long)levelCount;
-(WDList *)currentList;
-(unsigned long long)counterAtLevel:(unsigned char)arg1 ;
-(void)setCurrentList:(WDList *)arg1 ;
-(id)levelDescriptionAtIndex:(unsigned char)arg1 ;
-(void)increaseCounterAtLevel:(unsigned char)arg1 ;
-(WDListDefinition *)listDefinition;
-(id)initWithListDefinition:(id)arg1 ;
-(void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2 ;
@end
