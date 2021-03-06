/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDGroupInfo.h>

@class TSDShapeInfo;

@interface TSDFreehandDrawingInfo : TSDGroupInfo {

	TSDShapeInfo* _freehandDrawingSpacerShape;
	double _opacity;

}

@property (nonatomic,readonly) TSDShapeInfo * freehandDrawingSpacerShape;              //@synthesize freehandDrawingSpacerShape=_freehandDrawingSpacerShape - In the implementation block
@property (assign,nonatomic) double opacity;                                           //@synthesize opacity=_opacity - In the implementation block
-(unsigned)elementKind;
-(BOOL)containsDisallowedElementKind:(unsigned)arg1 ;
-(double)opacity;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(void)setOpacity:(double)arg1 ;
-(BOOL)allowsTitle;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)animationFilters;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(id)childEnumeratorForUserSearch;
-(void)saveToArchive:(GroupArchive*)arg1 archiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(BOOL)allowsCaption;
-(void)loadFromArchive:(const GroupArchive*)arg1 unarchiver:(id)arg2 upgradeDOLC:(BOOL)arg3 ;
-(TSDShapeInfo *)freehandDrawingSpacerShape;
-(BOOL)isFreehandDrawing;
-(id)infosToObserveForAttachedInfo;
-(id)allNestedChildrenInfosForWrap;
-(id)initWithSpacerShapeAndContext:(id)arg1 geometry:(id)arg2 ;
-(BOOL)shouldHaveFakeShapeInfoForPersistingEmptyGroup;
-(void)setFreehandDrawingSpacerShape:(TSDShapeInfo *)arg1 ;
-(BOOL)isEffectivelyEmpty;
-(id)tsaxTypeDescription;
@end

