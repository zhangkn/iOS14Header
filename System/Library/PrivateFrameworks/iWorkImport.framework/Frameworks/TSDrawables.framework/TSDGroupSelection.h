/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDDrawableSelection.h>

@class NSSet;

@interface TSDGroupSelection : TSDDrawableSelection {

	BOOL _hasSelectedInfosInNonGroupContainer;

}

@property (assign,nonatomic) BOOL hasSelectedInfosInNonGroupContainer;              //@synthesize hasSelectedInfosInNonGroupContainer=_hasSelectedInfosInNonGroupContainer - In the implementation block
@property (nonatomic,readonly) NSSet * containerGroups; 
@property (nonatomic,readonly) BOOL isCrossContainerSelection; 
+(Class)archivedSelectionClass;
-(id)subclassDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContainerGroups:(id)arg1 hasSelectedInfosInNonGroupContainer:(BOOL)arg2 ;
-(NSSet *)containerGroups;
-(BOOL)hasSelectedInfosInNonGroupContainer;
-(BOOL)isCrossContainerSelection;
-(id)initWithGroupInfo:(id)arg1 ;
-(void)setHasSelectedInfosInNonGroupContainer:(BOOL)arg1 ;
@end

